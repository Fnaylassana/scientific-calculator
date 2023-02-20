#ifndef aryagara_H
#define aryagara_H
#include <stdio.h>
#include <math.h>

void Trigonometri();
void cekInversRad(float angka, float p, int *cek);
void cekInversDerajat(float angka, float p);
void cekTidakTerdefinisiR(float angka, float p);
void cekTidakTerdefinisiD(float angka, float p);
void cekTidakTerdefinisiCotR(float angka, float p);
void cekTidakTerdefinisiCotD(float angka, float p);
void cekTidakTerdefinisiCscR(float angka, float p);
void cekTidakTerdefinisiCscD(float angka, float p);
float hitungLog(float angka);
float cosRad(float angka);
float cosNilai(float angka);
float cosInvers(float angka);
float cosInversNilai(float angka);
float secRad(float angka);
float secDerajat(float angka);
float tanDerajat(float angka);
float tanRad(float angka);
float tanInvers(float angka);
float tanInversNilai(float angka);
float cotRad(float angka);
float cotDerajat(float angka);

#endif
