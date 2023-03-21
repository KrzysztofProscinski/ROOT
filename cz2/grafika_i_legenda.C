{
   TH1F *hist1 = new TH1F("h1","Histogram 1",100,0.,10.);
   TH1F *hist2 = new TH1F("h2","Histogram 2",100,0.,10.);

   TRandom3 r;
   r.SetSeed();
   for(Int_t i=0; i<1000; i++){
	hist1->Fill(r.Gaus(3.3,0.5));
	hist2->Fill(r.Gaus(6.7,0.5));
   }

   hist1->SetLineColor(2);
   hist2->SetLineColor(4);

   hist2->SetLineStyle(2);

//	TLegend* leg = new TLegend (0.6, 0.6, 0.98, 0.9,"nbNDC");

   hist1->Draw();
   hist2->Draw("same");

   TLegend* legenda = new TLegend(0.1,0.6,0.48,0.9,"nbNDC");
   legenda->SetHeader("Tytul legendy");
   legenda->AddEntry(hist1,"Histogram lewy");
   legenda->AddEntry(hist2,"Histogram prawy","l");
   legenda->Draw();

   TLatex l;
   l.SetTextSize(0.1);
   l.SetTextAngle(0.);
   l.SetTextColor(1);
   l.DrawLatex(0.5,0.6,"P(x)=#frac{1}{#sigma#sqrt{2#pi}}exp#left(-#frac{(x-#mu)^{2}}{2 #sigma^{2}}#right)");

}
