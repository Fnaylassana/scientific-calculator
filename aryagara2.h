#ifndef aryagara_H
#define aryagara_H
#include <stdio.h>
#include <math.h>

float hitungLog(float angka); //referensi dari programiz
float cosRad(float angka); //referensi dari programiz
double cosNilai(double angka); //referensi konversi radian ke derajat dari programiz
float secRad(float angka); 
float secDerajat(float angka);
float tanDerajat(float angka);
float tanRad(float angka);
float cotRad(float angka);
float cotDerajat(float angka);

float cosInvers(float angka); 
float cosInversNilai(float angka); //konversi radian ke derajat mendapat referensi dari tutorialspoint
float tanInvers(float angka); 
float tanInversNilai(float angka);
void inversTrigonometri(); //referensi dari Hasby
void cekInversRad(float angka, float p, int *cek);
void cekInversDerajat(float angka, float p);
void cekTidakTerdefinisiR(float angka, float p, int *cek);
void cekTidakTerdefinisiD(float angka, float p);
void cekTidakTerdefinisiCotR(float angka, float p, int *cek);
void cekTidakTerdefinisiCotD(float angka, float p);
void cekTidakTerdefinisiCscR(float angka, float p, int *cek);
void cekTidakTerdefinisiCscD(float angka, float p);

#endif
