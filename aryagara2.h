#ifndef aryagara_H
#define aryagara_H
#include <stdio.h>
#include <stdbool.h>

/*
 * fungsi modul	: Menghitung coninus, nilai yang dihitung berupa radian
 * referensi	:
 * IS 			: variable suku diassign dengan angka 100
 * FS			: variable hasil akan direturn sebagai output setelah angka pada variable hasil dihitung
*/
double cosRad(double angka);

/*
 * fungsi modul	: Menghitung cosinus, nilai yang dihitung berupa derajat
 * referensi	: 
 * IS 			: variable suku diassign dengan angka 100
 * FS			: variable hasil akan direturn sebagai output setelah angka pada variable hasil dihitung
*/
double cosNilai(double angka);

/*
 * fungsi modul	: Menghitung secant, nilai yang dihitung berupa radian
 * referensi	:
 * IS 			: variable nilai diassign dengan hasil dari fungsi cosRad
 * FS			: variable rad direturn sebagai output
*/
double secRad(double angka); 

/*
 * fungsi modul	: Menghitung secant, nilai yang dihitung berupa derajat
 * referensi	:
 * IS 			: variable nilai diassign dengan hasil angka dari fungsi cosRad
 * FS			: variable derajat direturn sebagai output
*/
double secDerajat(double angka);

/*
 * fungsi modul	: Menghitung tangent, nilai yang dihitung berupa derajat
 * referensi	:
 * IS 			: variable rad diassign dengan hasil dari pembagian sinRad dan cosRad
 * FS			: variable rad direturn sebagai output
*/
double tanDerajat(double angka);

/*
 * fungsi modul	: Menghitung tangent, nilai yang dihitung berupa radian
 * referensi	:
 * IS 			: variable nilai diassign dengan hasil dari pembagian sinDerajat dan cosNilai
 * FS			: variable nilai direturn sebagai output
*/
double tanRad(double angka);

/*
 * fungsi modul	: Menghitung cotangent, nilai yang dihitung berupa radian
 * referensi	:
 * IS 			: variable nilai diassign dengan hasil angka dari fungsi tanRad
 * FS			: variable cot direturn sebagai output
*/
double cotRad(double angka);

/*
 * fungsi modul	: Menghitung cotangent, nilai yang dihitung berupa derajat
 * referensi	:
 * IS 			: variable nilai diassign dengan hasil angka dari fungsi tanDerajat
 * FS			: variable derajat 
*/
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

/*
 * fungsi modul	: mengecek nilai cosinus, tangent, dan secant dalam satuan radian
 * referensi	:
 * IS 			: 
 * FS			: 
*/
bool cekTidakTerdefinisiCosTanSecR(double angka);

/*
 * fungsi modul	: mengecek nilai cosinus dan tangent dalam satuan derajat
 * referensi	:
 * IS 			: pengecekan variable angka yang berisi sebuah nilai
 * FS			: mengembalikan nilai true atau false
*/
bool cekTidakTerdefinisiCosTanD(double angka);

/*
 * fungsi modul	: mengecek nilai cotangent dalam satuan radian
 * referensi	:
 * IS 			: pengecekan variable angka yang berisi sebuah nilai
 * FS			: mengembalikan nilai true atau false 
*/
bool cekTidakTerdefinisiCotR(double angka);

/*
 * fungsi modul	: mengecek nilai cotangent dalam satuan derajat
 * referensi	:
 * IS 			: pengecekan variable angka yang berisi sebuah nilai
 * FS			: mengembalikan nilai true atau false
*/
bool cekTidakTerdefinisiCotD(double angka);

/*
 * fungsi modul	: mengecek nilai csc dalam satuan radian
 * referensi	:
 * IS 			: pengecekan variable angka yang berisi sebuah nilai
 * FS			: mengembalikan nilai true atau false 
*/
bool cekTidakTerdefinisiCscR(double angka);

/*
 * fungsi modul	: mengecek nilai csc dalam satuan derajat
 * referensi	:
 * IS 			: pengecekan variable angka yang berisi sebuah nilai
 * FS			: mengembalikan nilai true atau false
*/
bool cekTidakTerdefinisiCscD(double angka);

#endif
