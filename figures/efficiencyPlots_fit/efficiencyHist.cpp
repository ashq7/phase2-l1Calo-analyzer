/*******************************************************************/
/* efficiencyHist.cpp                                              */
/* Author: Stephanie Kwan                                          */
/*******************************************************************/

#include "TGraphAsymmErrors.h"
#include "TH1.h"
#include "TH1F.h"

#include "TAxis.h"
#include "TChain.h"

#include "THStack.h"
#include "TLegend.h"
#include "TPad.h"
#include "TPaveText.h"
#include "TROOT.h"
#include "TStyle.h"
#include "TTree.h"

#include <assert.h>
#include <cmath>
#include <iostream>
#include <math.h>
#include <string>
#include <TMath.h>
#include <vector>
//#include "TMVA/Tools.h"

#include "../baseCodeForPlots/tdrstyle.C"
#include "../baseCodeForPlots/comparisonPlots.C"

#ifndef EFFICIENCY_HIST_CPP_INCL
#define EFFICIENCY_HIST_CPP_INCL

/*******************************************************************/

/* Exponentially Modified Gaussian */
Double_t EMG(Double_t *x, Double_t *par){
  double x_prime = par[1]*(x[0] - par[0]);
  double term_1 = 0.5 * (1 + TMath::Erf(x_prime));
  double exp_modif = TMath::Exp(-par[2]*(x_prime - par[2]*0.5) );
  double term_2 = 0.5 * (1 + TMath::Erf(x_prime - par[2]));
  double func = term_1 - exp_modif*term_2 - 0.02;
  return func;
}

TF1 *EMGfit(TGraphAsymmErrors *pEff, Double_t mu, Double_t sigma_inv, Double_t lambda_sigma){
  TF1* f1 = new TF1("f1", EMG, 200, 500, 3);
  f1->SetLineColor(pEff->GetLineColor());
  f1->SetLineWidth(pEff->GetLineWidth());
  f1->SetParameters(mu, sigma_inv, lambda_sigma);
  pEff->Fit(f1);
  return f1;
}

/* Error function */
Double_t ApproxErf(Double_t x) {
  double erflim = 5.0;
  if (x > erflim) {
    return 1.0;
  }
  if (x < -erflim) {
    return -1.0;
  }
  return TMath::Erf(x);
}

/* Crystal Ball function for lossy processes in HEP */
Double_t CB(Double_t *x, Double_t *par) { //Double_t mean, Double_t sigma, Double_t alpha, Double_t n, Double_t norm) {
  double pi = M_PI;
  double sqrt2 = TMath::Sqrt(2);
  double sqrtPiOver2 = TMath::Sqrt(pi / 2);

  double sig = abs(par[1]);
  double t = (x[0] - par[0])/sig;
  if (par[2] < 0) {
    t = -t;
  }

  double absAlpha = abs(par[2]);
  double A = TMath::Power(par[3] / absAlpha, par[3]) * TMath::Exp(-0.5 * absAlpha * absAlpha);
  double B = absAlpha - par[3] / absAlpha;
  double C = par[3] / absAlpha * TMath::Exp(-0.5*absAlpha*absAlpha) / (par[3] - 1);
  double D = (1 + ApproxErf(absAlpha / sqrt2)) * sqrtPiOver2;
  double N = par[4] / (D + C);
  double crystalBall = 1;

  if (t <= absAlpha) {
    crystalBall = N * (1 + ApproxErf( t / sqrt2 )) * sqrtPiOver2;
  }
  else {
    crystalBall = N * (D +  A * (1/TMath::Power(t-B,par[3]-1) - 1/TMath::Power(absAlpha - B,par[3]-1)) / (1 - par[3]));
  }

  return crystalBall;
}

Double_t ApproxATAN(Double_t *x, Double_t *par) { //xturn, Double_t p, Double_t width){
  double pi = M_PI;
  double arctan = 0.;
  if (x[0] < par[0]){
    arctan = par[1];
  }
  if (x[0] >= par[0]){
    arctan = TMath::Power(ApproxErf((x[0] - par[0]) / 5.), 2) * 2. * (1. - par[1]) / pi * TMath::ATan(pi / 80. * par[2] * (x[0] - par[0])) + par[1];
  }
  return arctan;
}

/* CB convolution with arctan */
TF1 *CBconvATAN(TGraphAsymmErrors *pEff, Double_t mean, Double_t sigma, Double_t alpha, Double_t n, Double_t norm, Double_t xturn, Double_t p, Double_t width) {
  TF1* f1 = new TF1("f1", CB, 0., 100., 5);
  TF1* f2 = new TF1("f2", ApproxATAN, 0., 100., 3);
  TF1Convolution *f_conv = new TF1Convolution("f1", "f2", 0., 100., true);
  TF1 *f3 = new TF1("f3", *f_conv, 0., 100., f_conv->GetNpar());
  f3->SetLineColor(pEff->GetLineColor());
  f3->SetLineWidth(pEff->GetLineWidth());
  f3->SetParameters(mean, sigma, alpha, n, norm, xturn, p, width);
  pEff->Fit(f3);
  return f3;
}

TF1 *Error(TGraphAsymmErrors *pEff, Double_t offset, Double_t norm, Double_t mean, Double_t sigma){
  TF1 *f4 = new TF1("f4","[0]+([1]/2)*TMath::Erf(sqrt(2)*(x-[2])/[3])",0.,100.);
  f4->SetLineColor(pEff->GetLineColor());
  f4->SetLineWidth(pEff->GetLineWidth());
  f4->SetParameters(offset, norm, mean, sigma);
  pEff->Fit(f4);
  return f4;
}

void plotNEfficiencies(std::vector<TGraphAsymmErrors*> graphs, 
                      std::vector<TString> labels,
                      std::vector<int> colors,
		      std::vector<int> styles,
                      TString xAxisLabel,
                      TString header,
                      TString outputName,
                      TString outputDir,
                      TString comment = "",
                      float yMin = 0.0,
                      float yMax = 1.1,
                      TString extracomment = "",
                      TString legendPos = "bottomright"
             ) {
  assert((graphs.size() == labels.size()) && (graphs.size() == colors.size()));

  setTDRStyle();
  TCanvas* Tcan = new TCanvas("Tcan","", 100, 20, 1000, 1000);
  TLegend *leg;
  if (legendPos == "bottomright") {
    leg = new TLegend(0.4,0.2,0.8,0.46);
  } 
  else if (legendPos == "topright") {
    leg = new TLegend(0.55,0.65,0.90,0.87);
  }
  applySmallerLegStyle(leg);

  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0);
  Tcan->SetGrid();

  TLatex *latex = new TLatex(); 
  latex->SetNDC();
  latex->SetTextFont(42);
  latex->SetTextSize(0.05);
  latex->SetTextColor(kBlack);

  // Set current canvas
  Tcan->cd();  
  Tcan->SetFillColor(0);


  std::vector<TGraphAsymmErrors*>::iterator itGraph;
  std::vector<TString>::iterator itLabel;
  std::vector<int>::iterator itColor;
  std::vector<int>::iterator itStyle;
  
  TGraphAsymmErrors* histDummy;
  for (itGraph = graphs.begin(), itLabel = labels.begin(), itColor = colors.begin(), itStyle = styles.begin();
       itGraph != graphs.end();
       itGraph++, itLabel++, itColor++, itStyle++ ) {

    // only do this once 
    if (itGraph == graphs.begin()) {
      histDummy = new TGraphAsymmErrors(**itGraph);
    }
      
    // De-reference the iterator to get the TGraphAsymmErrors*
    (*itGraph)->SetMarkerColor(*itColor);
    (*itGraph)->SetMarkerStyle(*itStyle);
    (*itGraph)->SetLineWidth(2);
    (*itGraph)->SetLineColor(*itColor);
    (*itGraph)->SetMarkerSize(2);
  }

  histDummy->SetMarkerColor(0);
  histDummy->SetLineColor(0);

  histDummy->Draw("");

  int count = 0;
  for (itGraph = graphs.begin(); itGraph != graphs.end(); itGraph++)  {
    (*itGraph)->Draw("pez");
    //TF1 *fit1 = EMGfit((*itGraph), 30, 0.05, 10);
    //TF1 *fit1 = CBconvATAN((*itGraph), 50., 3., 3., 2., 0.95, 10., 0.8, 10.);
    if(count == 0) TF1 *fit1 = Error((*itGraph), 1, 0.99, 27, 2);
    if(count == 1) TF1 *fit1 = Error((*itGraph), 0.59, 1.28, 28, 7);
    count++;
  }

  histDummy->GetXaxis()->SetTitle(xAxisLabel);
  histDummy->GetYaxis()->SetTitle("L1 Efficiency");
  histDummy->GetXaxis()->SetTitleSize(0.04); // default is 0.03                                                                    
  histDummy->GetXaxis()->SetTitleOffset(1.1);
  histDummy->GetYaxis()->SetTitleSize(0.04);
  histDummy->GetXaxis()->SetLabelSize(0.04);
  histDummy->GetYaxis()->SetLabelSize(0.04);
  /* Set y-axis limits */  
  histDummy->GetYaxis()->SetRangeUser(yMin, yMax);
  // histDummy->GetYaxis()->SetRangeUser(0.8, 1.02);

  // Customize legend 

  for (itGraph = graphs.begin(), itLabel = labels.begin();
       itGraph != graphs.end();
       itGraph++, itLabel++)
    {
      leg->AddEntry(*itGraph, "#scale[0.6]{" + *itLabel + "}",  "lepz");
    }
  leg->Draw();


  // Default to RCT label, use GCT if not
 // TString emuLabel = "#scale[0.7]{#bf{CMS}} #scale[0.6]{#bf{" + header + "}}";  
 // if (outputName.Contains("RCT")) {
 //   emuLabel = "#scale[1.0]{#bf{CMS}} #scale[0.6]{#it{Phase 2 RCT emulator}}";  
 // }
  TString emuLabel = "#scale[1.0]{#bf{CMS}} #scale[0.6]{#bf{" + header + "}}";
  latex->DrawLatex(0.16, 0.960, emuLabel); 
  latex->DrawLatex(0.75, 0.960, "#scale[0.7]{#bf{14 TeV, 200 PU}}"); 

  // Commentary x and y-position
  float commentaryXpos = 0.44;
  
  float offset = 0.0;
  if (legendPos == "bottomright") {
    offset = 0;
  }
  else if (legendPos == "topright") {
    offset = 0.38;
  }
  float yRow1 = 0.540 + offset;
  float yRow2 = 0.480 + offset;
  float yRow3 = 0.420 + offset;
  float yRow4 = 0.360 + offset;

  //latex->DrawLatex(commentaryXpos, yRow1, "#scale[0.7]{Phase-2 L1EG (Crystal, Barrel)}");
  latex->DrawLatex(commentaryXpos, yRow2, "#scale[0.7]{" + comment + "}");
  if (extracomment != "") {
    latex->DrawLatex(commentaryXpos, yRow3, "#scale[0.7]{" + extracomment + "}");
  }
  Tcan->Update();


  Tcan->cd();

  TString title;
  title = outputDir+outputName;
  Tcan->SaveAs(title+".pdf");
  Tcan->SaveAs(title+".png");
  Tcan->SaveAs(title+".C");


  Tcan->Close();
  delete histDummy, leg, Tcan;
}
             

/*******************************************************************/

#endif
