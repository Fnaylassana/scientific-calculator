#include "aryagara2.h"
#include "aulianf.h"
#include "naufal.h"
#include "Fauza.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

double cosRad(double angka) {
	int suku; //variable yang digunakan untuk menghitung deret maclaurin/taylor dengan sebanyak 'suku' kali.
	suku = 100;
	double hasil = 1;
	double tanda = -1;
	int n;

	for(n = 1; n <= suku; n++) {
		double nilaiSuku = eksponen(angka, 2*n)/faktorial(2*n);
		hasil += tanda * nilaiSuku;
		tanda *= -1;
	}
	return hasil;
}

double cosNilai(double angka) {
	int suku; //variable yang digunakan untuk menghitung deret maclaurin/taylor dengan sebanyak 'suku' kali.
	suku = 100;
	double radian = angka * pi / 180;
	double hasil = 1;
	double tanda = -1;
	int n;

	for(n = 1; n <= suku; n++) {
		double nilaiSuku = eksponen(radian, 2*n)/faktorial(2*n);
		hasil += tanda * nilaiSuku;
		tanda *= -1;
	}
	return hasil;
}



//double cosInvers(double angka)
//{
//	double rad;
//	rad = acosf(angka);
//
//	return rad;
//}
//
//double cosInversNilai(double angka)
//{
//	double nilai, derajat;
//
//	nilai = 180/pi;
//	derajat = ((acosf(angka)) * nilai);
//
//	return derajat;
//}

double secRad(double angka) {
	double nilai, rad;

	nilai = cosRad(angka);
	rad = 1/nilai;

	return rad;
}

double secDerajat(double angka) {
	double nilai, derajat;

	nilai = cosNilai(angka);
	derajat = 1/nilai;

	return derajat;
}

double tanRad(double angka) {
	double rad;

	rad = sinRad(angka)/cosRad(angka);

	return rad;
}

double tanDerajat(double angka) {
	double nilai /*, derajat*/;

	nilai = sinDerajat(angka)/cosNilai(angka);

	return nilai;
}

//double tanInvers(double angka)
//{
//	double rad;
//
//	rad = atanf(angka);
//
//	return rad;
//}
//
//double tanInversNilai(double angka)
//{
//	double nilai, derajat;
//
//	nilai = 180/pi;
//	derajat = ((atanf(angka)) * nilai );
//
//	return derajat;
//}

double cotRad(double angka) {
	double nilai, cot;

	nilai = tanRad(angka);
	cot = 1/nilai;

	return cot;
}

double cotDerajat(double angka) {
	double nilai, derajat;

	nilai = tanDerajat(angka);
	derajat = 1/nilai;
	
	return derajat;
}

//void inversTrigonometri()
//{
//	int pilih, lagi, c;
//	double angka1;
//
//	do{
//		header();
//		puts	("\t\t\t\t\t================================================================================================================================");
//		puts	("\t\t\t\t\t==                                                     Invers Trigonometri                                                    ==");
//		puts	("\t\t\t\t\t================================================================================================================================");
//		puts	("\t\t\t\t\t==  1. Invers Sinus                                                                                                           ==");
//		puts	("\t\t\t\t\t================================================================================================================================");
//		puts	("\t\t\t\t\t==  2. Invers Cosinus                                                                                                         ==");
//		puts	("\t\t\t\t\t================================================================================================================================");
//		puts	("\t\t\t\t\t==  3. Invers Tangent                                                                                                         ==");
//		puts	("\t\t\t\t\t================================================================================================================================");
//
//		do{
//			printf ("\n\n\t\t\t\t\t\tPilih fitur yang akan digunakan (berupa angka): ");
//			scanf  ("%d", &pilih);
//			do {
//			switch (pilih) {
//				case 1 :
//					Input1Float(&angka1);
//					cekInversRad(angka1, sinInversRad(angka1), &c);
//					cekInversDerajat(angka1, sinInversDerajat(angka1));
//					break;
//
//				case 2 :
//					Input1Float(&angka1);
//					cekInversRad(angka1, cosInvers(angka1), &c);
//					cekInversDerajat(angka1, cosInversNilai(angka1));
//					break;
//
//				case 3 :
//					Input1Float(&angka1);
//					cekInversRad(angka1, tanInvers(angka1), &c);
//					cekInversDerajat(angka1, tanInversNilai(angka1));
//					break;
//
//				default :
//					printf ("\n\t\t\t\t\t\tFitur yang anda pilih tidak ada, silahkan pilih ulang\n");
//				}
//			} while (!c);
//		} while (pilih != 1 && pilih != 2 && pilih != 3);
//
//	    printf ("\n\t\t\t\t\t\tApakah anda ingin menghitung invers trigonometri kembali? (y/t)");
//	    lagi = getchar();
//	}while (lagi == 'y' || lagi == 'Y');
//}

//bool cekInversRad(double angka)
//{
//	if (angka >= -1 && angka <= 1)
//	{
//		return true;
//	} else
//	{
//		return false;
//	}
//}
//
//void cekInversDerajat(double angka)
//{
//	if (angka >= -1 && angka <= 1)
//	{
//	 	printf("\t\t\t\t\t\tNilai invers adalah %.02f derajat", p);
//	}
//}

bool cekTidakTerdefinisiCosTanSecR(double angka) {
	if (angka != 1.5*pi && angka != 0.5*pi) {
		return true;
	} else {
		return false;
	}
}

bool cekTidakTerdefinisiCosTanD(double angka) {
	if (angka != 90 && angka != 270 && angka != 450) {
		return true;
	} else
		return false;
}

bool cekTidakTerdefinisiCotR(double angka) {
	if(angka != 0 && angka != pi && angka != 2*pi) {
		return true;
	} else {
		return false;
	}
}

bool cekTidakTerdefinisiCotD(double angka) {
	if(angka != 0 && angka != 90 && angka != 180 && angka != 360 && angka != 540) {
		return true;
	} else {
		return false;
	}
}

bool cekTidakTerdefinisiCscR(double angka) {
	if(angka != 0 && angka != pi && angka != 2*pi) {
		return true;
	} else {
		return false;
	}
}

bool cekTidakTerdefinisiCscD(double angka) {
	if(angka != 0 && angka != 180 && angka != 360 && angka != 540) {
		return true;
	} else {
		return false;
	}
}

