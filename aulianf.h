#ifndef aulianf_h
#define aulianf_h
#include <stdio.h>
#define pi 3.14159265
#define max 10

/**
 * Referensi	: https://stackoverflow.com/questions/19611198/finding-square-root-without-using-sqrt-function
 * Deskripsi 	: Fungsi ini bertujuan untuk Menghitung akar dari suatu bilangan
 * IS 			: Variable bilangan dan pangkat diisi dengan nilai
 * FS 			: Variable hasil akan direturn setelah akarnya
*/
double akar(double bilangan, double pangkat);


/*
 * Referensi	: https://techstudy.org/clanguage/write-c-program-to-calculate-power-using-while-for-loop 
 * Deskripsi 	: Fungsi ini bertujuan untuk Menghitung pangkat dari suatu bilangan
 * IS 			: Variable bilangan dan pangkat diisi dengan nilai
 * FS 			: Variable Hasil akan direturn setelah dihitung eksponennya.
*/
double eksponen(double bilangan, double pangkat);


/**
 * Referensi	: https://stackoverflow.com/questions/2284860/how-does-c-compute-sin-and-other-math-functions
 * Deskripsi 	: Fungsi ini bertujuan untuk Menghitung sin dalam satuan radian
 * IS 			: Variable bilangan diisi dengan nilai
 * FS 			: Variable Hasil akan direturn setelah dihitung sin nya dalam satuan/bentuk radian.
*/
double sinRad(double bilangan);


/**
 * Referensi	: https://stackoverflow.com/questions/2284860/how-does-c-compute-sin-and-other-math-functions
 * Deskripsi 	: Fungsi ini bertujuan untuk Menghitung sin dalam satuan derajat
 * IS 			: Variable bilangan diisi dengan nilai
 * FS 			: Variable Hasil akan direturn setelah dihitung sin nya dalam satuan/bentuk derajat.
*/
double sinDerajat(double bilangan);


/**
 * Referensi	: -
 * Deskripsi 	: Fungsi ini bertujuan untuk Menghitung cosec dalam satuan radian
 * IS 			: Variable bilangan diisi dengan nilai
 * FS 			: Variable Hasil akan direturn setelah dihitung cosec nya dalam satuan/bentuk radian.
*/
double cosecRad(double bilangan);


/**
 * Referensi	: -
 * Deskripsi 	: Fungsi ini bertujuan untuk Menghitung cosec dalam satuan derajat
 * IS 			: Variable bilangan diisi dengan nilai
 * FS 			: Variable Hasil akan direturn setelah dihitung cosec nya dalam satuan/bentuk derajat.
*/
double cosecDerajat(double bilangan);


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// * Deskripsi 	: Fungsi ini bertujuan untuk Menghitung sin invers dalam satuan radian
double sinInversRad(double angka);

//Deskripsi 	: Fungsi ini bertujuan untuk Menghitung sin dalam satuan derajat
double sinInversDerajat(double angka);

// Menampilkan matriks pertambahan dan pengurangan dengan tipe data double
void printMatriks(double matriks[max][max], int baris, int kolom);

// Input elemen pada matriks pertambahan dan pengurangan dengan tipe data double
void inputMatriks(double matriks[max][max], int baris, int kolom);

// Menampilkan matriks determinan dengan tipe data int
void printMatriksDet(int matriks[max][max], int baris, int kolom);

// Input elemen pada matriks determinan dengan tipe data int
void inputMatriksDet(int matriks[max][max], int baris, int kolom);

// Menghitung pertambahan Matriks
double hitungPertambahanMatriks(double hasil[max][max], double matriksA[max][max], double matriksB[max][max], int baris, int kolom);

// Menghitung pengurangan Matriks
double hitungPenguranganMatriks(double hasil[max][max], double matriksA[max][max], double matriksB[max][max], int baris, int kolom);

/* Referensi det matriks : stackoverflow */

// Menghitung determinan dengan kofaktor
int hitungKofaktor(int matriks[max][max], int temp[max][max], int p, int q, int ordo);

// Menghitung determinan matriks
int hitungDeterminan(int matriks[max][max], int ordo);

// Menampilkan determinan matriks
void determinanMatriks();

// Menampilkan pertambahan matriks
void pertambahanMatriks();
	
// Menampilkan pengurangan matriks
void penguranganMatriks();

#endif
