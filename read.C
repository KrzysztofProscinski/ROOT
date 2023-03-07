{
/*	TFile *f1 = new TFile("out_X17_1.root");
	TH1F *hcp1 = (TH1F*)f1->Get("hsincos");
	TFile *f2 = new TFile("out_X17_2.root");
	TH1F *hcp2 = (TH1F*)f2->Get("hsincos");*/


	TFile *f = new TFile("file.root","recreate");
	TH1F *hist = new TH1F("h1","Title",200,-1.,1.);

//	hist->Add(hcp1,hcp2,1,1);	

	f->cd();
	hist->Write();
	f->Close();
}

