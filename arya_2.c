#include "aryagara2.h"
#include "aulianf.h"
#include "Fauza.h"
#include <stdio.h>

float hitungLog(float angka)
{
	float hasil;
	
    //Menghitung angka yang diiinput sebagai logaritma Natural
    hasil = log(angka);
    
    return hasil;
}

float cosNilai(float angka)
{
	float nilai, derajat;
	
	nilai = pi/180;
	derajat = cosf(angka * nilai);
	
	return derajat;
}

float tanDerajat(float angka)
{
	float nilai, derajat;
	
	nilai = pi/180;
	derajat = tanf(angka * nilai);
}

float secDerajat(float angka)
{
	float nilai, derajat;
	
	nilai = pi/180;
	derajat = 1/(cosf(angka * nilai));
	
	return derajat;
}

float cotDerajat(float angka)
{
	float nilai, derajat;
	
	nilai = pi/180;
	derajat = 1/(tanf(angka * nilai));
}


