{
   Float_t energy, momentum, charge;
   TFile f ("ntuple.root","RECREATE");
   
   TNtuple Nt ("ntuple","N tuple 1","Energy:Momentum:Charge");
   TRandom3 r;
   r.SetSeed();
   for(Int_t i=0; i<1000; i++){
	energy = r.Gaus();
	momentum = r.Gaus();
	charge=1;
	Nt.Fill(energy,momentum,charge);
   }
   
   Nt.Write();
}
