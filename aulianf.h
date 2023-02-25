#ifndef aulianf_h
#define aulianf_h
#include <stdio.h>
#include "math.h"
#define pi 3.14285714
#define max 10

/* 					AKAR				 */

// Menghitung akar
float akar(float bilangan1, float bilangan2);

/* 					PANGKAT				 */

// Menghitung bilangan berpangkat
float eksponen (float bilangan1, float bilangan2);

/* 					SIN				 */
// Menghitung sin dalam radian
float sinRad(float angka);

// Menghitung sin dalam derajat
float sinDerajat(float angka);

// Menghitung invers sin dalam radian
float sinInversRad(float angka);

// Menghitung invers sin dalam derajat
float sinInversDerajat(float angka);

/* 					COSEC				 */

// Menghitung cosec dalam radian
float cosecRad(float angka);

// Menghitung cosec dalam derajat
float cosecDerajat(float angka);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 					MATRIKS				 */

// Menampilkan matriks pertambahan dan pengurangan dengan tipe data float
void printMatriks(float matriks[max][max], int baris, int kolom);

// Input elemen pada matriks pertambahan dan pengurangan dengan tipe data float
void inputMatriks(float matriks[max][max], int baris, int kolom);

// Menampilkan matriks determinan dengan tipe data int
void printMatriksDet(int matriks[max][max], int baris, int kolom);

// Input elemen pada matriks determinan dengan tipe data int
void inputMatriksDet(int matriks[max][max], int baris, int kolom);

// Menghitung pertambahan Matriks
float hitungPertambahanMatriks(float hasil[max][max], float matriksA[max][max], float matriksB[max][max], int baris, int kolom);

// Menghitung pengurangan Matriks
float hitungPenguranganMatriks(float hasil[max][max], float matriksA[max][max], float matriksB[max][max], int baris, int kolom);

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
