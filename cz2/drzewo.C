{
   Float_t energy, momentum; // definicja parametrow do uzycia w petli
   Int_t charge;
   TFile f ("tree.root","RECREATE"); // definicja pliku w ktorym drzewo bedzie zapisywane
   TTree* t = new TTree("tree","Tree 1"); // definicja drzewa
   t->Branch("E",&energy,"Energy/F"); // ustawienie galezi drzewa
   t->Branch("mom",&momentum,"Momentum/F");
   t->Branch("charge",&charge,"Charge/B");

   TRandom3 r;
   r.SetSeed();
   for(Int_t i=0; i<1000; i++){ // petla do wypelniania drzewa
	energy = r.Gaus(); // energia bedzie generowany losowo wg rozkladu Gaussa
	momentum = r.Gaus(); // ped bedzie generowany losowo wg rozkladu Gaussa
	charge = 1; // ladunek bedzie rowny 1
	t->Fill(); // wypelnianie drzewa
   }
   t->Write(); // zapisywanie drzewa
}
