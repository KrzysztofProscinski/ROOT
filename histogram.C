{
	// definicja histogramu
	//h1 - nazwa w pliku .root,  Histogram - wyswietlana nazwa, 100 - liczba binow, 0 - wartosc poczatkowego binu, 10 - wartosc koncowego binu 
	TH1F *hist = new TH1F("h1","Histogram",100,0.,10.);

	// wypelnianie histogramu - metoda 1
/*	for(Int_t i=0; i<1000; i++) // petla po tysiacu zdarzen
		{hist->Fill(1);} // wszystkie zdarzenia wypelniaja bin o numerze 1
*/

	// wypelnianie histogramu - metoda 1, przyklad 2
/*	TRandom3 r; r.SetSeed(); // ziarno generatora liczb losowych
	for(Int_t i=0; i<1000; i++) // petla po tysiacu zdarzen
		{hist->Fill(r.Gaus(5.,1.));} // wszystkie zdarzenia wypelniaja histogram losowo, wedlug rozkladu Gaussa
*/

	// wypelnianie histogramu - metoda 2
/*	for(Int_t i=0; i<100; i++) // petla po stu binach
		{hist->SetBinContent(i,3);} // kazdemu binowi przypisana zostaje wartosc 3
*/

	hist->Draw(); // rysowanie histogramu

}
