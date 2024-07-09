/*******************************************************************/
/* makeEfficienciesPlotDPnote.cpp                                  */
/* ROOT macro                                                      */
/* Edited by Ashling Quinn                                         */
/* Based on makeEfficienciesPlotDPnote.cpp by Stephanie Kwan       */
/* and makeEfficienciesPlotJet.cpp by Pallabi Das                  */
/* Note: version with Pallabi's fit                                */
/*                                                                 */
/* Usage: root -l -b -q makeEfficienciesPlotsDPNote.cpp            */
/*        Uncomment code blocks labeled "Plot #1", #2,...          */
/*        at a time                                                */
/*******************************************************************/

#include "efficiencyHist.cpp"
#include "calculateEfficiency.cpp"
#include "resolutionHist.cpp"
#include "calculateResolution.cpp"

#include "../parametricCurve/cutoffValues.h"
#include "../parametricCurve/fillTH2D.h"
#include "../parametricCurve/parametricFit.h"

#include <string>
/*********************************************************************/

/*
 * Make efficiency plot for one isolation parametrization scheme.
 * "mode" must be "isoOnly" or "ssOnly" to specify isolation or shower shape only for the secondary curve, otherwise it defaults to applying both an iso and shower shape.
 */

void makeEfficienciesPlotForOneScheme(TString mode, bool useOwnIsolationFlag, bool useOwnShowerShapeFlag, float acceptancePerBin, int nBinToStartFit, float isoPlateauPt)
{
  gROOT->ProcessLine(".L calculateEfficiency.cpp");

  /*TString treePath = "l1NtupleProducer/efficiencyTree";*/
  
  //TString rootFileDirectory2 = "/afs/hep.wisc.edu/home/pdas/forAshling/DoublePhoton_1.root";
  //TString rootFileDirectory2 = "/hdfs/store/user/aquinn/Phase2EGammaAnalyzer/DoubleElectron_combined.root";
  TString rootFileDirectory2 = "/eos/user/a/aquinn/root/DoubleElectron_combined.root";
  TString treePath2 = "l1NtupleSingleProducer/efficiencyTree";

  //TString rootFileDirectory2  = "/afs/hep.wisc.edu/home/pdas/DoublePhoton.root";
  //TString treePath2 = "l1NtupleProducer/efficiencyTree";

  //TString outputDirectory = "/afs/hep.wisc.edu/home/pdas/forAshling/CMSSW_14_0_0_pre3/src/L1Trigger/L1CaloPhase2Analyzer/figures/efficiencyPlots/";
  TString outputDirectory = "/eos/user/a/aquinn/figures/efficiencies/";

  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0);

  float xMin, xMax;
  TString genCut, l1Cut;
  bool useVariableBinning;

  std::vector<TGraphAsymmErrors*> vGraphs;
  std::vector<TString> vLabels;
  std::vector<int> vColors;
  std::vector<int> vStyles;
  std::vector<TH1F*> vReso;
  std::vector<TString> vResoLabels;
  std::vector<int> vResoColors;
  
  TString isoCut;
  TString ssCut;
  TString outputPlotName;

  // Use TDR version
  printf("[INFO:] Using TDR isolation flag\n");
  isoCut = "gct_is_iso";
  outputPlotName = "efficiency_genPt_barrel_GCT_acceptance_iso_and_ss_TDRflags";


  printf("[INFO:] Using TDR shower shape flag\n");
  ssCut = "gct_is_ss";

  // Default behavior: both iso and ss cuts
  TString redCutString = " && " + isoCut + " && " + ssCut;
  TString redLabel = "with iso and shower shape";


  outputPlotName = "efficiency_genPt_barrel_GCT_acceptance_useTDRFlags";
  redLabel = "with TDR iso and shape flags";

  if (mode == "isoOnly") {
    redCutString = " && " + isoCut;
    if (useOwnIsolationFlag) { 
      redLabel = "with custom iso flag only";
    }
    else {
      redLabel = "with TDR iso flag only";
    }
  }
  else if (mode == "ssOnly") {
    redCutString = "&& " + ssCut;
    if (useOwnShowerShapeFlag) {
      redLabel = "with custom shape flag only";
    }
    else {
      redLabel = "with TDR shape flag only";
    }
  }


  /**********************************************************************************************************/
  /* (Plot #1) eff. as a function of gen pT, standalone WP, GCT cluster pT > 25 GeV, genPt > 30 GeV         */
  /**********************************************************************************************************/

//  vGraphs.clear();  vLabels.clear();  vColors.clear();  vStyles.clear();
//  xMin = 0;
//  xMax = 100;
//  genCut  = "(abs(genEta) < 1.4841)";
//  l1Cut   = "(abs(genEta) < 1.4841) && (gct_cPt > 25)";
//  useVariableBinning = false;
//
//  /*TGraphAsymmErrors *all_b = calculateEfficiency("genPt", treePath, rootFileDirectory,
//              l1Cut,
//              genCut, xMin, xMax, useVariableBinning);
//  vGraphs.push_back(all_b);
//  vLabels.push_back("TDR emulator w/o WP");
//  vColors.push_back(kGray);
//
//  TGraphAsymmErrors *tight_b = calculateEfficiency("genPt", treePath, rootFileDirectory,  
//                                                  l1Cut + redCutString,
//                                                  genCut, xMin, xMax, useVariableBinning);
//  vGraphs.push_back(tight_b);
//  vLabels.push_back("TDR emulator with standalone WP");
//  vColors.push_back(kBlue);*/
//
//
//  TGraphAsymmErrors *all2_b = calculateEfficiency("genPt", treePath2, rootFileDirectory2,
//              l1Cut,
//              genCut, xMin, xMax, useVariableBinning);
//  vGraphs.push_back(all2_b);
//  vLabels.push_back("#scale[1.2]{Standalone e/#gamma w/o WP}");
  int ci;
//  ci = TColor::GetColor("#5790fc");
//  vColors.push_back(ci);
//  vStyles.push_back(20);
//
//  TGraphAsymmErrors *tight2_b = calculateEfficiency("genPt", treePath2, rootFileDirectory2,  
//                                                  l1Cut + redCutString,
//                                                  genCut, xMin, xMax, useVariableBinning);
//  vGraphs.push_back(tight2_b);
//  vLabels.push_back("#scale[1.2]{Standalone e/#gamma with WP}");
//  ci = TColor::GetColor("#f89c20");
//  vColors.push_back(ci);
//  vStyles.push_back(21);
//
//  plotNEfficiencies(vGraphs, vLabels, vColors, vStyles,
//                    "GEN Electron p_{T} (GeV)",
//                    "Phase-2 Simulation Preliminary",   
//                    outputPlotName +  "_standaloneWP_l1Ptgt25GeV_genPtgt30GeV",                                                             
//                    outputDirectory, "p_{T}^{e/#gamma} > 25 GeV, |#eta^{GEN e}| < 1.5", 0.0, 1.02, "");  


//  /***********************************************************************************/
//  /* (Plot #2) efficiency as a function of genEta: GCT > 25 GeV pT, gen pT > 30 GeV  */
//  /***********************************************************************************/
//
//  vGraphs.clear();  vLabels.clear();  vColors.clear();  vStyles.clear();
//  xMin = -1.5;
//  xMax = 1.5;
//
//  genCut  = "(abs(genEta) < 1.4841) && (genPt > 30)";
//  l1Cut   = "(abs(genEta) < 1.4841) && (gct_cPt > 25) && (genPt > 30)";
//  useVariableBinning = false;
//
//  /*TGraphAsymmErrors *allEta = calculateEfficiency("genEta", treePath, rootFileDirectory,
//              l1Cut,
//              genCut, xMin, xMax, useVariableBinning);
//  vGraphs.push_back(allEta);
//  vLabels.push_back("TDR emulator w/o WP");
//  vColors.push_back(kGray);
//
//  TGraphAsymmErrors *tightEta = calculateEfficiency("genEta", treePath, rootFileDirectory,
//                                                  l1Cut + redCutString,
//                                                  genCut, xMin, xMax, useVariableBinning);
//  vGraphs.push_back(tightEta);
//  vLabels.push_back("TDR emulator with standalone WP");
//  vColors.push_back(kBlue);*/
//
//  TGraphAsymmErrors *allEta2 = calculateEfficiency("genEta", treePath2, rootFileDirectory2,
//                                                   l1Cut,
//                                                   genCut, xMin, xMax, useVariableBinning);
//  vGraphs.push_back(allEta2);
//  vLabels.push_back("#scale[1.2]{Standalone e/#gamma w/o WP}");
//  ci = TColor::GetColor("#5790fc");
//  vColors.push_back(ci);
//  vStyles.push_back(20);
//
//  TGraphAsymmErrors *tightEta2 = calculateEfficiency("genEta", treePath2, rootFileDirectory2,
//                                                   l1Cut + redCutString,
//                                                   genCut, xMin, xMax, useVariableBinning);
//  vGraphs.push_back(tightEta2);
//  vLabels.push_back("#scale[1.2]{Standalone e/#gamma with WP}");
//  ci = TColor::GetColor("#f89c20");
//  vColors.push_back(ci); 
//  vStyles.push_back(21);
//
//  plotNEfficiencies(vGraphs, vLabels, vColors, vStyles,
//                    "GEN Photon #eta",
//                    "Phase-2 Simulation Preliminary",                                                                
//                    "efficiency_genEta_barrel_l1Ptgt25GeV_genPtgt30GeV",
//                    outputDirectory, "p_{T}^{GEN #gamma} > 30 GeV, |#eta^{GEN #gamma}| < 1.5", 0.0, 1.02, "p_{T}^{e/#gamma} > 25 GeV");
//  
  /*******************************************************/
  /* resolution as a function of genPt                */
  /*******************************************************/

  vReso.clear(); vResoLabels.clear(); vResoColors.clear();

  TH1F* reso1 = calculateResolution("(gct_cPt - genPt)/genPt", treePath2, rootFileDirectory2,
               "(abs(genEta) < 1.4841) && (gct_cPt > 25) && (genPt > 30)", -0.25, 0.25, useVariableBinning);
  vReso.push_back(reso1);
  vResoLabels.push_back("#scale[0.9]{|#eta^{GEN e}| < 1.5}");
  ci = TColor::GetColor("#5790fc");
  vResoColors.push_back(ci);

  plotNResolutions(vReso, vResoLabels, vResoColors,
        "(p_{T}^{e/#gamma} - p_{T}^{GEN e})/p_{T}^{GEN e}",
        "resolution_genPt",
        outputDirectory);

}



void makeEfficienciesPlotsDPNote(void) {

  makeEfficienciesPlotForOneScheme("both", false, false, 0.98, 4, 60);
}
/*********************************************************************/
