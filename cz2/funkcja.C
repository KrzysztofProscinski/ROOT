{
   TF1 f1 ("f1","x*x",0.,10.);
   f1.SetRange(-10.,10.);

   Float_t war, cal, min;

   cout<<"wartosc dla x=3:"<<endl;
   war=f1.Eval(3.);
   cout<<war<<endl;

   cout<<"calka od 0 do 5:"<<endl;
   cal=f1.Integral(0.,5.);
   cout<<cal<<endl;

   cout<<"minimum w przedziale od 0 do 5"<<endl;
   min=f1.GetMinimum(0.,5.);
   cout<<min<<endl;

   f1.SetLineColor(2);
   f1.SetLineStyle(9);
   f1.Draw();
}
