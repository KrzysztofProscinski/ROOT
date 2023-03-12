#include <iostream>
using namespace std;

Int_t macro(){

	// komentarze (czyli fragmenty kodu, ktore sa ignorowane) mozna pisac na dwa sposoby

	// sposob 1 - podwojny ukosnik - komentowane jest wszystko na prawo od tych dwoch znakow, ale tylko w jednej linijce
	// aby odkomentowac fragment kodu nalezy usunac podwojny ukosnik

	/* sposob 2 - ukosnik gwiazdka - komentowane jest wszystko na prawo od tych dwoch znakow az do pary znakow gwiazdka-ukosnik
	taki komentarz moze zawierac wiecej niz jedna linijke
	aby odkomentowac fragment kodu nalezy usunac poczatkowe znaki ukosnik-gwiadka i koncowe znaki gwiazdka-ukosnik
	*/

	// przyklady wypisywania rzeczy w terminalu - "cout"
	cout<<"hello"<<endl; // napisanie "hello" w terminalu
	
	// inny przyklad
/*	Int_t t=0; // zdefiniowanie "t" jako liczby calkowitej rownej 0
	cout<<t<<endl; // wypisanie wartosci "t" w terminalu
*/

	// inny przyklad - uzycie petli 
/*	for(Int_t i=0; i<10; i++) // petla po wartosciach "i" od 0 do 9
	{
		cout<<i<<endl; // wypisanie wartosci "i"
	}
*/	

	// przyklady wpisywanie rzeczy z klawiatury - "cin"
/*	Int_t s; // zdefiniowanie "s" jako liczby calkowitej
	cin >> s; // wartosc "s" nalezy wpisac w terminalu uzywajac klawiatury
	cout<<s+1<<endl; // wypisanie wartosci "s+1" w terminalu (dla testu czy ta metoda dziala)
*/
	return 0;
}
