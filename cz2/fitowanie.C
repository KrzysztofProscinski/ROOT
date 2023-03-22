#include "TF1.h"
#include "TGraphErrors.h"
#include "TMath.h"
#include "TRint.h" 
#include "TCanvas.h"

using namespace std;

// definicja funkcji
Double_t MyFunction(Double_t *arg, Double_t *par){
	Double_t f = par[0]+par[1]*arg[0]+par[2]*arg[0]*arg[0]; // funkcja bedzia miala postac a_0 + a_1 * x + a_2 * x^2, gdzie x - zmienna, a - parametry
	return f;}

// glowna czesc makra
Bool_t fitowanie(void){

// histogram, do ktorego bedzie fitowana funkcja
   TH1F *hist = new TH1F("h","Histogram",100,0.,20.);
   for(Int_t i=0; i<100; i++){
	hist->SetBinContent(i,i);
   }

   hist->Draw();

// funkcja, ktora bedzie fitowana
   TF1 *f1 = new TF1("funkcja",MyFunction,0,100,3); // postac funkcji
   f1->SetParameters(0.,-2.,1.); // parametry poczatkowe
   TFitResultPtr results = hist->Fit(f1,"S"); // fitowanie
   cout << "Chi2 = " << results->Chi2() << endl; // wypisanie wartosci chi^2 z fitu

   return kTRUE;
}
