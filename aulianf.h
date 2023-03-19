#ifndef aulianf_h
#define aulianf_h
#include <stdio.h>
#include "math.h"
#define pi 3.14159265
#define max 10

double akar(double bilangan, double pangkat);

double eksponen(double bilangan, double pangkat);

double sinRad(double bilangan);

double sinDerajat(double bilangan);

double cosecRad(double bilangan);

double cosecDerajat(double bilangan);

double sinInversRad(double angka);

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
