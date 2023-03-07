{
	TH1F *hist = new TH1F("h1","Histogram",100,0.,10.);

/*	for(Int_t i=0; i<1000; i++)
		{hist->Fill(1);}
*/

/*	TRandom3 r;
	r.SetSeed();
	for(Int_t i=0; i<1000; i++)
		{hist->Fill(r.Gaus(5.,1.));}
*/


/*	for(Int_t i=0; i<100; i++)
		{hist->SetBinContent(i,3);}
*/

	hist->Draw();

}
