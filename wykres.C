{
	
	// przyklad 1 - wypelnianie wykresu elementami tablic	
/*	Double_t a[] = {1.,2.,3.,4.,5.}; // definicja tablicy a
	Double_t b[]={0.,1.,0.,2.,3.}; // definicja tablicy b
	TGraph plot(5,a,b); // wypelnianie wykresu
	// 5 - liczba punktow na wykresie (powinna byc nie wieksza niz liczba elementow tablic), a - tablica z wartosciami z osi X, b - tablica z wartosciami z osi Y
*/

	// przyklad 2 - wypelnianie wykresu danymi z pliku "dane.dat"
//	TGraph plot("dane.dat");


	// rysowanie wykresu
	plot.Draw();
}
