/* Usage: root -l -b -q efficiency_genEta_barrel_l1Ptgt25GeV_genPtgt30GeV.C */

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void efficiency_eta_Ashling()
{
//=========Macro generated from canvas: Tcan/
//=========  (Tue May 21 18:10:09 2024) by ROOT version 6.30/03
// Execute: root -l -b -q efficiency_eta_Ashling.C

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
   Double_t Graph_from_Num_fy3004[15] = { 0.9796856, 0.988167, 0.9944494, 0.9849673, 0.9969211, 0.9857334, 0.9979929, 0.9793563, 0.995416, 0.983489, 0.995585, 0.9867073, 0.9954945, 0.9883311, 0.9785731 };
   Double_t Graph_from_Num_felx3004[15] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_Num_fely3004[15] = { 0.02165727, 0.02094359, 0.02098474, 0.02063865, 0.02092418, 0.02088866, 0.02108764, 0.02074364, 0.02133666, 0.02058634, 0.02094234, 0.02066817, 0.02115447, 0.02080042, 0.02171253 };
   Double_t Graph_from_Num_fehx3004[15] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_Num_fehy3004[15] = { 0.0203144, 0.01183301, 0.005550623, 0.01503271, 0.003078938, 0.01426661, 0.002007127, 0.02064371, 0.004584014, 0.01651096, 0.004415035, 0.01329267, 0.004505515, 0.01166886, 0.02142686 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,Graph_from_Num_fx3004,Graph_from_Num_fy3004,Graph_from_Num_felx3004,Graph_from_Num_fehx3004,Graph_from_Num_fely3004,Graph_from_Num_fehy3004);
   
   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#5790fc");
   grae->SetName("Graph_from_Num");
   grae->SetTitle("Num");
   grae->SetLineColor(ci);
   grae->SetLineStyle(0);
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_Num3004 = new TH1F("Graph_Graph_from_Num3004","Num",100,-1.704,1.704);
   Graph_Graph_from_Num3004->SetMinimum(0);
   Graph_Graph_from_Num3004->SetMaximum(1.02);
   Graph_Graph_from_Num3004->SetDirectory(nullptr);
   Graph_Graph_from_Num3004->SetStats(0);
   Graph_Graph_from_Num3004->SetLineStyle(0);
   Graph_Graph_from_Num3004->SetMarkerStyle(20);
   Graph_Graph_from_Num3004->GetXaxis()->SetTitle("GEN Electron  #eta");
   Graph_Graph_from_Num3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3004->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph_from_Num3004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_from_Num3004->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph_from_Num3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3004->GetYaxis()->SetTitle("L1 Efficiency");
   Graph_Graph_from_Num3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3004->GetYaxis()->SetLabelSize(0.04);
   Graph_Graph_from_Num3004->GetYaxis()->SetTitleSize(0.04);
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
   Double_t Graph_from_Num_fy3005[15] = { 0.9796856, 0.988167, 0.9944494, 0.9849673, 0.9969211, 0.9857334, 0.9979929, 0.9793563, 0.995416, 0.983489, 0.995585, 0.9867073, 0.9954945, 0.9883311, 0.9785731 };
   Double_t Graph_from_Num_felx3005[15] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_Num_fely3005[15] = { 0.02165727, 0.02094359, 0.02098474, 0.02063865, 0.02092418, 0.02088866, 0.02108764, 0.02074364, 0.02133666, 0.02058634, 0.02094234, 0.02066817, 0.02115447, 0.02080042, 0.02171253 };
   Double_t Graph_from_Num_fehx3005[15] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_Num_fehy3005[15] = { 0.0203144, 0.01183301, 0.005550623, 0.01503271, 0.003078938, 0.01426661, 0.002007127, 0.02064371, 0.004584014, 0.01651096, 0.004415035, 0.01329267, 0.004505515, 0.01166886, 0.02142686 };
   //grae = new TGraphAsymmErrors(15,Graph_from_Num_fx3005,Graph_from_Num_fy3005,Graph_from_Num_felx3005,Graph_from_Num_fehx3005,Graph_from_Num_fely3005,Graph_from_Num_fehy3005);
   TGraphAsymmErrors *grae1 = new TGraphAsymmErrors(15,Graph_from_Num_fx3005,Graph_from_Num_fy3005,Graph_from_Num_felx3005,Graph_from_Num_fehx3005,Graph_from_Num_fely3005,Graph_from_Num_fehy3005);
   //grae->SetName("Graph_from_Num");
   //grae->SetTitle("Num");
   grae1->SetFillColor(2);
   ci = TColor::GetColor("#5790fc"); //blue
   grae1->SetLineStyle(0);
   grae1->SetLineWidth(2);
   grae1->SetLineColor(ci);
   grae1->SetMarkerColor(ci);
   grae1->SetMarkerStyle(20);
   grae1->SetMarkerSize(2);
   
   TH1F *Graph_Graph_from_Num3005 = new TH1F("Graph_Graph_from_Num3005","Num",100,-1.704,1.704);
   Graph_Graph_from_Num3005->SetMinimum(0.9525467);
   Graph_Graph_from_Num3005->SetMaximum(1.004314);
   Graph_Graph_from_Num3005->SetDirectory(nullptr);
   Graph_Graph_from_Num3005->SetStats(0);
   Graph_Graph_from_Num3005->SetLineStyle(0);
//   Graph_Graph_from_Num3005->SetMarkerStyle(20);
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
   grae1->SetHistogram(Graph_Graph_from_Num3005);
   
   grae1->Draw("lpez");
   
   Double_t Graph_from_Num_fx3006[15] = { -1.4, -1.2, -1, -0.8, -0.6, -0.4, -0.2, 1.387779e-16, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.4 };
   Double_t Graph_from_Num_fy3006[15] = { 0.9702539, 0.9850413, 0.9871225, 0.9620915, 0.9874642, 0.9516273, 0.9901873, 0.9680355, 0.9889984, 0.9509016, 0.9845474, 0.9668773, 0.9921153, 0.984148, 0.9712686 };
   Double_t Graph_from_Num_felx3006[15] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_Num_fely3006[15] = { 0.02150137, 0.02089399, 0.02086886, 0.0202797, 0.02077533, 0.02034709, 0.02096394, 0.02056434, 0.02123354, 0.02007544, 0.02076825, 0.02035707, 0.02110065, 0.0207345, 0.02159137 };
   Double_t Graph_from_Num_fehx3006[15] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_Num_fehy3006[15] = { 0.02150137, 0.01495868, 0.01287746, 0.0202797, 0.01253575, 0.02034709, 0.009812653, 0.02056434, 0.01100159, 0.02007544, 0.01545256, 0.02035707, 0.007884681, 0.01585203, 0.02159137 };
   //grae = new TGraphAsymmErrors(15,Graph_from_Num_fx3006,Graph_from_Num_fy3006,Graph_from_Num_felx3006,Graph_from_Num_fehx3006,Graph_from_Num_fely3006,Graph_from_Num_fehy3006);
   TGraphAsymmErrors *grae2 = new TGraphAsymmErrors(15,Graph_from_Num_fx3006,Graph_from_Num_fy3006,Graph_from_Num_felx3006,Graph_from_Num_fehx3006,Graph_from_Num_fely3006,Graph_from_Num_fehy3006);
   //grae->SetName("Graph_from_Num");
   //grae->SetTitle("Num");
   grae2->SetFillColor(2);

   ci = TColor::GetColor("#f89c20"); //yellow
   grae2->SetLineColor(ci);
   grae2->SetLineStyle(0);
   grae2->SetLineWidth(2);

   ci = TColor::GetColor("#f89c20");
   grae2->SetMarkerColor(ci);
   grae2->SetMarkerStyle(21);
   grae2->SetMarkerSize(2);
   
   TH1F *Graph_Graph_from_Num3006 = new TH1F("Graph_Graph_from_Num3006","Num",100,-1.704,1.704);
   Graph_Graph_from_Num3006->SetMinimum(0.9239087);
   Graph_Graph_from_Num3006->SetMaximum(1.006917);
   Graph_Graph_from_Num3006->SetDirectory(nullptr);
   Graph_Graph_from_Num3006->SetStats(0);
   Graph_Graph_from_Num3006->SetLineStyle(0);
//   Graph_Graph_from_Num3006->SetMarkerStyle(20);
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
   grae2->SetHistogram(Graph_Graph_from_Num3006);
   
   grae2->Draw("lpez");
   
   TLegend *leg = new TLegend(0.4,0.2,0.8,0.45,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.044);
   ci = TColor::GetColor("#5790fc"); //blue
   leg->SetLineColor(ci);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","","h");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(ci);
   //entry->SetMarkerStyle(21);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry(grae1,"#scale[0.6]{#scale[1.3]{Standalone e/ #gamma w/o WP}}","lep");
   
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   ci = TColor::GetColor("#f89c20");
   entry->SetMarkerColor(ci);
   //entry->SetMarkerStyle(50);
   //entry->SetMarkerSize(3);
   entry->SetTextFont(42);

   entry=leg->AddEntry(grae2,"#scale[0.6]{#scale[1.3]{Standalone e/ #gamma with WP}}","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#f89c20");
   entry->SetMarkerColor(ci);
   //entry->SetMarkerStyle(50);
   //entry->SetMarkerSize(3);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.16,0.96,"#scale[1]{#bf{CMS}} #scale[0.6]{#bf{#it{Phase-2 Simulation Preliminary}}}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.73,0.96,"#scale[0.7]{#bf{PU 200 (14 TeV)}}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.43,0.48,"#scale[0.7]{p_{T}^{GEN e} > 30 GeV,  | #eta^{GEN e} | < 1.5}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.43,0.42,"#scale[0.7]{p_{T}^{e/#gamma} > 25 GeV}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   Tcan->Modified();
   Tcan->SetSelected(Tcan);
   Tcan->SaveAs("/eos/user/a/aquinn/figures/rates/Jun7/efficiency_eta.pdf");
}
