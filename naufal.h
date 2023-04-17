#include <stdio.h>
#ifndef naufal_H
#define naufal_H
#define max 10
//fungsi pertambahan
//referensi : Algoritma & pemrograman : Andri Kristanto
double pertambahan(double nilai1, double nilai2);

// fungsi pengurangan
//referensi : Algoritma & pemrograman : Andri Kristanto
double pengurangan(double nilai1, double nilai2);

//fungsi perkalian
//referensi : Algoritma & pemrograman : Andri Kristanto
double perkalian(double nilai1, double nilai2);

//fungsi pembagian
//referensi : Algoritma & pemrograman : Andri Kristanto
double pembagian(double nilai1, double nilai2);

//fungsi faktorial
//referensi : duniailkom.com
double faktorial(double angka);

//fungsi modulus
//referensi : geeksforgeeks.org
int modulus(int nilai1, int nilai2);

//fungsi kombinasi
//referensi : ngodingdirumah.home.blog/2019/04/30/membuat-program-permutasi-dan-kombinasi-dalam-bahasa-c/
double kombinasi(double nilai1, double nilai2);

//fungsi permutasi
//referensi : ngodingdirumah.home.blog/2019/04/30/membuat-program-permutasi-dan-kombinasi-dalam-bahasa-c/
double permutasi(double nilai1, double nilai2);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//prosedur transpose matriks
//referensi : Fauza Naylasana
void transposeMatriks (double matriks[max][max], double transpose[max][max], int baris, int kolom);

//prosedur help untuk pemanggilan tampilan pembantu
void help();
#endif
