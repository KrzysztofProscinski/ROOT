{
   char name[10], title[20];
   TObjArray Hlist(0);
   TH1F* h;

   TCanvas* canv = new TCanvas("canv","Histograms",200,200,800,800); // definicja canvasu
   canv->Divide(4,4); // podzial kanwasu na 16 czesci

   for (Int_t i = 0; i < 15; i++) { // petla do definiowania histogramow
      sprintf(name,"h%d",i); // lista z nazwami
      sprintf(title,"histo nr:%d",i); // lista z tytulami
      h = new TH1F(name,title,100,-4,4); // definicja histogramow z uzyciem list z nazwami i tytulami
      Hlist.Add(h); // dodawanie histogramow do listy
      h->FillRandom("gaus",1000);
   }

   TFile f("demo.root","recreate"); // plik do zapisywania  histogramow
   Hlist.Write(); // zapisywanie histogramow z listy
   f.Close();
   
for (Int_t i = 1; i < 16; i++) {  // rysowanie histogramow w canvasie
      canv->cd(i); // przejscie do odpowiedniej czesci canvasu
      Hlist[i]->Draw(); // rysowanie histogramu
      canv->Update(); // aktulalizacja canvasu
      }
   
}
