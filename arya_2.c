#include "aryagara2.h"
#include <stdio.h>

void cekInversRad(float angka, float p)
{
	if (angka >= -1 && angka <= 1)
	{
	 	printf("Nilai invers adalah %.02f radian\n", p);			
	} else
	{
		printf("Masukkan angka di antara -1 dan 1!\n");		
	}
}

void cekInversDerajat(float angka, float p)
{
	if (angka >= -1 && angka <= 1) 
	{
	 	printf("Nilai invers adalah %.02f derajat", p); 			
	}
}

void cekTidakTerdefinisiR(float angka, float p)
{
	if (angka != 90 && angka != 270 && angka != 450)
	{
		printf("Nilai dari angka yang di-input adalah %.02f radian\n", p);
	} else
	{
		printf("Nilai yang Anda input tidak terdefinisi!");
	}
}

void cekTidakTerdefinisiD(float angka, float p)
{
	if (angka != 90 && angka != 270 && angka != 450)
	{
		printf("Nilai dari angka yang di-input adalah adalah %.02f derajat", p);
	}
}

void cekTidakTerdefinisiCotR(float angka, float p)
{
	if(angka != 0 && angka != 90 && angka != 180 && angka != 360 && angka != 540)
	{
		printf("Nilai dari angka yang di-input adalah %.02f radian\n", p);
	} else 
	{
		printf("Nilai yang Anda input tidak terdefinisi!");
	}
}

void cekTidakTerdefinisiCotD(float angka, float p)
{
	if(angka != 0 && angka != 90 && angka != 180 && angka != 360 && angka != 540)
	{
		printf("Nilai dari cot(%.01f) adalah %.02f derajat", angka, p);
	}
}

float hitungLog(float angka)
{
	float hasil;
	
    //Menghitung angka yang diiinput sebagai logaritma Natural
    hasil = log(angka);
    
    return hasil;
}

float cosRad(float angka)
{
	float rad;
	
	//Menghitung angka yang diinput sebagai Cosinus, hasilnya akan menjadi radian
	rad = cosf(angka);
	
	return rad;
}

float cosNilai(float angka)
{
	float nilai, derajat;
	
	nilai = pi/180;
	derajat = cosf(angka * nilai);
	
	return derajat;
}

float cosInvers(float angka)
{
	float rad;
	rad = acosf(angka);
	
	return rad;
}

float cosInversNilai(float angka)
{
	float nilai, derajat;

	nilai = 180/pi;
	derajat = ((acosf(angka)) * nilai);

	return derajat;
}

float secRad(float angka)
{
	float rad, sec;
	
	rad = cosf(angka);
	sec = 1/rad;
	
	return sec;
}


float secDerajat(float angka)
{
	float nilai, derajat;
	
	nilai = pi/180;
	derajat = 1/(cosf(angka * nilai));
	
	return derajat;
}

float tanRad(float angka)
{
	float rad;
	
	rad = tanf(angka);
	
	return rad;
}

float tanDerajat(float angka)
{
	float nilai, derajat;
	
	nilai = pi/180;
	derajat = tanf(angka * nilai);
}

float tanInvers(float angka)
{
	float rad;
	
	rad = atanf(angka);
	
	return rad;
}

float tanInversNilai(float angka)
{
	float nilai, derajat;
	
	nilai = 180/pi;
	derajat = ((atanf(angka)) * nilai );

	return derajat;
}

float cotRad(float angka)
{
	float rad, cot;
	
	rad = tanf(angka);
	cot = 1/rad;
	
	return cot;
}

float cotDerajat(float angka)
{
	float nilai, derajat;
	
	nilai = pi/180;
	derajat = 1/(tanf(angka * nilai));
}

