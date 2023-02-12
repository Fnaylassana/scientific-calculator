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