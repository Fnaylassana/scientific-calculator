#ifndef aryagara_H
#define aryagara_H
#include <stdio.h>
#include <math.h>

double hitungLog(double angka); //referensi dari programiz
double cosRad(double angka); //referensi dari programiz
double cosNilai(double angka); //referensi konversi radian ke derajat dari programiz
double secRad(double angka); 
double secDerajat(double angka);
double tanDerajat(double angka);
double tanRad(double angka);
double cotRad(double angka);
double cotDerajat(double angka);

double cosInvers(double angka); 
double cosInversNilai(double angka); //konversi radian ke derajat mendapat referensi dari tutorialspoint
double tanInvers(double angka); 
double tanInversNilai(double angka);
void inversTrigonometri(); //referensi dari Hasby
void cekInversRad(double angka, double p, int *cek);
void cekInversDerajat(double angka, double p);
void cekTidakTerdefinisiR(double angka, double p, int *cek);
void cekTidakTerdefinisiD(double angka, double p);
void cekTidakTerdefinisiCotR(double angka, double p, int *cek);
void cekTidakTerdefinisiCotD(double angka, double p);
void cekTidakTerdefinisiCscR(double angka, double p, int *cek);
void cekTidakTerdefinisiCscD(double angka, double p);

#endif
