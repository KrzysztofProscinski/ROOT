{
// definiowanie histogramow
   TH1F *hist1 = new TH1F("h1","Histogram 1",100,0.,10.);
   TH1F *hist2 = new TH1F("h2","Histogram 2",100,0.,10.);

// wypelnianie histogramu
   TRandom3 r;
   r.SetSeed();
   for(Int_t i=0; i<1000; i++){
	hist1->Fill(r.Gaus(3.3,0.5));
	hist2->Fill(r.Gaus(6.7,0.5));
   }

   hist1->SetLineColor(2); // kolor linii histogramu 1 bedzie czerwony
   hist2->SetLineColor(4); // kolor linii histogramu 2 bedzie niebieski

   hist2->SetLineStyle(2); // histogram 2 bedzie rysowany przerywana linia

// rysowanie histogramow
   hist1->Draw();
   hist2->Draw("same");

// legenda
   TLegend* legenda = new TLegend(0.1,0.6,0.48,0.9,"nbNDC"); // definicja
   legenda->SetHeader("Tytul legendy"); // tytul
   legenda->AddEntry(hist1,"Histogram lewy"); // podpis histogramu 1
   legenda->AddEntry(hist2,"Histogram prawy","l"); // podpis histogramu 2
   legenda->Draw(); // rysowanie

// text LaTeX
   TLatex l; // definicja
   l.SetTextSize(0.1); // rozmiar
   l.SetTextAngle(0.); // kat
   l.SetTextColor(1); // kolor
   l.DrawLatex(0.5,0.6,"P(x)=#frac{1}{#sigma#sqrt{2#pi}}exp#left(-#frac{(x-#mu)^{2}}{2 #sigma^{2}}#right)"); // polozenie i tresc tekstu

}
