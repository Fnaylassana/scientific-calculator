<<<<<<< HEAD
#include "Hasby.h"
=======
#include "Hasby.H"
>>>>>>> 60deaf5eedef448c1358381eda4a54a05cef4b40

int Log(Angka1){
	int Hasil;

    Hasil = log10(Angka1);
   return Hasil;
}

float ConCelFahr(float celc){
	float fahr; 
	fahr = (9.0/5.0 * celc) + 32;
	return fahr;
}
 
 float ConCelKelv(float celc){
	float kelv;
	 
	kelv = celc + 273.15;
	return kelv;
}
float ConCelReam(float celc){
	float ream;
	 
	ream = celc * (4.0/5.0) ;
	return ream;
}

