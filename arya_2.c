#include "aryagara2.h"
#include <stdio.h>

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

<<<<<<< HEAD
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
=======
float cosNilai(float angka)
>>>>>>> 83961c64ef7dab23093aa93cc8b308da4522d2a2
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
	derajat = ((acosf(angka)) * nilai );

	
	return derajat;
}
<<<<<<< HEAD
=======

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
>>>>>>> 83961c64ef7dab23093aa93cc8b308da4522d2a2
