#include <stdio.h>
#ifndef naufal_H
#define naufal_H
#include <math.h>
#define max 10

double pertambahan(double nilai1, double nilai2);
double pengurangan(double nilai1, double nilai2);
double perkalian(double nilai1, double nilai2);
double pembagian(double nilai1, double nilai2);
double faktorial(double angka);
int modulus(int nilai1, int nilai2);
double kombinasi(double nilai1, double nilai2);
double permutasi(double nilai1, double nilai2);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void transposeMatriks (double matriks[max][max], double transpose[max][max], int baris, int kolom);

#endif
