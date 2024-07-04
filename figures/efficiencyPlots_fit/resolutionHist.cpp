/*******************************************************************/
/* resolutionHist.cpp                                              */
/* Author: Ashling Quinn                                           */
/* Based on resolutionHist.cpp by Stephanie Kwan                   */
/*******************************************************************/

#include "TH1F.h"
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

#include "../baseCodeForPlots/tdrstyle.C"
#include "../baseCodeForPlots/comparisonPlots.C"

#ifndef RESOLUTION_HIST_CPP_INCL
#define RESOLUTION_HIST_CPP_INCL

/*******************************************************************/

Double_t Cruijff(Double_t *x, Double_t *par){
  double norm   = par[0];
  double mean   = par[1];
  double sigmaL = par[2];
  double sigmaR = par[3];
  double alphaL = par[4];
  double alphaR = par[5];
  double dx = x[0] - mean;
  double sigma = sigmaL;
  double alpha = alphaL;
  if (dx > 0) { sigma = sigmaR; alpha = alphaR; }
  double f = 2*sigma*sigma + alpha*dx*dx;
  double y = norm * TMath::Exp(-dx*dx/f);
  return y;
}

TF1 *Cruijfffit(TH1F *pEff, Double_t norm, Double_t mean, Double_t lambda_sigmaL, Double_t lambda_sigmaR, Double_t alphaL, Double_t alphaR){
  TF1* f1 = new TF1("f1", Cruijff, -1., 1., 6);
  f1->SetLineColor(pEff->GetLineColor());
  f1->SetLineWidth(pEff->GetLineWidth());
  f1->FixParameter(0,norm);

  //FOR ELECTRON:
  /*f1->SetParameter(1,mean);
  f1->SetParameter(2,lambda_sigmaL);
  f1->SetParameter(3,lambda_sigmaR);
  f1->SetParameter(4,alphaL);
  f1->SetParameter(5,alphaR);*/ 

  //FOR PHOTON:
  f1->SetParameters(norm, mean, lambda_sigmaL, lambda_sigmaR, alphaL, alphaR);
  pEff->Fit(f1);
  return f1;
}

//TF1 *Landaufit(TH1F *pEff, Double_t offset, Double_t norm, Double_t mean, Double_t sigma){
//  TF1 *f2 = new TF1("f2","[0]+[1]*TMath::Landau((x-[2])/[3])",-1.,1.);
TF1 *Landaufit(TH1F *pEff, Double_t norm, Double_t mean, Double_t sigma){
  TF1 *f2 = new TF1("f2","[0]*TMath::Landau((x-[1])/[2])",-0.25,0.25);
  f2->SetLineColor(pEff->GetLineColor());
  f2->SetLineWidth(pEff->GetLineWidth());
  //f2->SetParameter(0, offset);
  //f2->FixParameter(0, norm);
  //f2->SetParameter(1, mean);
  //f2->FixParameter(2, sigma);
  f2->SetParameters(norm, mean, sigma);
  pEff->Fit(f2);
  return f2;
}

void plotNResolutions(std::vector<TH1F*> graphs, 
             std::vector<TString> labels,
             std::vector<int> colors,
             TString xAxisLabel,
             //TString legendName,
             TString outputName,
             TString outputDir
             )
{
  assert((graphs.size() == labels.size()) && (graphs.size() == colors.size()));

  setTDRStyle();
  TCanvas* Tcan = new TCanvas("Tcan","", 100, 20, 1000, 800);
  TLegend* leg = new TLegend(0.68,0.4,0.9,0.55);
  applySmallerLegStyle(leg);

  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0);

  Tcan->SetGrid();

  TLatex *latex = new TLatex(); 
  latex->SetNDC();
  latex->SetTextFont(42);
  latex->SetTextColor(kBlack);

  Tcan->cd();     /* Set current canvas */
  Tcan->SetFillColor(0);


  std::vector<TH1F*>::iterator itGraph;
  std::vector<TString>::iterator itLabel;
  std::vector<int>::iterator itColor;
  
  TH1F* histDummy;
  for (itGraph = graphs.begin(), itLabel = labels.begin(), itColor = colors.begin();
       itGraph != graphs.end();
       itGraph++, itLabel++, itColor++)
    {
      if (itGraph == graphs.begin()) // only do this once 
   {
     histDummy = new TH1F(**itGraph);
   }
      
      // De-reference the iterator to get the TH1F*
      (*itGraph)->SetMarkerColor(*itColor);
      (*itGraph)->SetMarkerStyle(kFullCircle);
      (*itGraph)->SetLineWidth(2);
      (*itGraph)->SetLineColor(*itColor);
      (*itGraph)->SetMarkerSize(2);
      (*itGraph)->Scale(1/(*itGraph)->Integral());
    }

  histDummy->SetMarkerColor(0);
  histDummy->SetLineColor(0);

  histDummy->Draw("");

  for (itGraph = graphs.begin(); itGraph != graphs.end(); itGraph++)
    {
    //(*itGraph)->Scale(1/(*itGraph)->Integral());
    //(*itGraph)->Draw("hist same");
    (*itGraph)->Draw("pez same");
    //TF1 *fit1 = Cruijfffit((*itGraph), 0.58, -0.015, 0.05, 0.02, 0.1, 0.);
    //TF1 *fit1 = Landaufit((*itGraph), -0.01, 3.5, -0.01, -0.015);
    //TF1 *fit1 = Landaufit((*itGraph), 1.85, -0.01, -0.015);
    TF1 *fit1 = Cruijfffit((*itGraph), 0.16576, -0.019, 0.029, 0.02, 0.22, 0.076);
    }

  //histDummy->GetXaxis()->SetTitle("Resolution vs Gen Electron p_{T} [GeV]");
  //histDummy->GetXaxis()->SetTitle("Resolution vs Gen p_{T} [GeV]");
  //histDummy->GetYaxis()->SetTitle("#entries");
  histDummy->GetXaxis()->SetTitle(xAxisLabel);
  histDummy->GetXaxis()->SetTitleSize(0.04); // default is 0.03
  histDummy->GetXaxis()->SetTitleOffset(1.2);
  histDummy->GetXaxis()->SetLabelSize(0.04);
  histDummy->GetXaxis()->SetNdivisions(508);
  histDummy->GetYaxis()->SetTitle("Fraction of Events");
  histDummy->GetYaxis()->SetTitleSize(0.04);
  histDummy->GetYaxis()->SetTitleOffset(1.25);
  histDummy->GetYaxis()->SetLabelSize(0.04);
  histDummy->GetYaxis()->SetNdivisions(508);
  /* Set y-axis limits */  
  histDummy->GetYaxis()->SetRangeUser(0.0, 0.2);
  // histDummy->GetYaxis()->SetRangeUser(0.8, 1.02);

  /* Customize legend */
  for (itGraph = graphs.begin(), itLabel = labels.begin();
       itGraph != graphs.end();
       itGraph++, itLabel++)
    {
      leg->AddEntry(*itGraph, *itLabel,  "lepz");
    }
  leg->Draw();


  latex->DrawLatex(0.7,0.62,"#scale[0.7]{p_{T}^{GEN e} > 30 GeV}");
  latex->DrawLatex(0.7,0.56,"#scale[0.7]{p_{T}^{e/#gamma} > 25 GeV}");

  // Default to RCT label, use GCT if not
  TString emuLabel = "#scale[1.0]{#bf{CMS}} #scale[0.6]{#bf{Phase-2 Simulation Preliminary}}";
  if (outputName.Contains("RCT")) {
    emuLabel = "#scale[1.0]{#bf{CMS}} #scale[0.8]{#it{Phase 2 RCT emulator}}";  
  }
  latex->DrawLatex(0.16, 0.960, emuLabel); 
  latex->DrawLatex(0.8, 0.960, "#scale[0.7]{#bf{14 TeV, 200 PU}}");

//  if (!(outputName.Contains("genEta")) && !(outputName.Contains("genPhi"))) {  // genPt: put legend below the efficiecy curve
//    float commentaryXpos = 0.54;
//    latex->DrawLatex(commentaryXpos, 0.550, "#scale[0.8]{EG Barrel}");
//    latex->DrawLatex(commentaryXpos, 0.490, "#scale[0.8]{RelVal ElectronGun Pt 2 to 100}");
//    latex->DrawLatex(commentaryXpos, 0.430, "#scale[0.8]{L1 p_{T} > 25, |#eta^{Gen}| < 1.4841}");
//  //latex->DrawLatex(commentaryXpos, 0.700, "#scale[0.7]{}");
//  //latex->DrawLatex(commentaryXpos, 0.660, bonusDescriptor);
//  }  
//  else { // genEta: put legend above the efficiency curve
    float commentaryXpos = 0.62;
    //latex->DrawLatex(0.2, 0.840, "#scale[0.8]{Work in progress}");
    //latex->DrawLatex(commentaryXpos, 0.900, "#scale[0.8]{EG Barrel}");
    //latex->DrawLatex(commentaryXpos, 0.840, "#scale[0.8]{RelVal ElectronGun Pt 2 to 100}");
    //latex->DrawLatex(0.75, 0.840, "#scale[0.8]{VBH Higgs#rightarrow#tau#tau}");
    //latex->DrawLatex(commentaryXpos, 0.780, "#scale[0.8]{Gen p_{T} > 5, |#eta^{Gen}| < 1.4841}");
//  } 
  Tcan->Update();


  Tcan->cd();
  Tcan->SaveAs(outputDir+outputName+".pdf");
  Tcan->SaveAs(outputDir+outputName+".png");
  Tcan->SaveAs(outputDir+outputName+".C");

  Tcan->Close();
  delete Tcan;
}
             

/*******************************************************************/

#endif
