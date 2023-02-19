#include "aryagara2.h"
#include "aulianf.c"
#include <stdio.h>

void Trigonometri()
{
	int pilih, lagi;
	float angka1;
	
	do{
		system ("cls");
		printf ("\nPilih Fitur :");
		printf ("\n\t1. Sinus");
		printf ("\n\t2. Invers Sinus");
		printf ("\n\t3. Cosecant");
		printf ("\n\t4. Cosinus");
		printf ("\n\t5. Invers Cosinus");
		printf ("\n\t6. Secant");
		printf ("\n\t7. Tangent");
		printf ("\n\t8. Invers Tangent");
		printf ("\n\t9. Cotangent");
	
		do{
			printf ("\n\nPilih fitur yang akan digunakan (berupa angka): ");
			scanf  ("%d", &pilih);
		
			switch (pilih){
				case 1 :
					Input1Float(&angka1);
					printf ("\nHasil dari sin(%.01f) adalah %.02f radian\n", angka1, sinRad(angka1));
					printf ("\nHasil dari sin(%.01f) adalah %.02f derajat\n", angka1, sinDerajat(angka1));
					break;
					
				case 2 :	
					Input1Float(&angka1);
					printf ("\nHasil dari invers sin(%.01f) adalah %.02f radian\n", angka1, sinInversRad(angka1));
					printf ("\nHasil dari invers sin(%.01f) adalah %.02f derajat\n", angka1, sinInversDerajat(angka1));
					break;

				case 3 :	
					Input1Float(&angka1);
					printf ("\nHasil dari csc(%.01f) adalah %.02f radian\n", angka1, cscRad(angka1));
					printf ("\nHasil dari csc(%.01f) adalah %.02f derajat\n", angka1, cscDerajat(angka1));
					break;

				case 4 :	
					Input1Float(&angka1);
					printf ("\nHasil dari cos(%.01f) adalah %.02f radian\n", angka1, cosRad(angka1));
					printf ("\nHasil dari cos(%.01f) adalah %.02f derajat\n", angka1, cosNilai(angka1));
					break;

				case 5 :	
					Input1Float(&angka1);
					printf ("\nHasil dari invers cos(%.01f) adalah %.02f radian\n", angka1, cosInvers(angka1));
					printf ("\nHasil dari invers cos(%.01f) adalah %.02f derajat\n", angka1, cosInversNilai(angka1));
					break;

				case 6 :	
					Input1Float(&angka1);
					printf ("\nHasil dari sec(%.01f) adalah %.02f radian\n", angka1, secRad(angka1));
					printf ("\nHasil dari sec(%.01f) adalah %.02f derajat\n", angka1, secDerajat(angka1));
					break;

				case 7 :	
					Input1Float(&angka1);
					printf ("\nHasil dari tan(%.01f) adalah %.02f radian\n", angka1, tanRad(angka1));
					printf ("\nHasil dari tan(%.01f) adalah %.02f derajat\n", angka1, tanDerajat(angka1));
					break;
					
				case 8 :	
					Input1Float(&angka1);
					printf ("\nHasil dari invers tan(%.01f) adalah %.02f radian\n", angka1, tanInvers(angka1));
					printf ("\nHasil dari invers tan(%.01f) adalah %.02f derajat\n", angka1, tanInversNilai(angka1));
					break;
					
				case 9 :	
					Input1Float(&angka1);
					printf ("\nHasil dari cot(%.01f) adalah %.02f radian\n", angka1, cotRad(angka1));
					printf ("\nHasil dari cot(%.01f) adalah %.02f derajat\n", angka1, cotDerajat(angka1));
					break;
		
				default :
					printf ("\nFitur yang anda pilih tidak ada, silahkan pilih ulang\n");
			}
		} while (pilih != 1 && pilih != 2);
		
	    printf ("\nApakah anda ingin menghitung logaritma kembali? (y/t)");
	    lagi = getche();
	}while (lagi == 'y' || lagi == 'Y');
}

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
