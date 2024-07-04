#ifdef __CLING__
#pragma cling optimize(0)
#endif
void efficiency_genPt_barrel_GCT_acceptance_useTDRFlags_standaloneWP_l1Ptgt25GeV_genPtgt30GeV()
{
//=========Macro generated from canvas: Tcan/
//=========  (Tue Jun 11 10:30:11 2024) by ROOT version 6.30/03
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
   Double_t Graph_from_Num_fy3001[15] = { 0.000122444, 5.272593e-05, 0.0003107198, 0.07946374, 0.8537814, 0.9720826, 0.9841354, 0.98923, 0.9897658, 0.9888017, 0.9921206, 0.9915586, 0.9920004, 0.9922071, 0.9933522 };
   Double_t Graph_from_Num_felx3001[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fely3001[15] = { 8.658627e-05, 5.272593e-05, 0.0001268705, 0.002099074, 0.009067022, 0.01002048, 0.01016172, 0.01011846, 0.01019281, 0.01007386, 0.0101554, 0.01008188, 0.01023165, 0.01016774, 0.01018079 };
   Double_t Graph_from_Num_fehx3001[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fehy3001[15] = { 8.658627e-05, 5.272732e-05, 0.0001268705, 0.002099074, 0.009067022, 0.01002048, 0.01016172, 0.01011846, 0.01019281, 0.01007386, 0.007879376, 0.008441448, 0.007999599, 0.00779289, 0.006647825 };
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
   Graph_Graph_from_Num3001->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph_from_Num3001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_from_Num3001->GetXaxis()->SetTitleOffset(1.1);
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
   Double_t Graph_from_Num_fy3002[15] = { 0.000122444, 5.272593e-05, 0.0003107198, 0.07946374, 0.8537814, 0.9720826, 0.9841354, 0.98923, 0.9897658, 0.9888017, 0.9921206, 0.9915586, 0.9920004, 0.9922071, 0.9933522 };
   Double_t Graph_from_Num_felx3002[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fely3002[15] = { 8.658627e-05, 5.272593e-05, 0.0001268705, 0.002099074, 0.009067022, 0.01002048, 0.01016172, 0.01011846, 0.01019281, 0.01007386, 0.0101554, 0.01008188, 0.01023165, 0.01016774, 0.01018079 };
   Double_t Graph_from_Num_fehx3002[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fehy3002[15] = { 8.658627e-05, 5.272732e-05, 0.0001268705, 0.002099074, 0.009067022, 0.01002048, 0.01016172, 0.01011846, 0.01019281, 0.01007386, 0.007879376, 0.008441448, 0.007999599, 0.00779289, 0.006647825 };
   grae = new TGraphAsymmErrors(15,Graph_from_Num_fx3002,Graph_from_Num_fy3002,Graph_from_Num_felx3002,Graph_from_Num_fehx3002,Graph_from_Num_fely3002,Graph_from_Num_fehy3002);
   grae->SetName("Graph_from_Num");
   grae->SetTitle("Num");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#5790fc");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#5790fc");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(2);
   
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
   
   grae->Draw("lepz");
   
   Double_t Graph_from_Num_fx3003[15] = { 3.333333, 10, 16.66667, 23.33333, 30, 36.66667, 43.33333, 50, 56.66667, 63.33333, 70, 76.66667, 83.33333, 90, 96.66667 };
   Double_t Graph_from_Num_fy3003[15] = { 6.122199e-05, 5.272593e-05, 0.0002071466, 0.07710088, 0.8411593, 0.960088, 0.9750925, 0.9796046, 0.979426, 0.9794613, 0.9832498, 0.9809553, 0.9806633, 0.9789749, 0.979062 };
   Double_t Graph_from_Num_felx3003[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fely3003[15] = { 6.122199e-05, 5.272593e-05, 0.000103584, 0.002065367, 0.008969059, 0.009928133, 0.01009185, 0.01004472, 0.01011305, 0.01000259, 0.01008736, 0.0100011, 0.01014402, 0.01006612, 0.010071 };
   Double_t Graph_from_Num_fehx3003[15] = { 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333, 3.333333 };
   Double_t Graph_from_Num_fehy3003[15] = { 6.122386e-05, 5.272732e-05, 0.000103584, 0.002065367, 0.008969059, 0.009928133, 0.01009185, 0.01004472, 0.01011305, 0.01000259, 0.01008736, 0.0100011, 0.01014402, 0.01006612, 0.010071 };
   grae = new TGraphAsymmErrors(15,Graph_from_Num_fx3003,Graph_from_Num_fy3003,Graph_from_Num_felx3003,Graph_from_Num_fehx3003,Graph_from_Num_fely3003,Graph_from_Num_fehy3003);
   grae->SetName("Graph_from_Num");
   grae->SetTitle("Num");

   ci = TColor::GetColor("#f89c20");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#f89c20");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(2);
   
   TH1F *Graph_Graph_from_Num3003 = new TH1F("Graph_Graph_from_Num3003","Num",100,0,110);
   Graph_Graph_from_Num3003->SetMinimum(0);
   Graph_Graph_from_Num3003->SetMaximum(1.092671);
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
   
   grae->Draw("lepz");
   
   TLegend *leg = new TLegend(0.4,0.2,0.8,0.46,NULL,"brNDC");
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
   entry=leg->AddEntry("Graph_from_Num","#scale[0.6]{#scale[1.2]{Standalone e/#gamma w/o WP}}","lepz");

   ci = TColor::GetColor("#5790fc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#5790fc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_Num","#scale[0.6]{#scale[1.2]{Standalone e/#gamma with WP}}","lepz");

   ci = TColor::GetColor("#f89c20");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#f89c20");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.16,0.96,"#scale[1.0]{#bf{CMS}} #scale[0.6]{#bf{Phase-2 Simulation Preliminary}}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.75,0.96,"#scale[0.7]{#bf{14 TeV, 200 PU}}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.44,0.48,"#scale[0.7]{p_{T}^{e/#gamma} > 25 GeV, |#eta^{GEN #gamma}| < 1.5}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   Tcan->Modified();
   Tcan->SetSelected(Tcan);
}
