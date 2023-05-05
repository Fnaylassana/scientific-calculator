#ifndef aryagara_H
#define aryagara_H
#include <stdio.h>
#include <stdbool.h>


//Fungsi untuk menghitung cosinus, nilai yang dihitung berupa radian
double cosRad(double angka); //referensi dari programiz

//Fungsi untuk menghitung cosinus, nilai yang dihitung berupa derajat
double cosNilai(double angka); //referensi konversi radian ke derajat dari programiz

////Fungsi untuk menghitung secant, nilai yang dihitung berupa radian
double secRad(double angka); 

//Fungsi untuk menghitung secant, nilai yang dihitung berupa derajat
double secDerajat(double angka);

//Fungsi untuk menghitung tangent, nilai yang dihitung berupa derajat
double tanDerajat(double angka);

//Fungsi untuk menghitung tangent, nilai yang dihitung berupa radian
double tanRad(double angka);

//Fungsi untuk menghitung cotangent, nilai yang dihitung berupa radian
double cotRad(double angka);

//Fungsi untuk menghitung cotangent, nilai yang dihitung berupa derajat
double cotDerajat(double angka);

//Fungsi untuk menghitung invers cosinus, nilai yang dihitung berupa radian
//double cosInvers(double angka); 

//Fungsi untuk menghitung invers cosinus, nilai yang dihitung berupa derajat
//double cosInversNilai(double angka); //konversi radian ke derajat mendapat referensi dari tutorialspoint

//Fungsi untuk menghitung invers tangent, nilai yang dihitung berupa radian
//double tanInvers(double angka); 

//Fungsi untuk menghitung invers tangent, nilai yang dihitung berupa derajat
//double tanInversNilai(double angka);

//prosedur untuk menu tampilan invers trigonometri
//void inversTrigonometri(); //referensi dari Hasby

//prosedur untuk mengecek nilai invers trigonometri dalam satuan radian
//void cekInversRad(double angka, double p, int *cek);

//prosedur untuk mengecek nilai invers trigonometri dalam satuan derajat
//void cekInversDerajat(double angka, double p);

//prosedur untuk mengecek nilai cosinus, tangent, dan secant dalam satuan radian
bool cekTidakTerdefinisiCosTanSecR(double angka);

//prosedur untuk mengecek nilai cosinus dan tangent dalam satuan derajat
bool cekTidakTerdefinisiCosTanD(double angka);

//prosedur untuk mengecek nilai cotangent dalam satuan radian
bool cekTidakTerdefinisiCotR(double angka);

//prosedur untuk mengecek nilai cotangent dalam satuan derajat
bool cekTidakTerdefinisiCotD(double angka);

//prosedur untuk mengecek nilai csc dalam satuan radian
bool cekTidakTerdefinisiCscR(double angka);

//prosedur untuk mengecek nilai csc dalam satuan derajat
bool cekTidakTerdefinisiCscD(double angka);

#endif
