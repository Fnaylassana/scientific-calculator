#include "aulianf.h"
#define pi 3.14

/* float eksponen(float bilangan1, float bilangan2)
// Menghitung bilangan berpangkat
{
	float hasil1;							
	hasil1 = pow(bilangan1,bilangan2);     	// Menghitung pangkat dengan fungsi pow 
	return hasil1;
} */

float eksponen (float bilangan1, float bilangan2)
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

float akar (float bilangan)
// Menghitung akar
{
	float hasil;
	while (bilangan < 0){
		printf("Hasil tidak terdefinisi, silahkan masukkan kembali bilangan");
		printf("\n\n2Masukkan bilangan : ");
		scanf("%f",&bilangan);
	}
	hasil = sqrt(bilangan);		// Menghitung akar dengan fungsi sqrt		
	return hasil;
}

float sinRad(float bilangan)
// Hasil sin berupa radian
{
	float rad;
	rad = sin(bilangan); 
	return rad;
}

float sinDerajat(float bilangan)
// Hasil sin berupa derajat
{
	float nilai, derajat;
	nilai = pi/180;
	derajat = sin(bilangan*nilai);
	return derajat;
}

float sinInversRad(float bilangan)
// Hasil Invers berupa derajat
{
	float rad;
	while (bilangan < -1 || bilangan > 1){
	printf("Silahkan masukkan kembali bilangan (-1 - 1)");
		printf("\n\n2Masukkan bilangan : ");
		scanf("%f",&bilangan);
	} 
	rad = asin(bilangan);
	return rad;
} 

float sinInversDerajat(float bilangan)
// Hasil Invers berupa derajat
{
	float nilai, derajat;
	while (bilangan < -1 || bilangan > 1){
	printf("Silahkan masukkan kembali bilangan (-1 - 1)");
		printf("\n\n2Masukkan bilangan : ");
		scanf("%f",&bilangan);
	} 
	nilai = 180/pi;
	derajat = ((asin(bilangan))*nilai);
	return derajat;
} 
