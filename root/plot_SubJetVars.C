//! macro to plot the Lund Images from JEWEL samples 

#include "plot.h"
//#include "utilities.h"

using namespace std;

void plot_SubJetVars(){

  //! Load the files for the lund images and create the plots
  TH2::SetDefaultSumw2();
  TH1::SetDefaultSumw2();
  gStyle->SetOptStat(0);
  bool dologz = false;
  bool dorebin = false;
  bool dozratioplot = false;
  //! Load files in histograms 

  std::string finLoc = ".";
  std::string plotoutLoc = "../plots/";
  
  TFile * fin_AAjet_Gluon_rg_5R_gridsub = TFile::Open(Form("%s/AAjet_Gluon_rg_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_Gluon_rg_5R = (TH1D*)fin_AAjet_Gluon_rg_5R_gridsub->Get("Histogram");
  hPbPb_Gluon_rg_5R->SetName("hPbPb_Gluon_rg_5R");
  TFile * fin_AAjet_Quark_rg_5R_gridsub = TFile::Open(Form("%s/AAjet_Quark_rg_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_Quark_rg_5R = (TH1D*)fin_AAjet_Quark_rg_5R_gridsub->Get("Histogram");
  hPbPb_Quark_rg_5R->SetName("hPbPb_Quark_rg_5R");

  TFile * fin_AAjet_Gluon_delta_m2_5R_gridsub = TFile::Open(Form("%s/AAjet_Gluon_delta_m2_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_Gluon_delta_m2_5R = (TH1D*)fin_AAjet_Gluon_delta_m2_5R_gridsub->Get("Histogram");
  hPbPb_Gluon_delta_m2_5R->SetName("hPbPb_Gluon_delta_m2_5R");
  TFile * fin_AAjet_Quark_delta_m2_5R_gridsub = TFile::Open(Form("%s/AAjet_Quark_delta_m2_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_Quark_delta_m2_5R = (TH1D*)fin_AAjet_Quark_delta_m2_5R_gridsub->Get("Histogram");
  hPbPb_Quark_delta_m2_5R->SetName("hPbPb_Quark_delta_m2_5R");
  
  TFile * fin_AAjet_Gluon_zg_5R_gridsub = TFile::Open(Form("%s/AAjet_Gluon_zg_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_Gluon_zg_5R = (TH1D*)fin_AAjet_Gluon_zg_5R_gridsub->Get("Histogram");
  hPbPb_Gluon_zg_5R->SetName("hPbPb_Gluon_zg_5R");
  TFile * fin_AAjet_Quark_zg_5R_gridsub = TFile::Open(Form("%s/AAjet_Quark_zg_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_Quark_zg_5R = (TH1D*)fin_AAjet_Quark_zg_5R_gridsub->Get("Histogram");
  hPbPb_Quark_zg_5R->SetName("hPbPb_Quark_zg_5R");

  TFile * fin_AAjet_T3_Gluon_m_hard_5R_gridsub = TFile::Open(Form("%s/AAjet_T3_Gluon_m_hard_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_T3_Gluon_m_hard_5R = (TH1D*)fin_AAjet_T3_Gluon_m_hard_5R_gridsub->Get("Histogram");
  hPbPb_T3_Gluon_m_hard_5R->SetName("hPbPb_T3_Gluon_m_hard_5R");
  TFile * fin_AAjet_T3_Gluon_m_soft_5R_gridsub = TFile::Open(Form("%s/AAjet_T3_Gluon_m_soft_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_T3_Gluon_m_soft_5R = (TH1D*)fin_AAjet_T3_Gluon_m_soft_5R_gridsub->Get("Histogram");
  hPbPb_T3_Gluon_m_soft_5R->SetName("hPbPb_T3_Gluon_m_soft_5R");
  TFile * fin_AAjet_T3_Gluon_theta_5R_gridsub = TFile::Open(Form("%s/AAjet_T3_Gluon_theta_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_T3_Gluon_theta_5R = (TH1D*)fin_AAjet_T3_Gluon_theta_5R_gridsub->Get("Histogram");
  hPbPb_T3_Gluon_theta_5R->SetName("hPbPb_T3_Gluon_theta_5R");
  TFile * fin_AAjet_T3_Gluon_z_5R_gridsub = TFile::Open(Form("%s/AAjet_T3_Gluon_z_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_T3_Gluon_z_5R = (TH1D*)fin_AAjet_T3_Gluon_z_5R_gridsub->Get("Histogram");
  hPbPb_T3_Gluon_z_5R->SetName("hPbPb_T3_Gluon_z_5R");

  TFile * fin_AAjet_T3_Quark_m_hard_5R_gridsub = TFile::Open(Form("%s/AAjet_T3_Quark_m_hard_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_T3_Quark_m_hard_5R = (TH1D*)fin_AAjet_T3_Quark_m_hard_5R_gridsub->Get("Histogram");
  hPbPb_T3_Quark_m_hard_5R->SetName("hPbPb_T3_Quark_m_hard_5R");
  TFile * fin_AAjet_T3_Quark_m_soft_5R_gridsub = TFile::Open(Form("%s/AAjet_T3_Quark_m_soft_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_T3_Quark_m_soft_5R = (TH1D*)fin_AAjet_T3_Quark_m_soft_5R_gridsub->Get("Histogram");
  hPbPb_T3_Quark_m_soft_5R->SetName("hPbPb_T3_Quark_m_soft_5R");
  TFile * fin_AAjet_T3_Quark_theta_5R_gridsub = TFile::Open(Form("%s/AAjet_T3_Quark_theta_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_T3_Quark_theta_5R = (TH1D*)fin_AAjet_T3_Quark_theta_5R_gridsub->Get("Histogram");
  hPbPb_T3_Quark_theta_5R->SetName("hPbPb_T3_Quark_theta_5R");
  TFile * fin_AAjet_T3_Quark_z_5R_gridsub = TFile::Open(Form("%s/AAjet_T3_Quark_z_5R_gridsub.root", finLoc.c_str()));
  TH1D * hPbPb_T3_Quark_z_5R = (TH1D*)fin_AAjet_T3_Quark_z_5R_gridsub->Get("Histogram");
  hPbPb_T3_Quark_z_5R->SetName("hPbPb_T3_Quark_z_5R");
  

  TFile * fin_ppjet_Gluon_rg_5R_grid = TFile::Open(Form("%s/ppjet_Gluon_rg_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_Gluon_rg_5R = (TH1D*)fin_ppjet_Gluon_rg_5R_grid->Get("Histogram");
  hpp_Gluon_rg_5R->SetName("hpp_Gluon_rg_5R");
  TFile * fin_ppjet_Quark_rg_5R_grid = TFile::Open(Form("%s/ppjet_Quark_rg_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_Quark_rg_5R = (TH1D*)fin_ppjet_Quark_rg_5R_grid->Get("Histogram");
  hpp_Quark_rg_5R->SetName("hpp_Quark_rg_5R");

  TFile * fin_ppjet_Gluon_delta_m2_5R_grid = TFile::Open(Form("%s/ppjet_Gluon_delta_m2_5R_nogrid.root", finLoc.c_str()));
  TH1D * hpp_Gluon_delta_m2_5R = (TH1D*)fin_ppjet_Gluon_delta_m2_5R_grid->Get("Histogram");
  hpp_Gluon_delta_m2_5R->SetName("hpp_Gluon_delta_m2_5R");
  TFile * fin_ppjet_Quark_delta_m2_5R_grid = TFile::Open(Form("%s/ppjet_Quark_delta_m2_5R_nogrid.root", finLoc.c_str()));
  TH1D * hpp_Quark_delta_m2_5R = (TH1D*)fin_ppjet_Quark_delta_m2_5R_grid->Get("Histogram");
  hpp_Quark_delta_m2_5R->SetName("hpp_Quark_delta_m2_5R");
  
  TFile * fin_ppjet_Gluon_zg_5R_grid = TFile::Open(Form("%s/ppjet_Gluon_zg_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_Gluon_zg_5R = (TH1D*)fin_ppjet_Gluon_zg_5R_grid->Get("Histogram");
  hpp_Gluon_zg_5R->SetName("hpp_Gluon_zg_5R");
  TFile * fin_ppjet_Quark_zg_5R_grid = TFile::Open(Form("%s/ppjet_Quark_zg_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_Quark_zg_5R = (TH1D*)fin_ppjet_Quark_zg_5R_grid->Get("Histogram");
  hpp_Quark_zg_5R->SetName("hpp_Quark_zg_5R");

  TFile * fin_ppjet_T3_Gluon_m_hard_5R_grid = TFile::Open(Form("%s/ppjet_T3_Gluon_m_hard_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T3_Gluon_m_hard_5R = (TH1D*)fin_ppjet_T3_Gluon_m_hard_5R_grid->Get("Histogram");
  hpp_T3_Gluon_m_hard_5R->SetName("hpp_T3_Gluon_m_hard_5R");
  TFile * fin_ppjet_T3_Gluon_m_soft_5R_grid = TFile::Open(Form("%s/ppjet_T3_Gluon_m_soft_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T3_Gluon_m_soft_5R = (TH1D*)fin_ppjet_T3_Gluon_m_soft_5R_grid->Get("Histogram");
  hpp_T3_Gluon_m_soft_5R->SetName("hpp_T3_Gluon_m_soft_5R");
  TFile * fin_ppjet_T3_Gluon_theta_5R_grid = TFile::Open(Form("%s/ppjet_T3_Gluon_theta_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T3_Gluon_theta_5R = (TH1D*)fin_ppjet_T3_Gluon_theta_5R_grid->Get("Histogram");
  hpp_T3_Gluon_theta_5R->SetName("hpp_T3_Gluon_theta_5R");
  TFile * fin_ppjet_T3_Gluon_z_5R_grid = TFile::Open(Form("%s/ppjet_T3_Gluon_z_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T3_Gluon_z_5R = (TH1D*)fin_ppjet_T3_Gluon_z_5R_grid->Get("Histogram");
  hpp_T3_Gluon_z_5R->SetName("hpp_T3_Gluon_z_5R");

  TFile * fin_ppjet_T3_Quark_m_hard_5R_grid = TFile::Open(Form("%s/ppjet_T3_Quark_m_hard_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T3_Quark_m_hard_5R = (TH1D*)fin_ppjet_T3_Quark_m_hard_5R_grid->Get("Histogram"); 
  hpp_T3_Quark_m_hard_5R->SetName("hpp_T3_Quark_m_hard_5R");
  TFile * fin_ppjet_T3_Quark_m_soft_5R_grid = TFile::Open(Form("%s/ppjet_T3_Quark_m_soft_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T3_Quark_m_soft_5R = (TH1D*)fin_ppjet_T3_Quark_m_soft_5R_grid->Get("Histogram");
  hpp_T3_Quark_m_soft_5R->SetName("hpp_T3_Quark_m_soft_5R");
  TFile * fin_ppjet_T3_Quark_theta_5R_grid = TFile::Open(Form("%s/ppjet_T3_Quark_theta_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T3_Quark_theta_5R = (TH1D*)fin_ppjet_T3_Quark_theta_5R_grid->Get("Histogram");
  hpp_T3_Quark_theta_5R->SetName("hpp_T3_Quark_theta_5R");
  TFile * fin_ppjet_T3_Quark_z_5R_grid = TFile::Open(Form("%s/ppjet_T3_Quark_z_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T3_Quark_z_5R = (TH1D*)fin_ppjet_T3_Quark_z_5R_grid->Get("Histogram");
  hpp_T3_Quark_z_5R->SetName("hpp_T3_Quark_z_5R");

  TFile * fin_ppjet_T2_Gluon_m_hard_5R_grid = TFile::Open(Form("%s/ppjet_T2_Gluon_m_hard_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T2_Gluon_m_hard_5R = (TH1D*)fin_ppjet_T2_Gluon_m_hard_5R_grid->Get("Histogram");
  hpp_T2_Gluon_m_hard_5R->SetName("hpp_T2_Gluon_m_hard_5R");
  TFile * fin_ppjet_T2_Gluon_m_soft_5R_grid = TFile::Open(Form("%s/ppjet_T2_Gluon_m_soft_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T2_Gluon_m_soft_5R = (TH1D*)fin_ppjet_T2_Gluon_m_soft_5R_grid->Get("Histogram");
  hpp_T2_Gluon_m_soft_5R->SetName("hpp_T2_Gluon_m_soft_5R");
  TFile * fin_ppjet_T2_Gluon_theta_5R_grid = TFile::Open(Form("%s/ppjet_T2_Gluon_theta_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T2_Gluon_theta_5R = (TH1D*)fin_ppjet_T2_Gluon_theta_5R_grid->Get("Histogram");
  hpp_T2_Gluon_theta_5R->SetName("hpp_T2_Gluon_theta_5R");
  TFile * fin_ppjet_T2_Gluon_z_5R_grid = TFile::Open(Form("%s/ppjet_T2_Gluon_z_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T2_Gluon_z_5R = (TH1D*)fin_ppjet_T2_Gluon_z_5R_grid->Get("Histogram");
  hpp_T2_Gluon_z_5R->SetName("hpp_T2_Gluon_z_5R");

  TFile * fin_ppjet_T2_Quark_m_hard_5R_grid = TFile::Open(Form("%s/ppjet_T2_Quark_m_hard_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T2_Quark_m_hard_5R = (TH1D*)fin_ppjet_T2_Quark_m_hard_5R_grid->Get("Histogram"); 
  hpp_T2_Quark_m_hard_5R->SetName("hpp_T2_Quark_m_hard_5R");
  TFile * fin_ppjet_T2_Quark_m_soft_5R_grid = TFile::Open(Form("%s/ppjet_T2_Quark_m_soft_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T2_Quark_m_soft_5R = (TH1D*)fin_ppjet_T2_Quark_m_soft_5R_grid->Get("Histogram");
  hpp_T2_Quark_m_soft_5R->SetName("hpp_T2_Quark_m_soft_5R");
  TFile * fin_ppjet_T2_Quark_theta_5R_grid = TFile::Open(Form("%s/ppjet_T2_Quark_theta_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T2_Quark_theta_5R = (TH1D*)fin_ppjet_T2_Quark_theta_5R_grid->Get("Histogram");
  hpp_T2_Quark_theta_5R->SetName("hpp_T2_Quark_theta_5R");
  TFile * fin_ppjet_T2_Quark_z_5R_grid = TFile::Open(Form("%s/ppjet_T2_Quark_z_5R_grid.root", finLoc.c_str()));
  TH1D * hpp_T2_Quark_z_5R = (TH1D*)fin_ppjet_T2_Quark_z_5R_grid->Get("Histogram");
  hpp_T2_Quark_z_5R->SetName("hpp_T2_Quark_z_5R");

  

  
  //! Create Canvas and do the plotting
  //! Since these are all MC, plot all histograms with lines and no markers 
  //! List of plots to make 
  //! 1. Compare zg for pp and AA with the different methods and Quark and Gluons 
  //!
  //!
  //!
  int x = 1400;
  int y = 700;
  if(dozratioplot){
    x = 1600;
    y = 900;
  }

  TCanvas * cComp_z = new TCanvas("cComp_z","",x, y);
  if(dozratioplot)
    makeMultiPanelCanvas(cComp_z, 2, 2, 0.2, 0.2, 0.2, 0.2, 0.08);
  else 
    makeMultiPanelCanvas(cComp_z, 2, 1, 0.2, 0.2, 0.2, 0.2, 0.08);
  TH1D * hDummy_z = new TH1D("hDummy_z","", 10, 0, 0.55);
  makeHistTitle(hDummy_z, "","z (subjet-fraction)", "1/N dN/dz");
  hDummy_z->SetAxisRange(0.0, 0.15, "Y");
  hDummy_z->SetAxisRange(0.07, 0.53, "X");
  TH1D * hDummy_z_ratio = new TH1D("hDummy_z_ratio","", 10, 0, 0.55);
  makeHistTitle(hDummy_z_ratio, "","z (subjet-fraction)", "PbPb/pp");
  hDummy_z_ratio->SetAxisRange(0.5, 1.5, "Y");
  hDummy_z_ratio->SetAxisRange(0.07, 0.53, "X");
  cComp_z->cd(2);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_z->Draw();
  hPbPb_Gluon_zg_5R->SetLineStyle(3);
  hPbPb_Gluon_zg_5R->SetLineWidth(2);
  hPbPb_Gluon_zg_5R->SetLineColor(kRed);
  if(dorebin) hPbPb_Gluon_zg_5R->Rebin(5);
  hPbPb_Gluon_zg_5R->Scale(1./hPbPb_Gluon_zg_5R->Integral());
  hPbPb_Gluon_zg_5R->Draw("hist same c");
  hPbPb_T3_Gluon_z_5R->SetLineStyle(4);
  hPbPb_T3_Gluon_z_5R->SetLineWidth(2);
  hPbPb_T3_Gluon_z_5R->SetLineColor(kRed);
  if(dorebin) hPbPb_T3_Gluon_z_5R->Rebin(5);
  hPbPb_T3_Gluon_z_5R->Scale(1./hPbPb_T3_Gluon_z_5R->Integral());
  hPbPb_T3_Gluon_z_5R->Draw("hist same c");
  hpp_Gluon_zg_5R->SetLineStyle(1);
  hpp_Gluon_zg_5R->SetLineWidth(2);
  hpp_Gluon_zg_5R->SetLineColor(kRed);
  if(dorebin) hpp_Gluon_zg_5R->Rebin(5);
  hpp_Gluon_zg_5R->Scale(1./hpp_Gluon_zg_5R->Integral());
  hpp_Gluon_zg_5R->Draw("hist same c");
  hpp_T3_Gluon_z_5R->SetLineStyle(2);
  hpp_T3_Gluon_z_5R->SetLineWidth(2);
  hpp_T3_Gluon_z_5R->SetLineColor(kRed);
  if(dorebin) hpp_T3_Gluon_z_5R->Rebin(5);
  hpp_T3_Gluon_z_5R->Scale(1./hpp_T3_Gluon_z_5R->Integral());
  hpp_T3_Gluon_z_5R->Draw("hist same c");
  drawText("Gluon Jets",0.25, 0.85, 20);
  drawText("JEWEL+PYTHIA 2.76 TeV",0.25, 0.95, 25);
  drawText("#gamma+Jet Events, anti-k_{t} R=0.4 Jets",0.3, 0.75, 20);
  drawText("p^{#gamma}_{T} > 100 GeV/c, p^{Jet}_{T} > 50 GeV/c",0.3, 0.7, 20);
  drawText("#Delta#phi > 2#pi/3, |#eta^{#gamma,Jet}| < 1.5",0.3, 0.65, 20);
  drawText("w/ Recoils Grid-Sub (#Delta#eta,#Delta#phi = 0.08)", 0.3, 0.6, 20);  
  cComp_z->cd(1);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_z->Draw();
  hPbPb_Quark_zg_5R->SetLineStyle(3);
  hPbPb_Quark_zg_5R->SetLineWidth(2);
  hPbPb_Quark_zg_5R->SetLineColor(kBlue);
  if(dorebin) hPbPb_Quark_zg_5R->Rebin(5);
  hPbPb_Quark_zg_5R->Scale(1./hPbPb_Quark_zg_5R->Integral());
  hPbPb_Quark_zg_5R->Draw("hist same c");  
  hPbPb_T3_Quark_z_5R->SetLineStyle(4);
  hPbPb_T3_Quark_z_5R->SetLineWidth(2);
  hPbPb_T3_Quark_z_5R->SetLineColor(kBlue);
  if(dorebin) hPbPb_T3_Quark_z_5R->Rebin(5);
  hPbPb_T3_Quark_z_5R->Scale(1./hPbPb_T3_Quark_z_5R->Integral());
  hPbPb_T3_Quark_z_5R->Draw("hist same c");
  hpp_Quark_zg_5R->SetLineStyle(1);
  hpp_Quark_zg_5R->SetLineWidth(2);
  hpp_Quark_zg_5R->SetLineColor(kBlue);
  if(dorebin) hpp_Quark_zg_5R->Rebin(5);
  hpp_Quark_zg_5R->Scale(1./hpp_Quark_zg_5R->Integral());
  hpp_Quark_zg_5R->Draw("hist same c");  
  hpp_T3_Quark_z_5R->SetLineStyle(2);
  hpp_T3_Quark_z_5R->SetLineWidth(2);
  hpp_T3_Quark_z_5R->SetLineColor(kBlue);
  if(dorebin) hpp_T3_Quark_z_5R->Rebin(5);
  hpp_T3_Quark_z_5R->Scale(1./hpp_T3_Quark_z_5R->Integral());
  hpp_T3_Quark_z_5R->Draw("hist same c");
  TLegend * lcomp_z = myLegend(0.55, 0.55, 0.85, 0.85);
  // lcomp_z->AddEntry(hpp_Gluon_zg_5R,"pp Gluon-Jet SD zg","l");
  lcomp_z->AddEntry(hpp_Quark_zg_5R,"pp SD zg","l");
  // lcomp_z->AddEntry(hpp_T3_Gluon_z_5R,"pp Gluon-Jet T3 z","l");
  lcomp_z->AddEntry(hpp_T3_Quark_z_5R,"pp T3 z","l");
  // lcomp_z->AddEntry(hPbPb_Gluon_zg_5R,"PbPb Gluon-Jet SD zg","l");
  lcomp_z->AddEntry(hPbPb_Quark_zg_5R,"PbPb SD zg","l");
  // lcomp_z->AddEntry(hPbPb_T3_Gluon_z_5R,"PbPb Gluon-Jet T3 z","l");
  lcomp_z->AddEntry(hPbPb_T3_Quark_z_5R,"PbPb T3 z","l");
  lcomp_z->SetTextSize(0.045);
  lcomp_z->Draw();
  drawText("Quark Jets",0.3, 0.85, 20);
  if(dozratioplot){
    cComp_z->cd(4);
    // gStyle->SetErrorX(0);
    gPad->SetTickx();
    gPad->SetTicky();
    hDummy_z_ratio->Draw();
    TH1D * hRatio_Gluon_zg_5R = (TH1D*)hPbPb_Gluon_zg_5R->Clone("hRatio_Gluon_zg_5R");
    hRatio_Gluon_zg_5R->Divide(hpp_Gluon_zg_5R);
    hRatio_Gluon_zg_5R->Draw("hist same c");
    TH1D * hRatio_T3_Gluon_z_5R = (TH1D*)hPbPb_T3_Gluon_z_5R->Clone("hRatio_T3_Gluon_z_5R");
    hRatio_T3_Gluon_z_5R->Divide(hpp_T3_Gluon_z_5R);
    hRatio_T3_Gluon_z_5R->Draw("hist same c");
    TLine * line1= new TLine(0.07, 1, 0.53, 1);
    line1->SetLineColor(1);
    line1->SetLineWidth(2);
    line1->SetLineStyle(2);
    line1->Draw();
    cComp_z->cd(3);
    // gStyle->SetErrorX(0);
    gPad->SetTickx();
    gPad->SetTicky();
    hDummy_z_ratio->Draw();
    TH1D * hRatio_Quark_zg_5R = (TH1D*)hPbPb_Quark_zg_5R->Clone("hRatio_Quark_zg_5R");
    hRatio_Quark_zg_5R->Divide(hpp_Quark_zg_5R);
    hRatio_Quark_zg_5R->Draw("hist same c");
    TH1D * hRatio_T3_Quark_z_5R = (TH1D*)hPbPb_T3_Quark_z_5R->Clone("hRatio_T3_Quark_z_5R");
    hRatio_T3_Quark_z_5R->Divide(hpp_T3_Quark_z_5R);
    hRatio_T3_Quark_z_5R->Draw("hist same c");
    line1->Draw();
  }
  cComp_z->SaveAs(Form("%s/Comp_z.pdf", plotoutLoc.c_str()), "RECREATE");


  TCanvas * cComp_rg = new TCanvas("cComp_rg","",1400, 700);
  makeMultiPanelCanvas(cComp_rg, 2, 1, 0.2, 0.2, 0.2, 0.2, 0.08);
  TH1D * hDummy_rg = new TH1D("hDummy_rg","", 10, 0, 0.55);
  makeHistTitle(hDummy_rg, "","R_{g}, #theta (Angle between Sub-Jets)", "1/N dN/dR_{g}");
  hDummy_rg->SetAxisRange(0.0, 0.15, "Y");
  hDummy_rg->SetAxisRange(0.0, 0.55, "X");
  cComp_rg->cd(2);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_rg->Draw();
  hPbPb_Gluon_rg_5R->SetLineStyle(3);
  hPbPb_Gluon_rg_5R->SetLineWidth(2);
  hPbPb_Gluon_rg_5R->SetLineColor(kRed);
  if(dorebin) hPbPb_Gluon_rg_5R->Rebin(5);
  hPbPb_Gluon_rg_5R->Scale(1./hPbPb_Gluon_rg_5R->Integral());
  hPbPb_Gluon_rg_5R->Draw("hist same c");
  hPbPb_T3_Gluon_theta_5R->SetLineStyle(4);
  hPbPb_T3_Gluon_theta_5R->SetLineWidth(2);
  hPbPb_T3_Gluon_theta_5R->SetLineColor(kRed);
  if(dorebin) hPbPb_T3_Gluon_theta_5R->Rebin(5);
  hPbPb_T3_Gluon_theta_5R->Scale(1./hPbPb_T3_Gluon_theta_5R->Integral());
  hPbPb_T3_Gluon_theta_5R->Draw("hist same c");
  hpp_Gluon_rg_5R->SetLineStyle(1);
  hpp_Gluon_rg_5R->SetLineWidth(2);
  hpp_Gluon_rg_5R->SetLineColor(kRed);
  if(dorebin) hpp_Gluon_rg_5R->Rebin(5);
  hpp_Gluon_rg_5R->Scale(1./hpp_Gluon_rg_5R->Integral());
  hpp_Gluon_rg_5R->Draw("hist same c");
  hpp_T3_Gluon_theta_5R->SetLineStyle(2);
  hpp_T3_Gluon_theta_5R->SetLineWidth(2);
  hpp_T3_Gluon_theta_5R->SetLineColor(kRed);
  if(dorebin) hpp_T3_Gluon_theta_5R->Rebin(5);
  hpp_T3_Gluon_theta_5R->Scale(1./hpp_T3_Gluon_theta_5R->Integral());
  hpp_T3_Gluon_theta_5R->Draw("hist same c");
  drawText("Gluon Jets",0.25, 0.85, 20);
  drawText("JEWEL+PYTHIA 2.76 TeV",0.25, 0.95, 25);
  drawText("#gamma+Jet Events, anti-k_{t} R=0.4 Jets",0.3, 0.75, 20);
  drawText("p^{#gamma}_{T} > 100 GeV/c, p^{Jet}_{T} > 50 GeV/c",0.3, 0.7, 20);
  drawText("#Delta#phi > 2#pi/3, |#eta^{#gamma,Jet}| < 1.5",0.3, 0.65, 20);
  drawText("w/ Recoils Grid-Sub (#Delta#eta,#Delta#phi = 0.08)", 0.3, 0.6, 20);  
  cComp_rg->cd(1);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_rg->Draw();
  hPbPb_Quark_rg_5R->SetLineStyle(3);
  hPbPb_Quark_rg_5R->SetLineWidth(2);
  hPbPb_Quark_rg_5R->SetLineColor(kBlue);
  if(dorebin) hPbPb_Quark_rg_5R->Rebin(5);
  hPbPb_Quark_rg_5R->Scale(1./hPbPb_Quark_rg_5R->Integral());
  hPbPb_Quark_rg_5R->Draw("hist same c");  
  hPbPb_T3_Quark_theta_5R->SetLineStyle(4);
  hPbPb_T3_Quark_theta_5R->SetLineWidth(2);
  hPbPb_T3_Quark_theta_5R->SetLineColor(kBlue);
  if(dorebin) hPbPb_T3_Quark_theta_5R->Rebin(5);
  hPbPb_T3_Quark_theta_5R->Scale(1./hPbPb_T3_Quark_theta_5R->Integral());
  hPbPb_T3_Quark_theta_5R->Draw("hist same c");
  hpp_Quark_rg_5R->SetLineStyle(1);
  hpp_Quark_rg_5R->SetLineWidth(2);
  hpp_Quark_rg_5R->SetLineColor(kBlue);
  if(dorebin) hpp_Quark_rg_5R->Rebin(5);
  hpp_Quark_rg_5R->Scale(1./hpp_Quark_rg_5R->Integral());
  hpp_Quark_rg_5R->Draw("hist same c");  
  hpp_T3_Quark_theta_5R->SetLineStyle(2);
  hpp_T3_Quark_theta_5R->SetLineWidth(2);
  hpp_T3_Quark_theta_5R->SetLineColor(kBlue);
  if(dorebin) hpp_T3_Quark_theta_5R->Rebin(5);
  hpp_T3_Quark_theta_5R->Scale(1./hpp_T3_Quark_theta_5R->Integral());
  hpp_T3_Quark_theta_5R->Draw("hist same c");
  TLegend * lcomp_rg = myLegend(0.55, 0.55, 0.85, 0.85);
  // lcomp_z->AddEntry(hpp_Gluon_rg_5R,"pp Gluon-Jet SD rg","l");
  lcomp_rg->AddEntry(hpp_Quark_rg_5R,"pp SD R_{g}","l");
  // lcomp_z->AddEntry(hpp_T3_Gluon_z_5R,"pp Gluon-Jet T3 z","l");
  lcomp_rg->AddEntry(hpp_T3_Quark_theta_5R,"pp T3 #theta","l");
  // lcomp_z->AddEntry(hPbPb_Gluon_rg_5R,"PbPb Gluon-Jet SD rg","l");
  lcomp_rg->AddEntry(hPbPb_Quark_rg_5R,"PbPb SD R_{g}","l");
  // lcomp_z->AddEntry(hPbPb_T3_Gluon_z_5R,"PbPb Gluon-Jet T3 z","l");
  lcomp_rg->AddEntry(hPbPb_T3_Quark_theta_5R,"PbPb T3 #theta","l");
  lcomp_rg->SetTextSize(0.045);
  lcomp_rg->Draw();
  drawText("Quark Jets",0.3, 0.85, 20);
  cComp_rg->SaveAs(Form("%s/Comp_rg.pdf", plotoutLoc.c_str()), "RECREATE");



  TCanvas * ccomp_subjet_m = new TCanvas("ccomp_subjet_m","",1400, 700);
  makeMultiPanelCanvas(ccomp_subjet_m, 2, 1, 0.2, 0.2, 0.2, 0.2, 0.08);
  TH1D * hDummy_sj_m = new TH1D("hDummy_sj_m","", 10, 0, 0.55);
  makeHistTitle(hDummy_sj_m, "","M_{sj}/p^{sj}_{T}", "1/N dN/(M_{sj}/p^{sj}_{T})");
  hDummy_sj_m->SetAxisRange(0.0, 0.15, "Y");
  hDummy_sj_m->SetAxisRange(0.05, 10, "X");
  ccomp_subjet_m->cd(2);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  // ccomp_subjet_m->cd(1)->SetLogx();  
  hDummy_sj_m->Draw();
  hPbPb_T3_Gluon_m_hard_5R->SetLineStyle(3);
  hPbPb_T3_Gluon_m_hard_5R->SetLineWidth(2);
  hPbPb_T3_Gluon_m_hard_5R->SetLineColor(kRed);
  if(dorebin) hPbPb_T3_Gluon_m_hard_5R->Rebin(5);
  hPbPb_T3_Gluon_m_hard_5R->Scale(1./hPbPb_T3_Gluon_m_hard_5R->Integral());
  hPbPb_T3_Gluon_m_hard_5R->Draw("hist same c");
  hPbPb_T3_Gluon_m_soft_5R->SetLineStyle(4);
  hPbPb_T3_Gluon_m_soft_5R->SetLineWidth(2);
  hPbPb_T3_Gluon_m_soft_5R->SetLineColor(kRed);
  if(dorebin) hPbPb_T3_Gluon_m_soft_5R->Rebin(5);
  hPbPb_T3_Gluon_m_soft_5R->Scale(1./hPbPb_T3_Gluon_m_soft_5R->Integral());
  hPbPb_T3_Gluon_m_soft_5R->Draw("hist same c");
  hpp_T3_Gluon_m_hard_5R->SetLineStyle(1);
  hpp_T3_Gluon_m_hard_5R->SetLineWidth(2);
  hpp_T3_Gluon_m_hard_5R->SetLineColor(kRed);
  if(dorebin) hpp_T3_Gluon_m_hard_5R->Rebin(5);
  hpp_T3_Gluon_m_hard_5R->Scale(1./hpp_T3_Gluon_m_hard_5R->Integral());
  hpp_T3_Gluon_m_hard_5R->Draw("hist same c");
  hpp_T3_Gluon_m_soft_5R->SetLineStyle(2);
  hpp_T3_Gluon_m_soft_5R->SetLineWidth(2);
  hpp_T3_Gluon_m_soft_5R->SetLineColor(kRed);
  if(dorebin) hpp_T3_Gluon_m_soft_5R->Rebin(5);
  hpp_T3_Gluon_m_soft_5R->Scale(1./hpp_T3_Gluon_m_soft_5R->Integral());
  hpp_T3_Gluon_m_soft_5R->Draw("hist same c");
  drawText("Gluon Jets",0.25, 0.85, 20);
  drawText("JEWEL+PYTHIA 2.76 TeV",0.25, 0.95, 25);
  drawText("#gamma+Jet Events, anti-k_{t} R=0.4 Jets",0.25, 0.75, 20);
  drawText("p^{#gamma}_{T} > 100 GeV/c, p^{Jet}_{T} > 50 GeV/c",0.25, 0.7, 20);
  drawText("#Delta#phi > 2#pi/3, |#eta^{#gamma,Jet}| < 1.5",0.25, 0.65, 20);
  drawText("w/ Recoils Grid-Sub (#Delta#eta,#Delta#phi = 0.08)", 0.25, 0.6, 20);  
  ccomp_subjet_m->cd(1);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  // ccomp_subjet_m->cd(2)->SetLogx();  
  hDummy_sj_m->Draw();
  hPbPb_T3_Quark_m_hard_5R->SetLineStyle(3);
  hPbPb_T3_Quark_m_hard_5R->SetLineWidth(2);
  hPbPb_T3_Quark_m_hard_5R->SetLineColor(kBlue);
  if(dorebin) hPbPb_T3_Quark_m_hard_5R->Rebin(5);
  hPbPb_T3_Quark_m_hard_5R->Scale(1./hPbPb_T3_Quark_m_hard_5R->Integral());
  hPbPb_T3_Quark_m_hard_5R->Draw("hist same c");  
  hPbPb_T3_Quark_m_soft_5R->SetLineStyle(4);
  hPbPb_T3_Quark_m_soft_5R->SetLineWidth(2);
  hPbPb_T3_Quark_m_soft_5R->SetLineColor(kBlue);
  if(dorebin) hPbPb_T3_Quark_m_soft_5R->Rebin(5);
  hPbPb_T3_Quark_m_soft_5R->Scale(1./hPbPb_T3_Quark_m_soft_5R->Integral());
  hPbPb_T3_Quark_m_soft_5R->Draw("hist same c");
  hpp_T3_Quark_m_hard_5R->SetLineStyle(1);
  hpp_T3_Quark_m_hard_5R->SetLineWidth(2);
  hpp_T3_Quark_m_hard_5R->SetLineColor(kBlue);
  if(dorebin) hpp_T3_Quark_m_hard_5R->Rebin(5);
  hpp_T3_Quark_m_hard_5R->Scale(1./hpp_T3_Quark_m_hard_5R->Integral());
  hpp_T3_Quark_m_hard_5R->Draw("hist same c");  
  hpp_T3_Quark_m_soft_5R->SetLineStyle(2);
  hpp_T3_Quark_m_soft_5R->SetLineWidth(2);
  hpp_T3_Quark_m_soft_5R->SetLineColor(kBlue);
  if(dorebin) hpp_T3_Quark_m_soft_5R->Rebin(5);
  hpp_T3_Quark_m_soft_5R->Scale(1./hpp_T3_Quark_m_soft_5R->Integral());
  hpp_T3_Quark_m_soft_5R->Draw("hist same c");
  TLegend * lcomp_subjet_m = myLegend(0.45, 0.55, 0.85, 0.85);
  // lcomp_z->AddEntry(hpp_Gluon_m_hard_5R,"pp Gluon-Jet SD rg","l");
  lcomp_subjet_m->AddEntry(hpp_T3_Quark_m_hard_5R,"pp Hard-SubJet","l");
  // lcomp_z->AddEntry(hpp_T3_Gluon_z_5R,"pp Gluon-Jet T3 z","l");
  lcomp_subjet_m->AddEntry(hpp_T3_Quark_m_soft_5R,"pp Soft-Subjet","l");
  // lcomp_z->AddEntry(hPbPb_Gluon_m_hard_5R,"PbPb Gluon-Jet SD rg","l");
  lcomp_subjet_m->AddEntry(hPbPb_T3_Quark_m_hard_5R,"PbPb Hard-Subjet","l");
  // lcomp_z->AddEntry(hPbPb_T3_Gluon_z_5R,"PbPb Gluon-Jet T3 z","l");
  lcomp_subjet_m->AddEntry(hPbPb_T3_Quark_m_soft_5R,"PbPb Soft-Subjet","l");
  lcomp_subjet_m->SetTextSize(0.045);
  lcomp_subjet_m->Draw();
  drawText("Quark Jets",0.3, 0.85, 20);
  ccomp_subjet_m->SaveAs(Form("%s/Comp_subjet_m.pdf", plotoutLoc.c_str()), "RECREATE");
  


  TCanvas * ccomp_pp_subjet_m = new TCanvas("ccomp_pp_subjet_m","",1400, 700);
  makeMultiPanelCanvas(ccomp_pp_subjet_m, 1, 1, 0.2, 0.2, 0.2, 0.2, 0.08);
  ccomp_pp_subjet_m->cd(1);
  // ccomp_pp_subjet_m->cd(1)->SetLogy();
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  // ccomp_subjet_m->cd(1)->SetLogx();  
  hDummy_sj_m->SetTitle(" ");
  hDummy_sj_m->Draw();
  // hPbPb_T3_Gluon_m_hard_5R->SetLineStyle(3);
  // hPbPb_T3_Gluon_m_hard_5R->SetLineWidth(2);
  // hPbPb_T3_Gluon_m_hard_5R->SetLineColor(kRed);
  // if(dorebin) hPbPb_T3_Gluon_m_hard_5R->Rebin(5);
  // hPbPb_T3_Gluon_m_hard_5R->Scale(1./hPbPb_T3_Gluon_m_hard_5R->Integral());
  // hPbPb_T3_Gluon_m_hard_5R->Draw("hist same c");
  // hPbPb_T3_Gluon_m_soft_5R->SetLineStyle(4);
  // hPbPb_T3_Gluon_m_soft_5R->SetLineWidth(2);
  // hPbPb_T3_Gluon_m_soft_5R->SetLineColor(kRed);
  // if(dorebin) hPbPb_T3_Gluon_m_soft_5R->Rebin(5);
  // hPbPb_T3_Gluon_m_soft_5R->Scale(1./hPbPb_T3_Gluon_m_soft_5R->Integral());
  // hPbPb_T3_Gluon_m_soft_5R->Draw("hist same c");
  hpp_T3_Gluon_m_hard_5R->SetLineStyle(1);
  hpp_T3_Gluon_m_hard_5R->SetLineWidth(2);
  hpp_T3_Gluon_m_hard_5R->SetLineColor(kRed);
  if(dorebin) hpp_T3_Gluon_m_hard_5R->Rebin(5);
  hpp_T3_Gluon_m_hard_5R->Scale(1./hpp_T3_Gluon_m_hard_5R->Integral());
  hpp_T3_Gluon_m_hard_5R->Draw("hist same c");
  hpp_T3_Gluon_m_soft_5R->SetLineStyle(2);
  hpp_T3_Gluon_m_soft_5R->SetLineWidth(2);
  hpp_T3_Gluon_m_soft_5R->SetLineColor(kRed);
  if(dorebin) hpp_T3_Gluon_m_soft_5R->Rebin(5);
  hpp_T3_Gluon_m_soft_5R->Scale(1./hpp_T3_Gluon_m_soft_5R->Integral());
  hpp_T3_Gluon_m_soft_5R->Draw("hist same c");
  drawText("Gluon Jets",0.25, 0.85, 20, 2);
  drawText("JEWEL+PYTHIA pp 2.76 TeV",0.25, 0.95, 25);
  drawText("#gamma+Jet Events, anti-k_{t} R=0.4 Jets",0.25, 0.75, 20);
  drawText("p^{#gamma}_{T} > 100 GeV/c, p^{Jet}_{T} > 50 GeV/c",0.25, 0.7, 20);
  drawText("#Delta#phi > 2#pi/3, |#eta^{#gamma,Jet}| < 1.5",0.25, 0.65, 20);
  drawText("(#Delta#eta,#Delta#phi = 0.08)", 0.25, 0.6, 20);  
  // ccomp_pp_subjet_m->cd(1);
  // gStyle->SetErrorX(0);
  // gPad->SetTickx();
  // gPad->SetTicky();
  // ccomp_subjet_m->cd(2)->SetLogx();  
  // hDummy_sj_m->Draw();
  // hPbPb_T3_Quark_m_hard_5R->SetLineStyle(3);
  // hPbPb_T3_Quark_m_hard_5R->SetLineWidth(2);
  // hPbPb_T3_Quark_m_hard_5R->SetLineColor(kBlue);
  // if(dorebin) hPbPb_T3_Quark_m_hard_5R->Rebin(5);
  // hPbPb_T3_Quark_m_hard_5R->Scale(1./hPbPb_T3_Quark_m_hard_5R->Integral());
  // hPbPb_T3_Quark_m_hard_5R->Draw("hist same c");  
  // hPbPb_T3_Quark_m_soft_5R->SetLineStyle(4);
  // hPbPb_T3_Quark_m_soft_5R->SetLineWidth(2);
  // hPbPb_T3_Quark_m_soft_5R->SetLineColor(kBlue);
  // if(dorebin) hPbPb_T3_Quark_m_soft_5R->Rebin(5);
  // hPbPb_T3_Quark_m_soft_5R->Scale(1./hPbPb_T3_Quark_m_soft_5R->Integral());
  // hPbPb_T3_Quark_m_soft_5R->Draw("hist same c");
  hpp_T3_Quark_m_hard_5R->SetLineStyle(1);
  hpp_T3_Quark_m_hard_5R->SetLineWidth(2);
  hpp_T3_Quark_m_hard_5R->SetLineColor(kBlue);
  if(dorebin) hpp_T3_Quark_m_hard_5R->Rebin(5);
  hpp_T3_Quark_m_hard_5R->Scale(1./hpp_T3_Quark_m_hard_5R->Integral());
  hpp_T3_Quark_m_hard_5R->Draw("hist same c");  
  hpp_T3_Quark_m_soft_5R->SetLineStyle(2);
  hpp_T3_Quark_m_soft_5R->SetLineWidth(2);
  hpp_T3_Quark_m_soft_5R->SetLineColor(kBlue);
  if(dorebin) hpp_T3_Quark_m_soft_5R->Rebin(5);
  hpp_T3_Quark_m_soft_5R->Scale(1./hpp_T3_Quark_m_soft_5R->Integral());
  hpp_T3_Quark_m_soft_5R->Draw("hist same c");
  TLegend * lcomp_pp_subjet_m = myLegend(0.45, 0.7, 0.85, 0.85);
  // lcomp_z->AddEntry(hpp_Gluon_m_hard_5R,"pp Gluon-Jet SD rg","l");
  lcomp_pp_subjet_m->AddEntry(hpp_T3_Quark_m_hard_5R,"pp Hard-SubJet","l");
  // lcomp_pp_subjet_m->AddEntry(hpp_T3_Gluon_m_hard_5R,"pp Gluon Hard-SubJet Mass","l");
  // lcomp_z->AddEntry(hpp_T3_Gluon_z_5R,"pp Gluon-Jet T3 z","l");
  lcomp_pp_subjet_m->AddEntry(hpp_T3_Quark_m_soft_5R,"pp Soft-Subjet","l");
  // lcomp_pp_subjet_m->AddEntry(hpp_T3_Gluon_m_soft_5R,"pp Gluon Soft-Subjet Mass","l");
  // lcomp_z->AddEntry(hPbPb_Gluon_m_hard_5R,"PbPb Gluon-Jet SD rg","l");
  // lcomp_pp_subjet_m->AddEntry(hPbPb_T3_Quark_m_hard_5R,"PbPb Hard-Subjet Mass","l");
  // lcomp_z->AddEntry(hPbPb_T3_Gluon_z_5R,"PbPb Gluon-Jet T3 z","l");
  // lcomp_pp_subjet_m->AddEntry(hPbPb_T3_Quark_m_soft_5R,"PbPb Soft-Subjet Mass","l");
  lcomp_pp_subjet_m->SetTextSize(0.045);
  lcomp_pp_subjet_m->Draw();
  drawText("Quark Jets",0.3, 0.85, 20, 4);
  ccomp_pp_subjet_m->SaveAs(Form("%s/Comp_pp_subjet_m.pdf", plotoutLoc.c_str()), "RECREATE");




  //! New Plots 4-panels
  //!
  //!  pp-zg    pp-z
  //! 
  //!  AA-zg    AA-z 
  //! 
  

  TCanvas * cComp_z_new = new TCanvas("cComp_z_new","",x, y);
  makeMultiPanelCanvas(cComp_z_new, 2, 2, 0.2, 0.2, 0.2, 0.2, 0.08);
  TH1D * hDummy_z_new_left = new TH1D("hDummy_z_new_left","", 10, 0.05, 0.55);
  makeHistTitle(hDummy_z_new_left, "","z_{g} ", "1/N dN/d(z_{g}, z_{T3})");
  hDummy_z_new_left->SetAxisRange(0.0, 12, "Y");
  TH1D * hDummy_z_new_right = new TH1D("hDummy_z_new_right","", 10, 0.05, 0.55);
  makeHistTitle(hDummy_z_new_right, "","TD3 z_{T3} (subjet-fraction)", "1/N dN/dz_{T3}");
  hDummy_z_new_right->SetAxisRange(0.0, 12, "Y");
  // hDummy_z_new->SetAxisRange(0.07, 0.53, "X");
  cComp_z_new->cd(1);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_z_new_left->Draw();
  hpp_Gluon_zg_5R->SetLineStyle(1);
  hpp_Gluon_zg_5R->SetLineWidth(2);
  hpp_Gluon_zg_5R->SetLineColor(kRed);
  hpp_Gluon_zg_5R->Scale(1./hpp_Gluon_zg_5R->Integral());
  divideBinWidth(hpp_Gluon_zg_5R);
  hpp_Gluon_zg_5R->Draw("hist same c");
  hpp_Quark_zg_5R->SetLineStyle(1);
  hpp_Quark_zg_5R->SetLineWidth(2);
  hpp_Quark_zg_5R->SetLineColor(kBlue);
  hpp_Quark_zg_5R->Scale(1./hpp_Quark_zg_5R->Integral());
  divideBinWidth(hpp_Quark_zg_5R);
  hpp_Quark_zg_5R->Draw("hist same c");  

  cComp_z_new->cd(2);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_z_new_right->Draw();
  hpp_T3_Gluon_z_5R->SetLineStyle(2);
  hpp_T3_Gluon_z_5R->SetLineWidth(2);
  hpp_T3_Gluon_z_5R->SetLineColor(kRed);
  hpp_T3_Gluon_z_5R->Scale(1./hpp_T3_Gluon_z_5R->Integral());
  divideBinWidth(hpp_T3_Gluon_z_5R);
  hpp_T3_Gluon_z_5R->Draw("hist same c");
  hpp_T3_Quark_z_5R->SetLineStyle(2);
  hpp_T3_Quark_z_5R->SetLineWidth(2);
  hpp_T3_Quark_z_5R->SetLineColor(kBlue);
  hpp_T3_Quark_z_5R->Scale(1./hpp_T3_Quark_z_5R->Integral());
  divideBinWidth(hpp_T3_Quark_z_5R);
  hpp_T3_Quark_z_5R->Draw("hist same c");

  cComp_z_new->cd(3);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_z_new_left->Draw();  
  hPbPb_Gluon_zg_5R->SetLineStyle(1);
  hPbPb_Gluon_zg_5R->SetLineWidth(2);
  hPbPb_Gluon_zg_5R->SetLineColor(kRed);
  hPbPb_Gluon_zg_5R->Scale(1./hPbPb_Gluon_zg_5R->Integral());
  divideBinWidth(hPbPb_Gluon_zg_5R);
  hPbPb_Gluon_zg_5R->Draw("hist same c");
  hPbPb_Quark_zg_5R->SetLineStyle(1);
  hPbPb_Quark_zg_5R->SetLineWidth(2);
  hPbPb_Quark_zg_5R->SetLineColor(kBlue);
  hPbPb_Quark_zg_5R->Scale(1./hPbPb_Quark_zg_5R->Integral());
  divideBinWidth(hPbPb_Quark_zg_5R);
  hPbPb_Quark_zg_5R->Draw("hist same c");  

  cComp_z_new->cd(4);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_z_new_right->Draw();    
  hPbPb_T3_Gluon_z_5R->SetLineStyle(2);
  hPbPb_T3_Gluon_z_5R->SetLineWidth(2);
  hPbPb_T3_Gluon_z_5R->SetLineColor(kRed);
  hPbPb_T3_Gluon_z_5R->Scale(1./hPbPb_T3_Gluon_z_5R->Integral());
  divideBinWidth(hPbPb_T3_Gluon_z_5R);
  hPbPb_T3_Gluon_z_5R->Draw("hist same c");
  hPbPb_T3_Quark_z_5R->SetLineStyle(2);
  hPbPb_T3_Quark_z_5R->SetLineWidth(2);
  hPbPb_T3_Quark_z_5R->SetLineColor(kBlue);
  hPbPb_T3_Quark_z_5R->Scale(1./hPbPb_T3_Quark_z_5R->Integral());
  divideBinWidth(hPbPb_T3_Quark_z_5R);
  hPbPb_T3_Quark_z_5R->Draw("hist same c");

  cComp_z_new->cd(1);
  drawText("Gluon Jets",0.5, 0.5, 20, 2);
  drawText("Quark Jets",0.5, 0.4, 20, 4);
  drawText("pp - SoftDrop", 0.55, 0.7, 20, 1);
  drawText("z_{cut} = 0.1, #beta = 0", 0.55, 0.6, 20, 1);
  drawText("JEWEL+PYTHIA 2.76 TeV",0.55, 0.8, 20);
  cComp_z_new->cd(2);
  drawText("pp - TD3", 0.1, 0.8, 20, 1);
  drawText("#gamma+Jet Events, anti-k_{t} R=0.4 Jets",0.3, 0.75, 20);
  drawText("p^{#gamma}_{T} > 100 GeV/c, p^{Jet}_{T} > 50 GeV/c",0.3, 0.65, 20);
  drawText("#Delta#phi > 2#pi/3, |#eta^{#gamma,Jet}| < 1.5",0.3, 0.55, 20);
  drawText("GridJets (#Delta#eta,#Delta#phi = 0.08)", 0.3, 0.45, 20);  
  cComp_z_new->cd(3);
  drawText("PbPb - SoftDrop", 0.55, 0.7, 20, 1);
  drawText("z_{cut} = 0.1, #beta = 0", 0.55, 0.6, 20, 1);
  cComp_z_new->cd(4);
  drawText("PbPb - TD3", 0.2, 0.7, 20, 1);
  drawText("w/ Recoils Grid-Sub (#Delta#eta,#Delta#phi = 0.08)", 0.2, 0.8, 20);  
  cComp_z_new->SaveAs(Form("%s/Comp_z_new.pdf", plotoutLoc.c_str()), "RECREATE");

  



  TCanvas * ccomp_rg_new = new TCanvas("ccomp_rg_new","",x, y);
  makeMultiPanelCanvas(ccomp_rg_new, 2, 2, 0.2, 0.2, 0.2, 0.2, 0.08);
  TH1D * hDummy_rg_new_left = new TH1D("hDummy_rg_new_left","", 10, 0.05, 0.55);
  makeHistTitle(hDummy_rg_new_left, "","r_{g} Groomed jet radius", "1/N dN/d(r_{g}, #theta_{T3})");
  hDummy_rg_new_left->SetAxisRange(0.0, 12, "Y");
  TH1D * hDummy_rg_new_right = new TH1D("hDummy_rg_new_right","", 10, 0.05, 0.55);
  makeHistTitle(hDummy_rg_new_right, "","TD3 #theta_{T3} Angle between Sub-Jets", "1/N dN/d#theta_{T3}");
  hDummy_rg_new_right->SetAxisRange(0.0, 12, "Y");
  // hDummy_z_new->SetAxisRange(0.07, 0.53, "X");
  ccomp_rg_new->cd(1);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_rg_new_left->Draw();
  hpp_Gluon_rg_5R->SetLineStyle(1);
  hpp_Gluon_rg_5R->SetLineWidth(2);
  hpp_Gluon_rg_5R->SetLineColor(kRed);
  hpp_Gluon_rg_5R->Scale(1./hpp_Gluon_rg_5R->Integral());
  divideBinWidth(hpp_Gluon_rg_5R);
  hpp_Gluon_rg_5R->Draw("hist same c");
  hpp_Quark_rg_5R->SetLineStyle(1);
  hpp_Quark_rg_5R->SetLineWidth(2);
  hpp_Quark_rg_5R->SetLineColor(kBlue);
  hpp_Quark_rg_5R->Scale(1./hpp_Quark_rg_5R->Integral());
  divideBinWidth(hpp_Quark_rg_5R);
  hpp_Quark_rg_5R->Draw("hist same c");  

  ccomp_rg_new->cd(2);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_rg_new_right->Draw();
  hpp_T3_Gluon_theta_5R->SetLineStyle(2);
  hpp_T3_Gluon_theta_5R->SetLineWidth(2);
  hpp_T3_Gluon_theta_5R->SetLineColor(kRed);
  hpp_T3_Gluon_theta_5R->Scale(1./hpp_T3_Gluon_theta_5R->Integral());
  divideBinWidth(hpp_T3_Gluon_theta_5R);
  hpp_T3_Gluon_theta_5R->Draw("hist same c");
  hpp_T3_Quark_theta_5R->SetLineStyle(2);
  hpp_T3_Quark_theta_5R->SetLineWidth(2);
  hpp_T3_Quark_theta_5R->SetLineColor(kBlue);
  hpp_T3_Quark_theta_5R->Scale(1./hpp_T3_Quark_theta_5R->Integral());
  divideBinWidth(hpp_T3_Quark_theta_5R);
  hpp_T3_Quark_theta_5R->Draw("hist same c");

  ccomp_rg_new->cd(3);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_rg_new_left->Draw();  
  hPbPb_Gluon_rg_5R->SetLineStyle(1);
  hPbPb_Gluon_rg_5R->SetLineWidth(2);
  hPbPb_Gluon_rg_5R->SetLineColor(kRed);
  hPbPb_Gluon_rg_5R->Scale(1./hPbPb_Gluon_rg_5R->Integral());
  divideBinWidth(hPbPb_Gluon_rg_5R);
  hPbPb_Gluon_rg_5R->Draw("hist same c");
  hPbPb_Quark_rg_5R->SetLineStyle(1);
  hPbPb_Quark_rg_5R->SetLineWidth(2);
  hPbPb_Quark_rg_5R->SetLineColor(kBlue);
  hPbPb_Quark_rg_5R->Scale(1./hPbPb_Quark_rg_5R->Integral());
  divideBinWidth(hPbPb_Quark_rg_5R);
  hPbPb_Quark_rg_5R->Draw("hist same c");  

  ccomp_rg_new->cd(4);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_rg_new_right->Draw();    
  hPbPb_T3_Gluon_theta_5R->SetLineStyle(2);
  hPbPb_T3_Gluon_theta_5R->SetLineWidth(2);
  hPbPb_T3_Gluon_theta_5R->SetLineColor(kRed);
  hPbPb_T3_Gluon_theta_5R->Scale(1./hPbPb_T3_Gluon_theta_5R->Integral());
  divideBinWidth(hPbPb_T3_Gluon_theta_5R);
  hPbPb_T3_Gluon_theta_5R->Draw("hist same c");
  hPbPb_T3_Quark_theta_5R->SetLineStyle(2);
  hPbPb_T3_Quark_theta_5R->SetLineWidth(2);
  hPbPb_T3_Quark_theta_5R->SetLineColor(kBlue);
  hPbPb_T3_Quark_theta_5R->Scale(1./hPbPb_T3_Quark_theta_5R->Integral());
  divideBinWidth(hPbPb_T3_Quark_theta_5R);
  hPbPb_T3_Quark_theta_5R->Draw("hist same c");

  ccomp_rg_new->cd(1);
  drawText("Gluon Jets",0.5, 0.5, 20, 2);
  drawText("Quark Jets",0.5, 0.4, 20, 4);
  drawText("pp - SoftDrop", 0.55, 0.7, 20, 1);
  drawText("z_{cut} = 0.1, #beta = 0", 0.55, 0.6, 20, 1);
  drawText("JEWEL+PYTHIA 2.76 TeV",0.55, 0.8, 20);
  ccomp_rg_new->cd(2);
  drawText("pp - TD3", 0.1, 0.8, 20, 1);
  drawText("#gamma+Jet Events, anti-k_{t} R=0.4 Jets",0.3, 0.75, 20);
  drawText("p^{#gamma}_{T} > 100 GeV/c, p^{Jet}_{T} > 50 GeV/c",0.3, 0.65, 20);
  drawText("#Delta#phi > 2#pi/3, |#eta^{#gamma,Jet}| < 1.5",0.3, 0.55, 20);
  drawText("GridJets (#Delta#eta,#Delta#phi = 0.08)", 0.3, 0.45, 20);  
  ccomp_rg_new->cd(1);
  TLegend * lcomp_rg_new = myLegend(0.55, 0.4, 0.85, 0.85);
  lcomp_rg_new->AddEntry(hpp_Quark_zg_5R,"pp SD zg","l");
  lcomp_rg_new->AddEntry(hpp_T3_Quark_z_5R,"pp T3 z","l");
  lcomp_rg_new->AddEntry(hPbPb_Quark_zg_5R,"PbPb SD zg","l");
  lcomp_rg_new->AddEntry(hPbPb_T3_Quark_z_5R,"PbPb T3 z","l");
  lcomp_rg_new->SetTextSize(0.07);
  //lcomp_rg_new->Draw();
  ccomp_rg_new->cd(3);
  drawText("PbPb - SoftDrop", 0.55, 0.85, 20, 1);
  drawText("z_{cut} = 0.1, #beta = 0", 0.55, 0.75, 20, 1);
  ccomp_rg_new->cd(4);
  drawText("PbPb - TD3", 0.2, 0.7, 20, 1);
  drawText("w/ Recoils Grid-Sub (#Delta#eta,#Delta#phi = 0.08)", 0.2, 0.8, 20);  
  ccomp_rg_new->SaveAs(Form("%s/Comp_rg_new.pdf", plotoutLoc.c_str()), "RECREATE");


  




  TCanvas * ccomp_lambda_new = new TCanvas("ccomp_lambda_new","",x, y);
  makeMultiPanelCanvas(ccomp_lambda_new, 2, 2, 0.2, 0.2, 0.2, 0.2, 0.08);
  TH1D * hDummy_lambda_new = new TH1D("hDummy_lambda_new","", 1000, 0.0, 1.0);
  makeHistTitle(hDummy_lambda_new, "","TD3 Sub-Jet #lambda (m^{sj}/p^{sj}_{T})", "1/N dN/d#lambda");
  hDummy_lambda_new->SetAxisRange(1e-1, 16, "Y");
  hDummy_lambda_new->SetAxisRange(1e-2, 0.6, "X");
  // hDummy_z_new->SetAxisRange(0.07, 0.53, "X");
  ccomp_lambda_new->cd(1);
  // ccomp_lambda_new->cd(1)->SetLogy();
  // ccomp_lambda_new->cd(1)->SetLogx();
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_lambda_new->Draw();
  hpp_T3_Gluon_m_hard_5R->SetLineStyle(2);
  hpp_T3_Gluon_m_hard_5R->SetLineWidth(2);
  hpp_T3_Gluon_m_hard_5R->SetLineColor(kRed);
  if(dorebin) hpp_T3_Gluon_m_hard_5R->Rebin(5);
  hpp_T3_Gluon_m_hard_5R->Scale(1./hpp_T3_Gluon_m_hard_5R->Integral());
  divideBinWidth(hpp_T3_Gluon_m_hard_5R);
  hpp_T3_Gluon_m_hard_5R->Draw("hist same c");
  hpp_T3_Quark_m_hard_5R->SetLineStyle(2);
  hpp_T3_Quark_m_hard_5R->SetLineWidth(2);
  hpp_T3_Quark_m_hard_5R->SetLineColor(kBlue);
  if(dorebin) hpp_T3_Quark_m_hard_5R->Rebin(5);
  hpp_T3_Quark_m_hard_5R->Scale(1./hpp_T3_Quark_m_hard_5R->Integral());
  divideBinWidth(hpp_T3_Quark_m_hard_5R);
  hpp_T3_Quark_m_hard_5R->Draw("hist same c");

  ccomp_lambda_new->cd(2);
  // ccomp_lambda_new->cd(2)->SetLogy();
  // ccomp_lambda_new->cd(2)->SetLogx();
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_lambda_new->Draw();
  hpp_T3_Gluon_m_soft_5R->SetLineStyle(2);
  hpp_T3_Gluon_m_soft_5R->SetLineWidth(2);
  hpp_T3_Gluon_m_soft_5R->SetLineColor(kRed);
  if(dorebin) hpp_T3_Gluon_m_soft_5R->Rebin(5);
  hpp_T3_Gluon_m_soft_5R->Scale(1./hpp_T3_Gluon_m_soft_5R->Integral());
  divideBinWidth(hpp_T3_Gluon_m_soft_5R);
  hpp_T3_Gluon_m_soft_5R->Draw("hist same c");
  hpp_T3_Quark_m_soft_5R->SetLineStyle(2);
  hpp_T3_Quark_m_soft_5R->SetLineWidth(2);
  hpp_T3_Quark_m_soft_5R->SetLineColor(kBlue);
  if(dorebin) hpp_T3_Quark_m_soft_5R->Rebin(5);
  hpp_T3_Quark_m_soft_5R->Scale(1./hpp_T3_Quark_m_soft_5R->Integral());
  divideBinWidth(hpp_T3_Quark_m_soft_5R);
  hpp_T3_Quark_m_soft_5R->Draw("hist same c");

  ccomp_lambda_new->cd(3);
  // ccomp_lambda_new->cd(3)->SetLogy();
  // ccomp_lambda_new->cd(3)->SetLogx();
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_lambda_new->Draw();  
  hPbPb_T3_Gluon_m_hard_5R->SetLineStyle(2);
  hPbPb_T3_Gluon_m_hard_5R->SetLineWidth(2);
  hPbPb_T3_Gluon_m_hard_5R->SetLineColor(kRed);
  if(dorebin) hPbPb_T3_Gluon_m_hard_5R->Rebin(5);
  hPbPb_T3_Gluon_m_hard_5R->Scale(1./hPbPb_T3_Gluon_m_hard_5R->Integral());
  divideBinWidth(hPbPb_T3_Gluon_m_hard_5R);
  hPbPb_T3_Gluon_m_hard_5R->Draw("hist same c");
  hPbPb_T3_Quark_m_hard_5R->SetLineStyle(2);
  hPbPb_T3_Quark_m_hard_5R->SetLineWidth(2);
  hPbPb_T3_Quark_m_hard_5R->SetLineColor(kBlue);
  if(dorebin) hPbPb_T3_Quark_m_hard_5R->Rebin(5);
  hPbPb_T3_Quark_m_hard_5R->Scale(1./hPbPb_T3_Quark_m_hard_5R->Integral());
  divideBinWidth(hPbPb_T3_Quark_m_hard_5R);
  hPbPb_T3_Quark_m_hard_5R->Draw("hist same c");

  ccomp_lambda_new->cd(4);
  // ccomp_lambda_new->cd(4)->SetLogy();
  // ccomp_lambda_new->cd(4)->SetLogx();
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_lambda_new->Draw();    
  hPbPb_T3_Gluon_m_soft_5R->SetLineStyle(2);
  hPbPb_T3_Gluon_m_soft_5R->SetLineWidth(2);
  hPbPb_T3_Gluon_m_soft_5R->SetLineColor(kRed);
  if(dorebin) hPbPb_T3_Gluon_m_soft_5R->Rebin(5);
  hPbPb_T3_Gluon_m_soft_5R->Scale(1./hPbPb_T3_Gluon_m_soft_5R->Integral());
  divideBinWidth(hPbPb_T3_Gluon_m_soft_5R);
  hPbPb_T3_Gluon_m_soft_5R->Draw("hist same c");
  hPbPb_T3_Quark_m_soft_5R->SetLineStyle(2);
  hPbPb_T3_Quark_m_soft_5R->SetLineWidth(2);
  hPbPb_T3_Quark_m_soft_5R->SetLineColor(kBlue);
  if(dorebin) hPbPb_T3_Quark_m_soft_5R->Rebin(5);
  hPbPb_T3_Quark_m_soft_5R->Scale(1./hPbPb_T3_Quark_m_soft_5R->Integral());
  divideBinWidth(hPbPb_T3_Quark_m_soft_5R);
  hPbPb_T3_Quark_m_soft_5R->Draw("hist same c");

  ccomp_lambda_new->cd(1);
  drawText("Gluon Jets",0.5, 0.5, 20, 2);
  drawText("Quark Jets",0.5, 0.4, 20, 4);
  drawText("pp - Hard Subjet", 0.55, 0.7, 20, 1);
  drawText("JEWEL+PYTHIA 2.76 TeV",0.55, 0.8, 20);
  ccomp_lambda_new->cd(2);
  drawText("pp - Soft Subjet", 0.4, 0.3, 20, 1);
  drawText("#gamma+Jet Events, anti-k_{t} R=0.4 Jets",0.3, 0.75, 20);
  drawText("p^{#gamma}_{T} > 100 GeV/c, p^{Jet}_{T} > 50 GeV/c",0.3, 0.65, 20);
  drawText("#Delta#phi > 2#pi/3, |#eta^{#gamma,Jet}| < 1.5",0.3, 0.55, 20);
  drawText("GridJets (#Delta#eta,#Delta#phi = 0.08)", 0.3, 0.45, 20);  
  ccomp_lambda_new->cd(3);
  drawText("PbPb - Hard Subjet", 0.55, 0.8, 20, 1);
  ccomp_lambda_new->cd(4);
  drawText("PbPb - Soft Subjet", 0.2, 0.7, 20, 1);
  drawText("w/ Recoils Grid-Sub (#Delta#eta,#Delta#phi = 0.08)", 0.2, 0.8, 20);  
  ccomp_lambda_new->SaveAs(Form("%s/Comp_lambda_new.pdf", plotoutLoc.c_str()), "RECREATE");







  
  TCanvas * ccomp_rg_pp_comp_new = new TCanvas("ccomp_rg_pp_comp_new","",x, y);
  makeMultiPanelCanvas(ccomp_rg_pp_comp_new, 2, 1, 0.2, 0.2, 0.2, 0.2, 0.08);
  ccomp_rg_pp_comp_new->cd(1);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_rg_new_left->Draw();
  hpp_Gluon_rg_5R->SetLineStyle(1);
  hpp_Gluon_rg_5R->SetLineWidth(2);
  hpp_Gluon_rg_5R->SetLineColor(kRed);
  hpp_Gluon_rg_5R->Scale(1./hpp_Gluon_rg_5R->Integral());
  divideBinWidth(hpp_Gluon_rg_5R);
  hpp_Gluon_rg_5R->Draw("hist same c");
  hpp_Quark_rg_5R->SetLineStyle(1);
  hpp_Quark_rg_5R->SetLineWidth(2);
  hpp_Quark_rg_5R->SetLineColor(kBlue);
  hpp_Quark_rg_5R->Scale(1./hpp_Quark_rg_5R->Integral());
  divideBinWidth(hpp_Quark_rg_5R);
  hpp_Quark_rg_5R->Draw("hist same c");  

  ccomp_rg_pp_comp_new->cd(2);
  // gStyle->SetErrorX(0;)
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_rg_new_left->Draw();
  hpp_T2_Gluon_theta_5R->SetLineStyle(3);
  hpp_T2_Gluon_theta_5R->SetLineWidth(2);
  hpp_T2_Gluon_theta_5R->SetLineColor(kRed);
  hpp_T2_Gluon_theta_5R->Scale(1./hpp_T2_Gluon_theta_5R->Integral());
  divideBinWidth(hpp_T2_Gluon_theta_5R);
  hpp_T2_Gluon_theta_5R->Draw("hist same c");
  hpp_T2_Quark_theta_5R->SetLineStyle(3);
  hpp_T2_Quark_theta_5R->SetLineWidth(2);
  hpp_T2_Quark_theta_5R->SetLineColor(kBlue);
  hpp_T2_Quark_theta_5R->Scale(1./hpp_T2_Quark_theta_5R->Integral());
  divideBinWidth(hpp_T2_Quark_theta_5R);
  hpp_T2_Quark_theta_5R->Draw("hist same c");

  ccomp_rg_pp_comp_new->cd(1);
  drawText("Gluon Jets",0.5, 0.65, 20, 2);
  drawText("Quark Jets",0.5, 0.55, 20, 4);
  drawText("pp - SoftDrop", 0.7, 0.8, 20, 1);
  drawText("z_{cut} = 0.1, #beta = 0", 0.7, 0.75, 20, 1);
  drawText("JEWEL+PYTHIA 2.76 TeV",0.55, 0.85, 20);
  ccomp_rg_pp_comp_new->cd(2);
  drawText("pp - TD2", 0.1, 0.8, 20, 1);
  drawText("#gamma+Jet Events, anti-k_{t} R=0.4 Jets",0.3, 0.75, 20);
  drawText("p^{#gamma}_{T} > 100 GeV/c, p^{Jet}_{T} > 50 GeV/c",0.3, 0.65, 20);
  drawText("#Delta#phi > 2#pi/3, |#eta^{#gamma,Jet}| < 1.5",0.3, 0.55, 20);
  drawText("GridJets (#Delta#eta,#Delta#phi = 0.08)", 0.3, 0.45, 20);  
  ccomp_rg_pp_comp_new->SaveAs(Form("%s/Comp_rg_ppcomp_SD_TD2_new.pdf", plotoutLoc.c_str()), "RECREATE");


  
  TCanvas * ccomp_zg_pp_comp_new = new TCanvas("ccomp_zg_pp_comp_new","",x, y);
  makeMultiPanelCanvas(ccomp_zg_pp_comp_new, 2, 1, 0.2, 0.2, 0.2, 0.2, 0.08);
  ccomp_zg_pp_comp_new->cd(1);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_z_new_left->Draw();
  hpp_Gluon_zg_5R->SetLineStyle(1);
  hpp_Gluon_zg_5R->SetLineWidth(2);
  hpp_Gluon_zg_5R->SetLineColor(kRed);
  hpp_Gluon_zg_5R->Scale(1./hpp_Gluon_zg_5R->Integral());
  divideBinWidth(hpp_Gluon_zg_5R);
  hpp_Gluon_zg_5R->Draw("hist same c");
  hpp_Quark_zg_5R->SetLineStyle(1);
  hpp_Quark_zg_5R->SetLineWidth(2);
  hpp_Quark_zg_5R->SetLineColor(kBlue);
  hpp_Quark_zg_5R->Scale(1./hpp_Quark_zg_5R->Integral());
  divideBinWidth(hpp_Quark_zg_5R);
  hpp_Quark_zg_5R->Draw("hist same c");  

  ccomp_zg_pp_comp_new->cd(2);
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_z_new_left->Draw();
  hpp_T2_Gluon_z_5R->SetLineStyle(3);
  hpp_T2_Gluon_z_5R->SetLineWidth(2);
  hpp_T2_Gluon_z_5R->SetLineColor(kRed);
  hpp_T2_Gluon_z_5R->Scale(1./hpp_T2_Gluon_z_5R->Integral());
  divideBinWidth(hpp_T2_Gluon_z_5R);
  hpp_T2_Gluon_z_5R->Draw("hist same c");
  hpp_T2_Quark_z_5R->SetLineStyle(3);
  hpp_T2_Quark_z_5R->SetLineWidth(2);
  hpp_T2_Quark_z_5R->SetLineColor(kBlue);
  hpp_T2_Quark_z_5R->Scale(1./hpp_T2_Quark_z_5R->Integral());
  divideBinWidth(hpp_T2_Quark_z_5R);
  hpp_T2_Quark_z_5R->Draw("hist same c");

  ccomp_zg_pp_comp_new->cd(1);
  drawText("Gluon Jets",0.5, 0.65, 20, 2);
  drawText("Quark Jets",0.5, 0.55, 20, 4);
  drawText("pp - SoftDrop", 0.7, 0.8, 20, 1);
  drawText("z_{cut} = 0.1, #beta = 0", 0.7, 0.75, 20, 1);
  drawText("JEWEL+PYTHIA 2.76 TeV",0.55, 0.85, 20);
  ccomp_zg_pp_comp_new->cd(2);
  drawText("pp - TD2", 0.1, 0.8, 20, 1);
  drawText("#gamma+Jet Events, anti-k_{t} R=0.4 Jets",0.3, 0.75, 20);
  drawText("p^{#gamma}_{T} > 100 GeV/c, p^{Jet}_{T} > 50 GeV/c",0.3, 0.65, 20);
  drawText("#Delta#phi > 2#pi/3, |#eta^{#gamma,Jet}| < 1.5",0.3, 0.55, 20);
  drawText("GridJets (#Delta#eta,#Delta#phi = 0.08)", 0.3, 0.45, 20);  
  ccomp_zg_pp_comp_new->SaveAs(Form("%s/Comp_zg_ppcomp_SD_TD2_new.pdf", plotoutLoc.c_str()), "RECREATE");







  TCanvas * ccomp_lambda_new_2 = new TCanvas("ccomp_lambda_new_2","",x, y);
  makeMultiPanelCanvas(ccomp_lambda_new_2, 2, 2, 0.2, 0.2, 0.2, 0.2, 0.08);
  TH1D * hDummy_lambda_new_2 = new TH1D("hDummy_lambda_new_2","", 1000, 0.0, 1.0);
  makeHistTitle(hDummy_lambda_new_2, "","TD3 Sub-Jet #lambda (m^{sj}/p^{sj}_{T})", "1/N dN/d#lambda");
  hDummy_lambda_new_2->SetAxisRange(1e-1, 1e2, "Y");
  hDummy_lambda_new_2->SetAxisRange(1e-2, 0.35, "X");
  // hDummy_z_new->SetAxisRange(0.07, 0.53, "X");
  ccomp_lambda_new_2->cd(1);
  ccomp_lambda_new_2->cd(1)->SetLogy();
  // ccomp_lambda_new_2->cd(1)->SetLogx();
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_lambda_new_2->Draw();
  hpp_T3_Gluon_m_hard_5R->SetLineStyle(2);
  hpp_T3_Gluon_m_hard_5R->SetLineWidth(2);
  hpp_T3_Gluon_m_hard_5R->SetLineColor(kRed);
  if(dorebin) hpp_T3_Gluon_m_hard_5R->Rebin(5);
  hpp_T3_Gluon_m_hard_5R->Scale(1./hpp_T3_Gluon_m_hard_5R->Integral());
  divideBinWidth(hpp_T3_Gluon_m_hard_5R);
  hpp_T3_Gluon_m_hard_5R->Draw("hist same c");
  hpp_T3_Quark_m_hard_5R->SetLineStyle(2);
  hpp_T3_Quark_m_hard_5R->SetLineWidth(2);
  hpp_T3_Quark_m_hard_5R->SetLineColor(kBlue);
  if(dorebin) hpp_T3_Quark_m_hard_5R->Rebin(5);
  hpp_T3_Quark_m_hard_5R->Scale(1./hpp_T3_Quark_m_hard_5R->Integral());
  divideBinWidth(hpp_T3_Quark_m_hard_5R);
  hpp_T3_Quark_m_hard_5R->Draw("hist same c");

  ccomp_lambda_new_2->cd(2);
  ccomp_lambda_new_2->cd(2)->SetLogy();
  // ccomp_lambda_new_2->cd(2)->SetLogx();
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_lambda_new_2->Draw();
  hpp_T3_Gluon_m_soft_5R->SetLineStyle(2);
  hpp_T3_Gluon_m_soft_5R->SetLineWidth(2);
  hpp_T3_Gluon_m_soft_5R->SetLineColor(kRed);
  if(dorebin) hpp_T3_Gluon_m_soft_5R->Rebin(5);
  hpp_T3_Gluon_m_soft_5R->Scale(1./hpp_T3_Gluon_m_soft_5R->Integral());
  divideBinWidth(hpp_T3_Gluon_m_soft_5R);
  hpp_T3_Gluon_m_soft_5R->Draw("hist same c");
  hpp_T3_Quark_m_soft_5R->SetLineStyle(2);
  hpp_T3_Quark_m_soft_5R->SetLineWidth(2);
  hpp_T3_Quark_m_soft_5R->SetLineColor(kBlue);
  if(dorebin) hpp_T3_Quark_m_soft_5R->Rebin(5);
  hpp_T3_Quark_m_soft_5R->Scale(1./hpp_T3_Quark_m_soft_5R->Integral());
  divideBinWidth(hpp_T3_Quark_m_soft_5R);
  hpp_T3_Quark_m_soft_5R->Draw("hist same c");

  ccomp_lambda_new_2->cd(3);
  ccomp_lambda_new_2->cd(3)->SetLogy();
  // ccomp_lambda_new_2->cd(3)->SetLogx();
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_lambda_new_2->Draw();  
  hpp_T2_Gluon_m_hard_5R->SetLineStyle(3);
  hpp_T2_Gluon_m_hard_5R->SetLineWidth(2);
  hpp_T2_Gluon_m_hard_5R->SetLineColor(kRed);
  if(dorebin) hpp_T2_Gluon_m_hard_5R->Rebin(5);
  hpp_T2_Gluon_m_hard_5R->Scale(1./hpp_T2_Gluon_m_hard_5R->Integral());
  divideBinWidth(hpp_T2_Gluon_m_hard_5R);
  hpp_T2_Gluon_m_hard_5R->Draw("hist same c");
  hpp_T2_Quark_m_hard_5R->SetLineStyle(3);
  hpp_T2_Quark_m_hard_5R->SetLineWidth(2);
  hpp_T2_Quark_m_hard_5R->SetLineColor(kBlue);
  if(dorebin) hpp_T2_Quark_m_hard_5R->Rebin(5);
  hpp_T2_Quark_m_hard_5R->Scale(1./hpp_T2_Quark_m_hard_5R->Integral());
  divideBinWidth(hpp_T2_Quark_m_hard_5R);
  hpp_T2_Quark_m_hard_5R->Draw("hist same c");

  ccomp_lambda_new_2->cd(4);
  ccomp_lambda_new_2->cd(4)->SetLogy();
  // ccomp_lambda_new_2->cd(4)->SetLogx();
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_lambda_new_2->Draw();    
  hpp_T2_Gluon_m_soft_5R->SetLineStyle(3);
  hpp_T2_Gluon_m_soft_5R->SetLineWidth(2);
  hpp_T2_Gluon_m_soft_5R->SetLineColor(kRed);
  if(dorebin) hpp_T2_Gluon_m_soft_5R->Rebin(5);
  hpp_T2_Gluon_m_soft_5R->Scale(1./hpp_T2_Gluon_m_soft_5R->Integral());
  divideBinWidth(hpp_T2_Gluon_m_soft_5R);
  hpp_T2_Gluon_m_soft_5R->Draw("hist same c");
  hpp_T2_Quark_m_soft_5R->SetLineStyle(3);
  hpp_T2_Quark_m_soft_5R->SetLineWidth(2);
  hpp_T2_Quark_m_soft_5R->SetLineColor(kBlue);
  if(dorebin) hpp_T2_Quark_m_soft_5R->Rebin(5);
  hpp_T2_Quark_m_soft_5R->Scale(1./hpp_T2_Quark_m_soft_5R->Integral());
  divideBinWidth(hpp_T2_Quark_m_soft_5R);
  hpp_T2_Quark_m_soft_5R->Draw("hist same c");

  ccomp_lambda_new_2->cd(1);
  drawText("Gluon Jets",0.25, 0.35, 20, 2);
  drawText("Quark Jets",0.25, 0.25, 20, 4);
  drawText("TD3 - Hard Subjet", 0.25, 0.15, 20, 1);
  drawText("JEWEL+PYTHIA pp 2.76 TeV",0.55, 0.8, 20);
  ccomp_lambda_new_2->cd(2);
  drawText("TD3 - Soft Subjet", 0.1, 0.2, 20, 1);
  drawText("#gamma+Jet Events, anti-k_{t} R=0.4 Jets",0.3, 0.75, 20);
  drawText("p^{#gamma}_{T} > 100 GeV/c, p^{Jet}_{T} > 50 GeV/c",0.3, 0.65, 20);
  drawText("#Delta#phi > 2#pi/3, |#eta^{#gamma,Jet}| < 1.5",0.5, 0.55, 20);
  drawText("GridJets (#Delta#eta,#Delta#phi = 0.08)", 0.5, 0.45, 20);  
  ccomp_lambda_new_2->cd(3);
  drawText("TD2 - Hard Subjet", 0.25, 0.25, 20, 1);
  ccomp_lambda_new_2->cd(4);
  drawText("TD2 - Soft Subjet", 0.1, 0.25, 20, 1);
  ccomp_lambda_new_2->SaveAs(Form("%s/Comp_lambda_new_2.pdf", plotoutLoc.c_str()), "RECREATE");
  

  TCanvas * cComp_delta_m2 = new TCanvas("cComp_delta_m2","",1400, 700);
  makeMultiPanelCanvas(cComp_delta_m2, 2, 1, 0.2, 0.2, 0.2, 0.2, 0.08);
  TH1D * hDummy_delta_m2 = new TH1D("hDummy_delta_m2","", 30, 0, 30);
  makeHistTitle(hDummy_delta_m2, "","#deltam^{2} = m^{2}_{jet} - m^{2}_{g-jet}", "1/N dN/d#deltam^{2}");
  hDummy_delta_m2->SetAxisRange(5e-3, 0.5, "Y");
  hDummy_delta_m2->SetAxisRange(0.0, 30, "X");
  cComp_delta_m2->cd(2);
  cComp_delta_m2->cd(2)->SetLogy();
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_delta_m2->Draw();
  hPbPb_Gluon_delta_m2_5R->SetLineStyle(1);
  hPbPb_Gluon_delta_m2_5R->SetLineWidth(2);
  hPbPb_Gluon_delta_m2_5R->SetLineColor(kRed);
  //if(dorebin)
  hPbPb_Gluon_delta_m2_5R->Rebin(5);
  hPbPb_Gluon_delta_m2_5R->Scale(1./hPbPb_Gluon_delta_m2_5R->Integral());
  divideBinWidth(hPbPb_Gluon_delta_m2_5R);
  hPbPb_Gluon_delta_m2_5R->Draw("hist same c");
  hPbPb_Quark_delta_m2_5R->SetLineStyle(1);
  hPbPb_Quark_delta_m2_5R->SetLineWidth(2);
  hPbPb_Quark_delta_m2_5R->SetLineColor(kBlue);
  //if(dorebin)
  hPbPb_Quark_delta_m2_5R->Rebin(5);
  hPbPb_Quark_delta_m2_5R->Scale(1./hPbPb_Quark_delta_m2_5R->Integral());
  divideBinWidth(hPbPb_Quark_delta_m2_5R);
  hPbPb_Quark_delta_m2_5R->Draw("hist same c");  
  drawText("PbPb",0.5, 0.85, 20);  
  drawText("JEWEL+PYTHIA 2.76 TeV",0.25, 0.95, 25);
  drawText("#gamma+Jet Events, anti-k_{t} R=0.4 Jets",0.3, 0.8, 20);
  drawText("p^{#gamma}_{T} > 100 GeV/c, p^{Jet}_{T} > 50 GeV/c",0.3, 0.75, 20);
  drawText("#Delta#phi > 2#pi/3, |#eta^{#gamma,Jet}| < 1.5",0.3, 0.7, 20);
  drawText("w/ Recoils Grid-Sub (#Delta#eta,#Delta#phi = 0.08)", 0.3, 0.65, 20);  
  cComp_delta_m2->cd(1);
  cComp_delta_m2->cd(1)->SetLogy();
  // gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  hDummy_delta_m2->Draw();
  hpp_Gluon_delta_m2_5R->SetLineStyle(1);
  hpp_Gluon_delta_m2_5R->SetLineWidth(2);
  hpp_Gluon_delta_m2_5R->SetLineColor(kRed);
  //if(dorebin)
  hpp_Gluon_delta_m2_5R->Rebin(5);
  hpp_Gluon_delta_m2_5R->Scale(1./hpp_Gluon_delta_m2_5R->Integral());
  divideBinWidth(hpp_Gluon_delta_m2_5R);
  hpp_Gluon_delta_m2_5R->Draw("hist same c");
  hpp_Quark_delta_m2_5R->SetLineStyle(1);
  hpp_Quark_delta_m2_5R->SetLineWidth(2);
  hpp_Quark_delta_m2_5R->SetLineColor(kBlue);
  //if(dorebin)
  hpp_Quark_delta_m2_5R->Rebin(5);
  hpp_Quark_delta_m2_5R->Scale(1./hpp_Quark_delta_m2_5R->Integral());
  divideBinWidth(hpp_Quark_delta_m2_5R);
  hpp_Quark_delta_m2_5R->Draw("hist same c");  
  drawText("Gluon Jets",0.25, 0.85, 20, 2);
  drawText("Quark Jets",0.25, 0.8, 20, 4);
  drawText("pp",0.5, 0.85, 20);  
  //drawText("Particle Jet", 0.5, 0.8, 20);  
  drawText("GridJets (#Delta#eta,#Delta#phi = 0.08)", 0.5, 0.8, 20);  
  drawText("z_{cut} = 0.1, #beta = 0", 0.5, 0.75, 20, 1);
  cComp_delta_m2->SaveAs(Form("%s/Comp_delta_m2.pdf", plotoutLoc.c_str()), "RECREATE");



  
}

