#include <stdio.h>
#ifndef naufal_H
#define naufal_H
#include <math.h>
#define max 10

float pertambahan(float nilai1, float nilai2);
float pengurangan(float nilai1, float nilai2);
float perkalian(float nilai1, float nilai2);
float pembagian(float nilai1, float nilai2);
float faktorial(float angka);
float modulus(int nilai1, int nilai2);
float kombinasi(float nilai1, float nilai2);
float permutasi(float nilai1, float nilai2);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void transposeMatriks (float matriks[max][max], float transpose[max][max], int baris, int kolom);

#endif
