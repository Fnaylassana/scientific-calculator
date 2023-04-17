#ifndef aulianf_h
#define aulianf_h
#include <stdio.h>
#define pi 3.14159265
#define max 10

//Menghitung akar dari suatu bilangan
double akar(double bilangan, double pangkat);

//Menghitung pangkat dari suatu bilangan
double eksponen(double bilangan, double pangkat);

//Menghitung sin dalam satuan radian
double sinRad(double bilangan);

//Menghitung sin dalam satuan derajat
double sinDerajat(double bilangan);

//Menghitung cosec dalam satuan radian
double cosecRad(double bilangan);

//Menghitung cosec dalam satuan derajat
double cosecDerajat(double bilangan);

//Menghitung sin invers dalam satuan radian
double sinInversRad(double angka);

//Menghitung sin dalam satuan derajat
double sinInversDerajat(double angka);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
