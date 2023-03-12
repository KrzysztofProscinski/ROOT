{
	
	// odczytywanie danych z pliku
/*	TFile *f1 = new TFile("out_X17_1.root"); // wprowadzenie istniejacego juz pliku "out_X17_1.root"
	TH1F *hcp1 = (TH1F*)f1->Get("hsincos"); // odczytanie z tego pliku histogramu "hsincos" 
	TFile *f2 = new TFile("out_X17_2.root"); // to samo, ale dla pliku "out_X17_2.root"
	TH1F *hcp2 = (TH1F*)f2->Get("hsincos"); // odczytanie analogicznego histogramu z drugiego pliku
*/

	TFile *f = new TFile("file.root","recreate"); // definicja wlasnego pliku o nazwie "file.root", ktory bedzie oznaczany w kodzie jako "f"
	TH1F *hist = new TH1F("h1","Title",200,-1.,1.); // definicja wlasnego pliku o histogramu "h1", ktory bedzie oznaczany w kodzie jako "hist"

	// przyklad uzycia odczytywania i zapisywanie plikow
	// histogram "h1" bedzie wypelniony przez sume histogramow z plikow "out_X17_1.root" i "out_X17_2.root"
//	hist->Add(hcp1,hcp2,1,1);	

	// zapisywanie histogramu do pliku
	f->cd(); // rzeczy zapisywane beda do pliku "file.root" (gdyz "f" oznacza wlasnie ten plik)
	hist->Write(); // zapisany zostanie histogram "h1" (gdyz "hist" oznacza wlasnie ten plik)
	f->Close(); // zamykanie pliku
}

