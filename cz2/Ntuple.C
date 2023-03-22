{
   Float_t energy, momentum, charge; // definicja parametrow, ktore beda uzywane w petli
   TFile f ("ntuple.root","RECREATE"); // definicja pliku do ktorego beda zapisane rzeczy
   
   TNtuple Nt ("ntuple","N tuple 1","Energy:Momentum:Charge"); // definicja Ntupli, w ktorej beda wartosci energi, pedu i ladunku
   TRandom3 r;
   r.SetSeed();
   for(Int_t i=0; i<1000; i++){ // petla do wypelniania Ntupli
	energy = r.Gaus(); // energia bedzie generowany losowo wg rozkladu Gaussa
	momentum = r.Gaus(); // ped bedzie generowany losowo wg rozkladu Gaussa
	charge=1; // ladunek bedzie zawsze rowny 1
	Nt.Fill(energy,momentum,charge); // wypelnianie Ntupli
   }
   
   Nt.Write(); // zapis Ntupli
}
