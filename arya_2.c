#include "aryagara2.h"
#include <stdio.h>

double hitungLog(double angka)
{
	double hasil;
	
    //Menghitung angka yang diiinput sebagai logaritma Natural
    hasil = log(angka);
    
    return hasil;
}

double cosRad(double angka)
{
	double rad;
	
	//Menghitung angka yang diinput sebagai Cosinus, hasilnya akan menjadi radian
	rad = cos(angka);
	
	return rad;
}

double cosNilai(double angka)
{
	double nilai, derajat;
	nilai = pi/180;
	derajat = cos(angka*nilai);
	
	return derajat;
}

double cosInvers(double angka)
{
	double rad;
	rad = acos(angka);
	
	return rad;
}

double cosInversNilai(double angka)
{
	float nilai, derajat;
//	nilai = pi/180;
//	derajat = acos(angka*nilai);
	nilai = 180/pi;
	derajat = ((acos(angka)) * nilai );

	
	return derajat;
}