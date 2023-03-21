{
   Float_t energy, momentum;
   Int_t charge;
   TFile f ("tree.root","RECREATE");
   TTree* t = new TTree("tree","Tree 1");
   t->Branch("E",&energy,"Energy/F");
   t->Branch("mom",&momentum,"Momentum/F");
   t->Branch("charge",&charge,"Charge/B");

   TRandom3 r;
   r.SetSeed();
   for(Int_t i=0; i<1000; i++){
	energy = r.Gaus();
	momentum = r.Gaus();
	charge = 1;
	t->Fill();
   }
   t->Write();
}
