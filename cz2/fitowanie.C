#include "TF1.h"
#include "TGraphErrors.h"
#include "TMath.h"
#include "TRint.h" 
#include "TCanvas.h"

using namespace std;

Double_t MyFunction(Double_t *arg, Double_t *par){
	Double_t f = par[0]+par[1]*arg[0]+par[2]*arg[0]*arg[0];
	return f;}

Bool_t fitowanie(void){

   TH1F *hist = new TH1F("h","Histogram",100,0.,20.);
   for(Int_t i=0; i<100; i++){
	hist->SetBinContent(i,i);
   }

   hist->Draw();

   TF1 *f1 = new TF1("funkcja",MyFunction,0,100,3);
   f1->SetParameters(0.,-2.,1.);
   TFitResultPtr results = hist->Fit(f1,"S");
   cout << "Chi2 = " << results->Chi2() << endl;

   return kTRUE;
}
