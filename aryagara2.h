#ifndef aryagara_H
#define aryagara_H
#include <stdio.h>
#include <math.h>

//fungsi untuk menghitung logaritma natural
double hitungLog(double angka); //referensi dari programiz

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
double cosInvers(double angka); 

//Fungsi untuk menghitung invers cosinus, nilai yang dihitung berupa derajat
double cosInversNilai(double angka); //konversi radian ke derajat mendapat referensi dari tutorialspoint

//Fungsi untuk menghitung invers tangent, nilai yang dihitung berupa radian
double tanInvers(double angka); 

//Fungsi untuk menghitung invers tangent, nilai yang dihitung berupa derajat
double tanInversNilai(double angka);

//prosedur untuk menu tampilan invers trigonometri
void inversTrigonometri(); //referensi dari Hasby

//prosedur untuk mengecek nilai invers trigonometri dalam satuan radian
void cekInversRad(double angka, double p, int *cek);

//prosedur untuk mengecek nilai invers trigonometri dalam satuan derajat
void cekInversDerajat(double angka, double p);

//prosedur untuk mengecek nilai trigonometri dalam satuan radian
void cekTidakTerdefinisiR(double angka, double p, int *cek);

//prosedur untuk mengecek nilai trigonometri dalam satuan derajat
void cekTidakTerdefinisiD(double angka, double p);

//prosedur untuk mengecek nilai cotangent dalam satuan radian
void cekTidakTerdefinisiCotR(double angka, double p, int *cek);

//prosedur untuk mengecek nilai trigonometri dalam satuan derajat
void cekTidakTerdefinisiCotD(double angka, double p);

//prosedur untuk mengecek nilai csc dalam satuan radian
void cekTidakTerdefinisiCscR(double angka, double p, int *cek);

//prosedur untuk mengecek nilai csc dalam satuan derajat
void cekTidakTerdefinisiCscD(double angka, double p);

#endif
