#ifdef __CLING__
#pragma cling optimize(0)
#endif
void efficiency_genPt_barrel_GCT_acceptance_useTDRFlags_standaloneWP_l1Ptgt25GeV()
{
//=========Macro generated from canvas: Tcan/
//=========  (Mon Jun 10 06:08:35 2024) by ROOT version 6.30/03
   TCanvas *Tcan = new TCanvas("Tcan", "",0,0,1000,1000);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Tcan->Range(-21.46341,-0.1617073,112.6829,1.082195);
   Tcan->SetFillColor(0);
   Tcan->SetBorderMode(0);
   Tcan->SetBorderSize(2);
   Tcan->SetGridx();
   Tcan->SetGridy();
   Tcan->SetTickx(1);
   Tcan->SetTicky(1);
   Tcan->SetLeftMargin(0.16);
   Tcan->SetRightMargin(0.02);
   Tcan->SetTopMargin(0.05);
   Tcan->SetBottomMargin(0.13);
   Tcan->SetFrameFillStyle(0);
   Tcan->SetFrameBorderMode(0);
   Tcan->SetFrameFillStyle(0);
   Tcan->SetFrameBorderMode(0);
   
   Double_t Graph_from_Num_fx3001[15] = { 3.333333, 10, 16.66667, 23.33333, 30, 36.66667, 43.33333, 50, 56.66667, 63.33333, 70, 76.66667, 83.33333, 90, 96.66667 };
   Double_t Graph_from_Num_fy3001[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_from_Num_felx3001[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fely3001[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_from_Num_fehx3001[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fehy3001[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,Graph_from_Num_fx3001,Graph_from_Num_fy3001,Graph_from_Num_felx3001,Graph_from_Num_fehx3001,Graph_from_Num_fely3001,Graph_from_Num_fehy3001);
   grae->SetName("Graph_from_Num");
   grae->SetTitle("Num");
   grae->SetLineColor(0);
   grae->SetMarkerColor(0);
   
   TH1F *Graph_Graph_from_Num3001 = new TH1F("Graph_Graph_from_Num3001","Num",100,0,110);
   Graph_Graph_from_Num3001->SetMinimum(0);
   Graph_Graph_from_Num3001->SetMaximum(1.02);
   Graph_Graph_from_Num3001->SetDirectory(nullptr);
   Graph_Graph_from_Num3001->SetStats(0);
   Graph_Graph_from_Num3001->SetLineStyle(0);
   Graph_Graph_from_Num3001->SetMarkerStyle(20);
   Graph_Graph_from_Num3001->GetXaxis()->SetTitle("GEN Photon p_{T} (GeV)");
   Graph_Graph_from_Num3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_Num3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3001->GetYaxis()->SetTitle("L1 Efficiency");
   Graph_Graph_from_Num3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3001->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_Num3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_Num3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_Num3001);
   
   grae->Draw("alp");
   
   Double_t Graph_from_Num_fx3002[15] = { 3.333333, 10, 16.66667, 23.33333, 30, 36.66667, 43.33333, 50, 56.66667, 63.33333, 70, 76.66667, 83.33333, 90, 96.66667 };
   Double_t Graph_from_Num_fy3002[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_from_Num_felx3002[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fely3002[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_from_Num_fehx3002[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fehy3002[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   grae = new TGraphAsymmErrors(15,Graph_from_Num_fx3002,Graph_from_Num_fy3002,Graph_from_Num_felx3002,Graph_from_Num_fehx3002,Graph_from_Num_fely3002,Graph_from_Num_fehy3002);
   grae->SetName("Graph_from_Num");
   grae->SetTitle("Num");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_Num3002 = new TH1F("Graph_Graph_from_Num3002","Num",100,0,110);
   Graph_Graph_from_Num3002->SetMinimum(0);
   Graph_Graph_from_Num3002->SetMaximum(1.1);
   Graph_Graph_from_Num3002->SetDirectory(nullptr);
   Graph_Graph_from_Num3002->SetStats(0);
   Graph_Graph_from_Num3002->SetLineStyle(0);
   Graph_Graph_from_Num3002->SetMarkerStyle(20);
   Graph_Graph_from_Num3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_Num3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_Num3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_Num3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_Num3002);
   
   grae->Draw("p");
   
   Double_t Graph_from_Num_fx3003[15] = { 3.333333, 10, 16.66667, 23.33333, 30, 36.66667, 43.33333, 50, 56.66667, 63.33333, 70, 76.66667, 83.33333, 90, 96.66667 };
   Double_t Graph_from_Num_fy3003[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_from_Num_felx3003[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fely3003[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_from_Num_fehx3003[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fehy3003[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   grae = new TGraphAsymmErrors(15,Graph_from_Num_fx3003,Graph_from_Num_fy3003,Graph_from_Num_felx3003,Graph_from_Num_fehx3003,Graph_from_Num_fely3003,Graph_from_Num_fehy3003);
   grae->SetName("Graph_from_Num");
   grae->SetTitle("Num");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_Num3003 = new TH1F("Graph_Graph_from_Num3003","Num",100,0,110);
   Graph_Graph_from_Num3003->SetMinimum(0);
   Graph_Graph_from_Num3003->SetMaximum(1.1);
   Graph_Graph_from_Num3003->SetDirectory(nullptr);
   Graph_Graph_from_Num3003->SetStats(0);
   Graph_Graph_from_Num3003->SetLineStyle(0);
   Graph_Graph_from_Num3003->SetMarkerStyle(20);
   Graph_Graph_from_Num3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3003->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_Num3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_Num3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_Num3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_Num3003);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.4,0.15,0.9,0.45,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.044);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_Num","#scale[0.6]{#scale[1.1]{Standalone e/#gamma w/o WP}}","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_Num","#scale[0.6]{#scale[1.1]{Standalone e/#gamma with WP}}","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.16,0.96,"#scale[0.7]{#bf{CMS}} #scale[0.6]{#bf{#bf{Phase-2 Simulation Preliminary}}}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.76,0.96,"#scale[0.6]{14 TeV, 200 PU}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5,0.48,"#scale[0.7]{p_{T}^{e/#gamma} > 25 GeV, |#eta^{GEN #gamma}| < 1.5}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   Tcan->Modified();
   Tcan->SetSelected(Tcan);
}
