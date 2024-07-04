#ifdef __CLING__
#pragma cling optimize(0)
#endif
void efficiency_genEta_barrel_l1Ptgt25GeV_genPtgt30GeV()
{
//=========Macro generated from canvas: Tcan/
//=========  (Mon Jun 10 06:08:36 2024) by ROOT version 6.30/03
   TCanvas *Tcan = new TCanvas("Tcan", "",0,0,1000,1000);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Tcan->Range(-2.368976,-0.1617073,1.787122,1.082195);
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
   
   Double_t Graph_from_Num_fx3004[15] = { -1.4, -1.2, -1, -0.8, -0.6, -0.4, -0.2, 1.387779e-16, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.4 };
   Double_t Graph_from_Num_fy3004[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_from_Num_felx3004[15] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_Num_fely3004[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_from_Num_fehx3004[15] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_Num_fehy3004[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,Graph_from_Num_fx3004,Graph_from_Num_fy3004,Graph_from_Num_felx3004,Graph_from_Num_fehx3004,Graph_from_Num_fely3004,Graph_from_Num_fehy3004);
   grae->SetName("Graph_from_Num");
   grae->SetTitle("Num");
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetMarkerColor(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_Num3004 = new TH1F("Graph_Graph_from_Num3004","Num",100,-1.704,1.704);
   Graph_Graph_from_Num3004->SetMinimum(0);
   Graph_Graph_from_Num3004->SetMaximum(1.02);
   Graph_Graph_from_Num3004->SetDirectory(nullptr);
   Graph_Graph_from_Num3004->SetStats(0);
   Graph_Graph_from_Num3004->SetLineStyle(0);
   Graph_Graph_from_Num3004->SetMarkerStyle(20);
   Graph_Graph_from_Num3004->GetXaxis()->SetTitle("GEN Photon #eta");
   Graph_Graph_from_Num3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_Num3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3004->GetYaxis()->SetTitle("L1 Efficiency");
   Graph_Graph_from_Num3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_Num3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3004->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_from_Num3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_Num3004);
   
   grae->Draw("alp");
   
   Double_t Graph_from_Num_fx3005[15] = { -1.4, -1.2, -1, -0.8, -0.6, -0.4, -0.2, 1.387779e-16, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.4 };
   Double_t Graph_from_Num_fy3005[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_from_Num_felx3005[15] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_Num_fely3005[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_from_Num_fehx3005[15] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_Num_fehy3005[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   grae = new TGraphAsymmErrors(15,Graph_from_Num_fx3005,Graph_from_Num_fy3005,Graph_from_Num_felx3005,Graph_from_Num_fehx3005,Graph_from_Num_fely3005,Graph_from_Num_fehy3005);
   grae->SetName("Graph_from_Num");
   grae->SetTitle("Num");
   grae->SetLineStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_Num3005 = new TH1F("Graph_Graph_from_Num3005","Num",100,-1.704,1.704);
   Graph_Graph_from_Num3005->SetMinimum(0);
   Graph_Graph_from_Num3005->SetMaximum(1.1);
   Graph_Graph_from_Num3005->SetDirectory(nullptr);
   Graph_Graph_from_Num3005->SetStats(0);
   Graph_Graph_from_Num3005->SetLineStyle(0);
   Graph_Graph_from_Num3005->SetMarkerStyle(20);
   Graph_Graph_from_Num3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_Num3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3005->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_Num3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3005->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_from_Num3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_Num3005);
   
   grae->Draw("p");
   
   Double_t Graph_from_Num_fx3006[15] = { -1.4, -1.2, -1, -0.8, -0.6, -0.4, -0.2, 1.387779e-16, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.4 };
   Double_t Graph_from_Num_fy3006[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_from_Num_felx3006[15] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_Num_fely3006[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t Graph_from_Num_fehx3006[15] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_Num_fehy3006[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   grae = new TGraphAsymmErrors(15,Graph_from_Num_fx3006,Graph_from_Num_fy3006,Graph_from_Num_felx3006,Graph_from_Num_fehx3006,Graph_from_Num_fely3006,Graph_from_Num_fehy3006);
   grae->SetName("Graph_from_Num");
   grae->SetTitle("Num");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineStyle(0);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_Num3006 = new TH1F("Graph_Graph_from_Num3006","Num",100,-1.704,1.704);
   Graph_Graph_from_Num3006->SetMinimum(0);
   Graph_Graph_from_Num3006->SetMaximum(1.1);
   Graph_Graph_from_Num3006->SetDirectory(nullptr);
   Graph_Graph_from_Num3006->SetStats(0);
   Graph_Graph_from_Num3006->SetLineStyle(0);
   Graph_Graph_from_Num3006->SetMarkerStyle(20);
   Graph_Graph_from_Num3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_Num3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3006->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_Num3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_Num3006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_Num3006->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_from_Num3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_Num3006);
   
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
   entry=leg->AddEntry("Graph_from_Num","#scale[0.6]{Phase 2 emulator w/o WP}","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_Num","#scale[0.6]{Phase 2 emulator with standalone WP}","P");
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
      tex = new TLatex(0.5,0.48,"#scale[0.7]{L1 p_{T} > 25 GeV, |#eta^{GEN}| < 1.4841}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5,0.42,"#scale[0.7]{GEN p_{T} > 30 GeV}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   Tcan->Modified();
   Tcan->SetSelected(Tcan);
}
