#include "Hasby.h"

int Log(float Angka1){
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

float ConFahrCel(float fahr){
	float celc; 
	celc = (5.0/9.0) * (fahr - 32);
	return celc;
}
 
float ConFahrKelv(float fahr){
	float kelv;
	kelv = (fahr - 32)* 5/9 + 273,15;
	return kelv;
}

float ConFahrReam(float fahr){
	float ream;
	ream = (fahr - 32)* 4/9 ;
	return ream;
}

float ConKelvCel(float kelv){
	float celc; 
	 celc = kelv - 273,15;
	return celc;
}
 
float ConKelvFahr(float kelv){
	float fahr;
	fahr = kelv * 9/5 - 459,67;
	return fahr;
}

float ConKelvReam(float kelv){
	float ream;
	ream = (kelv - 273) * 4/5;
	return ream;
}

float ConReamCel(float ream){
	float celc; 
	celc = (5.0/4.0) * ream;
	return celc;
}
 
float ConReamFahr(float ream){
	float fahr;
	fahr = ream * (9.0/4.0) + 32;
	return fahr;
}

float ConReamKelv(float ream){
	float kelv;
	kelv = 273.15 + (5.0/4.0) * ream;
	return kelv;
}

float Sigmai(float en){
	int i,sig = 0;
	for (i = 1; i <= en; i++) {
        sig = sig + i;
    }
    	return sig; // operasi sigma i
}

float Sigmaidua(float en){
	int i,sig = 0;
	for (i = 1; i <= en; i++) {
        sig += i*i; // operasi sigma i
    }
    return sig; // operasi sigma i kuadrat
}

float Sigmaitiga(float en){
	int i,sig = 0;
	for (i = 1; i <= en; i++) {
        sig += i*i*i; // operasi sigma i
    }
    return sig; // operasi sigma i kubik
}

float ConMkeCM (float met){
	float cm;
	cm = met * 100;
	return cm;
}

float ConMkeMM (float met){
	float mm;
	mm = met * 1000;
	return mm;
}

float ConMkeKM (float met){
	float km;
	km = met / 1000;
	return km;
}

float ConMkeMIL (float met){
	float mil;
	mil = met / 1609.344;
	return mil;
}