#include "aryagara2.h"
#include "aulianf.h"
#include "naufal.h"
#include "Fauza.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

double hitungLog(double angka)
{
	double hasil;
	
    //Menghitung angka yang diiinput sebagai logaritma Natural
    hasil = log(angka);
    
    return hasil;
}

double cosRad(double angka)
{
	int suku; //variable yang digunakan untuk menghitung deret maclaurin/taylor dengan sebanyak 'suku' kali.
  	suku = 34;
	double hasil = 1;
	double tanda = -1;
	int n;
	
	for(n = 1; n <= suku; n++)
	{
		double nilaiSuku = eksponen(angka, 2*n)/faktorial(2*n);
		hasil += tanda * nilaiSuku;
		tanda *= -1;
	}
	return hasil;
}

double cosNilai(double angka)
{
	int suku; //variable yang digunakan untuk menghitung deret maclaurin/taylor dengan sebanyak 'suku' kali.
  	suku = 10;
    double radian = angka * pi / 180;
	double hasil = 1;
	double tanda = -1;
	int n;
	
	for(n = 1; n <= suku; n++)
	{
		double nilaiSuku = eksponen(radian, 2*n)/faktorial(2*n);
		hasil += tanda * nilaiSuku;
		tanda *= -1;
	}
	return hasil;
}



double cosInvers(double angka)
{
	double rad;
	rad = acosf(angka);
	
	return rad;
}

double cosInversNilai(double angka)
{
	double nilai, derajat;

	nilai = 180/pi;
	derajat = ((acosf(angka)) * nilai);

	return derajat;
}

double secRad(double angka)
{
	double nilai, rad;
	
	nilai = cosRad(angka);
	rad = 1/nilai;
	
	return rad;
}

double secDerajat(double angka)
{
	double nilai, derajat;
	
	nilai = cosNilai(angka);
	derajat = 1/nilai;
	
	return derajat;
}

double tanRad(double angka)
{
	double rad;
	
	rad = sinRad(angka)/cosRad(angka);
	
	return rad;
}

double tanDerajat(double angka)
{
	double nilai /*, derajat*/;
	
	nilai = sinDerajat(angka)/cosNilai(angka);
//	derajat = tanf(angka * nilai);
	
	return nilai;
}

double tanInvers(double angka)
{
	double rad;
	
	rad = atanf(angka);
	
	return rad;
}

double tanInversNilai(double angka)
{
	double nilai, derajat;
	
	nilai = 180/pi;
	derajat = ((atanf(angka)) * nilai );

	return derajat;
}

double cotRad(double angka)
{
	double rad, cot;
	
	rad = tanf(angka);
	cot = 1/rad;
	
	return cot;
}

double cotDerajat(double angka)
{
	double nilai, derajat;
	
	nilai = pi/180;
	derajat = 1/(tanf(angka * nilai));
}

void inversTrigonometri()
{
	int pilih, lagi, c;
	double angka1;
	
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

void cekInversRad(double angka, double p, int *cek)
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

void cekInversDerajat(double angka, double p)
{
	if (angka >= -1 && angka <= 1) 
	{
	 	printf("\t\t\t\t\t\tNilai invers adalah %.02f derajat", p); 			
	}
}

void cekTidakTerdefinisiR(double angka, double p, int *cek)
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

void cekTidakTerdefinisiD(double angka, double p)
{
	if (angka != 90 && angka != 270 && angka != 450)
	{
		printf("\t\t\t\t\t\tNilai dari angka yang di-input adalah adalah %.02f derajat", p);
	}
}

void cekTidakTerdefinisiCotR(double angka, double p, int *cek)
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

void cekTidakTerdefinisiCotD(double angka, double p)
{
	if(angka != 0 && angka != 90 && angka != 180 && angka != 360 && angka != 540)
	{
		printf("\t\t\t\t\t\tNilai dari cot(%.01f) adalah %.02f derajat", angka, p);
	}
}

void cekTidakTerdefinisiCscR(double angka, double p, int *cek)
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

void cekTidakTerdefinisiCscD(double angka, double p)
{
	if(angka != 0 && angka != 180 && angka != 360 && angka != 540)
	{
		printf("\t\t\t\t\t\tNilai dari csc(%.01f) adalah %.02f derajat", angka, p);
	}
}

