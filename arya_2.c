#include "aryagara2.h"
#include "aulianf.h"
#include "Fauza.h"
#include <stdio.h>

void Trigonometri()
{
	int pilih, lagi, ulang;
	float angka1;
	
	do{
		header();
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==                                                     Trigonometri                                                           ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  1. Sinus                                                                                                                  ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  2. Invers Sinus                                                                                                           ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  3. Cosecant                                                                                                               ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  4. Cosinus                                                                                                                ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  5. Invers Cosinus                                                                                                         ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  6. Secan                                                                                                                  ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  7. Tangent                                                                                                                ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  8. Invers Tangent                                                                                                         ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  9. Cotangent                                                                                                              ==");
		puts	("\t\t\t\t\t================================================================================================================================");
	
		do{
			printf ("\n\n\t\t\t\t\t\tPilih fitur yang akan digunakan (berupa angka): ");
			scanf  ("%d", &pilih);
		
			switch (pilih){
				case 1 :
					Input1Float(&angka1);
					printf ("\n\t\t\t\t\t\tHasil dari sin(%.01f) adalah %.02f radian\n", angka1, sinRad(angka1));
					printf ("\n\t\t\t\t\t\tHasil dari sin(%.01f) adalah %.g derajat\n", angka1, sinDerajat(angka1));
					break;
					
				case 2 :	
					Input1Float(&angka1);
					cekInversRad(angka1, sinInversRad(angka1), &ulang);
					cekInversDerajat(angka1, sinInversDerajat(angka1));
					break;

				case 3 :	
					Input1Float(&angka1);
					cekTidakTerdefinisiCscR(angka1, cosecRad(angka1));
					cekTidakTerdefinisiCscD(angka1, cosecDerajat(angka1));
					break;

				case 4 :	
					Input1Float(&angka1);
					printf ("\n\t\t\t\t\t\tHasil dari cos(%.01f) adalah %.02f radian\n", angka1, cosRad(angka1));
					printf ("\n\t\t\t\t\t\tHasil dari cos(%.01f) adalah %g derajat\n", angka1, cosNilai(angka1));
					break;

				case 5 :
					do {
						Input1Float(&angka1);
						cekInversRad(angka1, cosInvers(angka1), &ulang);
						cekInversDerajat(angka1, cosInversNilai(angka1));
					} while (!ulang);
					break;

				case 6 :
					Input1Float(&angka1);
					cekTidakTerdefinisiR(angka1, secRad(angka1));
					cekTidakTerdefinisiD(angka1, secDerajat(angka1));
					break;

				case 7 :	
					Input1Float(&angka1);
					cekTidakTerdefinisiR(angka1, tanRad(angka1));
					cekTidakTerdefinisiD(angka1, tanRad(angka1));
					break;
					
				case 8 :	
					Input1Float(&angka1);
					cekInversRad(angka1, tanInvers(angka1), &ulang);
					cekInversDerajat(angka1, tanInversNilai(angka1));
					break;
						
				case 9 :	
					Input1Float(&angka1);
					cekTidakTerdefinisiCotR(angka1, cotRad(angka1));
					cekTidakTerdefinisiCotD(angka1, cotDerajat(angka1));
					break;
		
				default :
					printf ("\n\t\t\t\t\t\tFitur yang anda pilih tidak ada, silahkan pilih ulang\n");
			}
		} while (pilih != 1 && pilih != 2);
		
	    printf ("\n\t\t\t\t\t\tApakah anda ingin menghitung logaritma kembali? (y/t)");
	    lagi = getche();
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

void cekTidakTerdefinisiR(float angka, float p)
{
	if (angka != 90 && angka != 270 && angka != 450)
	{
		printf("\t\t\t\t\t\tNilai dari angka yang di-input adalah %.02f radian\n", p);
	} else
	{
		printf("\t\t\t\t\t\tNilai yang Anda input tidak terdefinisi!");
	}
}

void cekTidakTerdefinisiD(float angka, float p)
{
	if (angka != 90 && angka != 270 && angka != 450)
	{
		printf("\t\t\t\t\t\tNilai dari angka yang di-input adalah adalah %.02f derajat", p);
	}
}

void cekTidakTerdefinisiCotR(float angka, float p)
{
	if(angka != 0 && angka != 90 && angka != 180 && angka != 360 && angka != 540)
	{
		printf("\t\t\t\t\t\tNilai dari angka yang di-input adalah %.02f radian\n", p);
	} else 
	{
		printf("\t\t\t\t\t\tNilai yang Anda input tidak terdefinisi!");
	}
}

void cekTidakTerdefinisiCotD(float angka, float p)
{
	if(angka != 0 && angka != 90 && angka != 180 && angka != 360 && angka != 540)
	{
		printf("\t\t\t\t\t\tNilai dari cot(%.01f) adalah %.02f derajat", angka, p);
	}
}

void cekTidakTerdefinisiCscR(float angka, float p)
{
	if(angka != 0 && angka != 180 && angka != 360 && angka != 540)
	{
		printf("\t\t\t\t\t\tNilai dari angka yang di-input adalah %.02f radian\n", p);
	} else 
	{
		printf("\t\t\t\t\t\tNilai yang Anda input tidak terdefinisi!");
	}
}

void cekTidakTerdefinisiCscD(float angka, float p)
{
	if(angka != 0 && angka != 180 && angka != 360 && angka != 540)
	{
		printf("\t\t\t\t\t\tNilai dari csc(%.01f) adalah %.02f derajat", angka, p);
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
