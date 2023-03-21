{
   char name[10], title[20];
   TObjArray Hlist(0);
   TH1F* h;

   TCanvas* canv = new TCanvas("canv","Histograms",200,200,800,800);
   canv->Divide(4,4);

   for (Int_t i = 0; i < 15; i++) {
      sprintf(name,"h%d",i);
      sprintf(title,"histo nr:%d",i);
      h = new TH1F(name,title,100,-4,4);
      Hlist.Add(h);
      h->FillRandom("gaus",1000);
   }

   TFile f("demo.root","recreate");
   Hlist.Write();
   f.Close();
   
for (Int_t i = 1; i < 16; i++) {  
      canv->cd(i);
      Hlist[i]->Draw();
      canv->Update();
      }
   
}
