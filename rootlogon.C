#include<iostream>

Bool_t rootlogon(void){

	R__LOAD_LIBRARY ($PLUTOLIBDIR/libPluto.so);

	return kTRUE;
}
