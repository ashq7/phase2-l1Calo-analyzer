#ifdef __CLING__
#pragma cling optimize(0)
#endif
void efficiency_genPt_Ashling()
{
//=========Macro generated from canvas: Tcan/
//=========  (Sun Jun  9 21:16:59 2024) by ROOT version 6.30/03
// Execute: root -l -b -q efficiency_genPt_Ashling.C 
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
   Double_t Graph_from_Num_fy3001[15] = { 0, 0.0001596679, 0.0001530222, 0.04941999, 0.7922308, 0.9772478, 0.9854911, 0.9920622, 0.9938252, 0.9959311, 0.9945593, 0.995059, 0.9952198, 0.9973565, 0.9963049 };
   Double_t Graph_from_Num_felx3001[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fely3001[15] = { 0, 0.0001596679, 0.0001530222, 0.002870762, 0.01512819, 0.01741249, 0.01766271, 0.01771271, 0.0177124, 0.0176375, 0.0175603, 0.01778812, 0.01749846, 0.01760004, 0.01749927 };
   Double_t Graph_from_Num_fehx3001[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fehy3001[15] = { 0, 0.0001596806, 0.0001530339, 0.002870762, 0.01512819, 0.01741249, 0.0145089, 0.007937789, 0.006174803, 0.004068851, 0.005440712, 0.004941046, 0.004780233, 0.002643466, 0.00369513 };
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
   Graph_Graph_from_Num3001->GetXaxis()->SetTitle("GEN Electron p_{T} (GeV)");
   Graph_Graph_from_Num3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3001->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph_from_Num3001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_from_Num3001->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph_from_Num3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Num3001->GetYaxis()->SetTitle("L1 Efficiency");
   Graph_Graph_from_Num3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Num3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_Num3001->GetYaxis()->SetLabelSize(0.04);
   Graph_Graph_from_Num3001->GetYaxis()->SetTitleSize(0.04);
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
   Double_t Graph_from_Num_fy3002[15] = { 0, 0.0001596679, 0.0001530222, 0.04941999, 0.7922308, 0.9772478, 0.9854911, 0.9920622, 0.9938252, 0.9959311, 0.9945593, 0.995059, 0.9952198, 0.9973565, 0.9963049 };
   Double_t Graph_from_Num_felx3002[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fely3002[15] = { 0, 0.0001596679, 0.0001530222, 0.002870762, 0.01512819, 0.01741249, 0.01766271, 0.01771271, 0.0177124, 0.0176375, 0.0175603, 0.01778812, 0.01749846, 0.01760004, 0.01749927 };
   Double_t Graph_from_Num_fehx3002[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fehy3002[15] = { 0, 0.0001596806, 0.0001530339, 0.002870762, 0.01512819, 0.01741249, 0.0145089, 0.007937789, 0.006174803, 0.004068851, 0.005440712, 0.004941046, 0.004780233, 0.002643466, 0.00369513 };
   TGraphAsymmErrors *grae1 = new TGraphAsymmErrors(15,Graph_from_Num_fx3002,Graph_from_Num_fy3002,Graph_from_Num_felx3002,Graph_from_Num_fehx3002,Graph_from_Num_fely3002,Graph_from_Num_fehy3002);
   //grae->SetName("Graph_from_Num");
   //grae->SetTitle("Num");
   grae1->SetFillColor(2);
   grae1->SetLineWidth(2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#5790fc"); //blue
   grae1->SetLineColor(ci);
   grae1->SetLineWidth(2);

   ci = TColor::GetColor("#5790fc");
   grae1->SetMarkerColor(ci);
   grae1->SetMarkerStyle(20);
   grae1->SetMarkerSize(1); 
   
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
   grae1->SetHistogram(Graph_Graph_from_Num3002);
   
   grae1->Draw("lpez");
   
   Double_t Graph_from_Num_fx3003[15] = { 3.333333, 10, 16.66667, 23.33333, 30, 36.66667, 43.33333, 50, 56.66667, 63.33333, 70, 76.66667, 83.33333, 90, 96.66667 };
   Double_t Graph_from_Num_fy3003[15] = { 0, 0, 0.0001530222, 0.04624186, 0.7796583, 0.9653224, 0.9767219, 0.9782505, 0.9819506, 0.9829421, 0.9815016, 0.9816704, 0.9853508, 0.9818069, 0.9801385 };
   Double_t Graph_from_Num_felx3003[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fely3003[15] = { 0, 0, 0.0001530222, 0.002772712, 0.01495494, 0.01725366, 0.01754508, 0.0175279, 0.01755376, 0.017465, 0.01738745, 0.01760866, 0.01736837, 0.0173942, 0.0172863 };
   Double_t Graph_from_Num_fehx3003[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fehy3003[15] = { 0, 0, 0.0001530339, 0.002772712, 0.01495494, 0.01725366, 0.01754508, 0.0175279, 0.01755376, 0.0170579, 0.01738745, 0.01760866, 0.01464921, 0.0173942, 0.0172863 };
   TGraphAsymmErrors *grae2 = new TGraphAsymmErrors(15,Graph_from_Num_fx3003,Graph_from_Num_fy3003,Graph_from_Num_felx3003,Graph_from_Num_fehx3003,Graph_from_Num_fely3003,Graph_from_Num_fehy3003);
   //grae->SetName("Graph_from_Num");
   //grae->SetTitle("Num");
   grae2->SetFillColor(2);

   ci = TColor::GetColor("#f89c20"); //yellow
   grae2->SetLineColor(ci);
   grae2->SetLineWidth(2);

   ci = TColor::GetColor("#f89c20");
   grae2->SetMarkerColor(ci);
   grae2->SetMarkerStyle(21);
   grae2->SetMarkerSize(1); 
   
   TH1F *Graph_Graph_from_Num3003 = new TH1F("Graph_Graph_from_Num3003","Num",100,0,110);
   Graph_Graph_from_Num3003->SetMinimum(0);
   Graph_Graph_from_Num3003->SetMaximum(1.1);
   Graph_Graph_from_Num3003->SetDirectory(nullptr);
   Graph_Graph_from_Num3003->SetStats(0);
   Graph_Graph_from_Num3003->SetLineStyle(0);
   Graph_Graph_from_Num3003->SetMarkerStyle(21);
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
   grae2->SetHistogram(Graph_Graph_from_Num3003);
   
   grae2->Draw("lpez");
   
   TLegend *leg = new TLegend(0.4,0.2,0.8,0.45,NULL,"brNDC");
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

   entry->SetTextFont(42);
   entry=leg->AddEntry(grae1,"#scale[0.6]{#scale[1.3]{Standalone e/#gamma w/o WP}}","lpe");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);


   entry->SetTextFont(42);
   entry=leg->AddEntry(grae2,"#scale[0.6]{#scale[1.3]{Standalone e/#gamma with WP}}","lpe");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);


   ci = TColor::GetColor("#f89c20");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(50);
   entry->SetMarkerSize(3);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.16,0.96,"#scale[1]{#bf{CMS}} #scale[0.6]{#bf{Phase-2 Simulation Preliminary}}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.75,0.96,"#scale[0.7]{#bf{14 TeV, 200 PU}}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.43,0.48,"#scale[0.7]{p_{T}^{e/#gamma} > 25 GeV, |#eta^{GEN e}| < 1.5}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   Tcan->Modified();
   Tcan->SetSelected(Tcan);
   Tcan->SaveAs("/eos/user/a/aquinn/figures/rates/Jun7/efficiency_pt.pdf");
}
