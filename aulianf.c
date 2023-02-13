#include "aulianf.h"

int eksponen(int bilangan1, int bilangan2)
// Menghitung bilangan berpangkat
{
	int hasil; 							// Variabel untuk menampung hasil pangkat
	hasil = pow(bilangan1,bilangan2);     	// Menghitung pangkat dengan fungsi pow 
	return hasil;
}

double sinRad(double angka)
// Menghitung sin berupa radian
{
	double rad;
	rad = cos(angka); 
	return rad;
}

double sinDerajat(double angka)
// Menghitung sin berupa derajat
{
	double nilai, derajat;
	nilai = pi/180;
	derajat = sin(angka*nilai);
	return derajat;
}
