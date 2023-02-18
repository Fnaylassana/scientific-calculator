#include "aulianf.h"
#define pi 3.14

float akar(float bilangan1, float bilangan2)
{
	float hasil;
	bilangan2 = 1/bilangan2;
	hasil = pow(bilangan1,bilangan2);		
	return hasil;
}

float eksponen(float bilangan1, float bilangan2)
{   
	float hasil;
	hasil = 1;
        
    if(bilangan2 > 0){
		while (bilangan2 != 0)
	    {
	        hasil = hasil * bilangan1;
	        bilangan2 = bilangan2 - 1;
	    } 
    } 
    
    if(bilangan2 < 0){
		while (bilangan2 != 0)
	    {
	        hasil = hasil * bilangan1;
	        bilangan2 = bilangan2 + 1;
	    } 
        hasil = 1/hasil;
    } 
    
    return hasil;
} 

float sinRad(float angka)
// Hasil sin berupa radian
{
	float rad;
	rad = sin(angka); 
	return rad;
}

float sinDerajat(float angka)
// Hasil sin berupa derajat
{
	float nilai, derajat;
	nilai = pi/180;
	derajat = sinf(angka*nilai);
	return derajat;
}

float sinInversRad(float angka)
// Hasil Invers berupa derajat
{
	float rad;
	rad = asinf(angka);
	return rad;
} 

float sinInversDerajat(float angka)
// Hasil Invers berupa derajat
{
	float nilai, derajat;
	nilai = 180/pi;
	derajat = ((asinf(angka))*nilai);
	return derajat;
} 
