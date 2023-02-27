#include "aryagara2.h"
#include "aulianf.h"
#include "Fauza.h"
#include <stdio.h>
#include <stdlib.h>

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

void inversTrigonometri()
{
	int pilih, lagi, c;
	float angka1;
	
	do{
		header();
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==                                                     Invers Trigonometri                                                    ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  1. Invers Sinus                                                                                                           ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  2. Invers Cosinus                                                                                                         ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  3. Invers Tangent                                                                                                         ==");
		puts	("\t\t\t\t\t================================================================================================================================");

		do{
			printf ("\n\n\t\t\t\t\t\tPilih fitur yang akan digunakan (berupa angka): ");
			scanf  ("%d", &pilih);
			do {
			switch (pilih) {
				case 1 :
					Input1Float(&angka1);
					cekInversRad(angka1, sinInversRad(angka1), &c);
					cekInversDerajat(angka1, sinInversDerajat(angka1));
					break;
					
				case 2 :	
					Input1Float(&angka1);
					cekInversRad(angka1, cosInvers(angka1), &c);
					cekInversDerajat(angka1, cosInversNilai(angka1));
					break;

				case 3 :	
					Input1Float(&angka1);
					cekInversRad(angka1, tanInvers(angka1), &c);
					cekInversDerajat(angka1, tanInversNilai(angka1));
					break;

				default :
					printf ("\n\t\t\t\t\t\tFitur yang anda pilih tidak ada, silahkan pilih ulang\n");
				}
			} while (!c);
		} while (pilih != 1 && pilih != 2 && pilih != 3);
		
	    printf ("\n\t\t\t\t\t\tApakah anda ingin menghitung invers trigonometri kembali? (y/t)");
	    lagi = getchar();
	}while (lagi == 'y' || lagi == 'Y');
}

void cekInversRad(float angka, float p, int *cek)
{
	if (angka >= -1 && angka <= 1)
	{
		printf("\t\t\t\t\t\tNilai invers adalah %.02f radian\n", p);
		*cek = 1;		
	} else
	{
		printf("\t\t\t\t\t\tMasukkan angka di antara -1 dan 1!\n");
		*cek = 0;
	}
}

void cekInversDerajat(float angka, float p)
{
	if (angka >= -1 && angka <= 1) 
	{
	 	printf("\t\t\t\t\t\tNilai invers adalah %.02f derajat", p); 			
	}
}

void cekTidakTerdefinisiR(float angka, float p, int *cek)
{
	if (angka != 90 && angka != 270 && angka != 450)
	{
		printf("\t\t\t\t\t\tNilai dari angka yang di-input adalah %.02f radian\n", p);
		*cek = 1;
	} else
	{
		printf("\t\t\t\t\t\tNilai yang Anda input tidak terdefinisi!");
		*cek = 0;
	}
}

void cekTidakTerdefinisiD(float angka, float p)
{
	if (angka != 90 && angka != 270 && angka != 450)
	{
		printf("\t\t\t\t\t\tNilai dari angka yang di-input adalah adalah %.02f derajat", p);
	}
}

void cekTidakTerdefinisiCotR(float angka, float p, int *cek)
{
	if(angka != 0 && angka != 90 && angka != 180 && angka != 360 && angka != 540)
	{
		printf("\t\t\t\t\t\tNilai dari angka yang di-input adalah %.02f radian\n", p);
		*cek = 1;
	} else 
	{
		printf("\t\t\t\t\t\tNilai yang Anda input tidak terdefinisi!");
		*cek = 0;
	}
}

void cekTidakTerdefinisiCotD(float angka, float p)
{
	if(angka != 0 && angka != 90 && angka != 180 && angka != 360 && angka != 540)
	{
		printf("\t\t\t\t\t\tNilai dari cot(%.01f) adalah %.02f derajat", angka, p);
	}
}

void cekTidakTerdefinisiCscR(float angka, float p, int *cek)
{
	if(angka != 0 && angka != 180 && angka != 360 && angka != 540)
	{
		printf("\t\t\t\t\t\tNilai dari angka yang di-input adalah %.02f radian\n", p);
		*cek = 1;
	} else 
	{
		printf("\t\t\t\t\t\tNilai yang Anda input tidak terdefinisi!");
		*cek = 0;
	}
}

void cekTidakTerdefinisiCscD(float angka, float p)
{
	if(angka != 0 && angka != 180 && angka != 360 && angka != 540)
	{
		printf("\t\t\t\t\t\tNilai dari csc(%.01f) adalah %.02f derajat", angka, p);
	}
}

