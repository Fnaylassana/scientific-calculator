#ifndef Hasby_H
#define Hasby_H
#include "Fauza.h"
#include "naufal.h"
#include "aryagara2.h"
#include "aulianf.h"
#include <stdio.h>
#include <conio.h>

// Fungsi untuk menghitung Logaritma berbasis 10
// Referensi : https://www.utakatikotak.com/Rumus-Cara-Menghitung-Log-Dengan-Mudah-Beserta-Contohnya/kongkow/detail/15269
double Log(int Angka1); 

// Fungsi untuk menghitung Logaritma berbasis bebas yang menggunakan modul logaritma basis 10
// Referensi : https://www.utakatikotak.com/Rumus-Cara-Menghitung-Log-Dengan-Mudah-Beserta-Contohnya/kongkow/detail/15269
double Logaritma (double X,double Y);

// Fungsi untuk menghitung eurel atau banyaknya 0 dibelakang e
double Eurel (double nilai, double e);

// Fungsi untuk menghitung, mengakumulasikan atau menjumlahkan dari Tree yang sudah dibuat
double HitungTree(link pcur, int *cek);

// Fungsi untuk menghitung Sigma
double Sigmai(double en);

// Fungsi untuk menghitung Sigma Kuadrat
double Sigmaidua(double en);

// Fungsi untuk menghitung Sigma Kubik
double Sigmaitiga(double en);



// Fungsi untuk mengubah Celcius menjadi Fahrenheit
double ConCelFahr(double celc);

// Fungsi untuk mengubah Celcius menjadi Kelvin
double ConCelKelv(double celc);

// Fungsi untuk mengubah Celcius menjadi Reamur
double ConCelReam(double celc);

// Fungsi untuk mengubah Fahrenheit menjadi Celcius
double ConFahrCel(double fahr);

// Fungsi untuk mengubah Fahrenheit menjadi Kelvin
double ConFahrKelv(double fahr);

// Fungsi untuk mengubah Fahrenheit menjadi Reamur
double ConFahrReam(double fahr);

// Fungsi untuk mengubah Kelvin menjadi Celcius
double ConKelvCel(double fahr);

// Fungsi untuk mengubah Kelvin menjadi Fahrenheit
double ConKelvFahr(double fahr);

// Fungsi untuk mengubah Kelvin menjadi Reamur
double ConKelvReam(double fahr);

// Fungsi untuk mengubah Reamur menjadi Celcius
double ConReamCel(double ream);

// Fungsi untuk mengubah Reamur menjadi Fahrenheit
double ConReamFahr(double ream);

// Fungsi untuk mengubah Reamur menjadi Kelvin
double ConReamKelv(double ream);

// Fungsi untuk mengubah Meter menjadi 
double ConMkeCM (double met);

// Fungsi untuk mengubah Meter menjadi 
double ConMkeKM (double met);

// Fungsi untuk mengubah Meter menjadi 
double ConMkeMIL (double met);

// Fungsi untuk mengubah Meter menjadi 
double ConMkeMM (double met);

// Fungsi untuk mengubah Sentimeter menjadi 
double ConCMkeM (double cm);

// Fungsi untuk mengubah Sentimeter menjadi
double ConCMkeMM (double cm);

// Fungsi untuk mengubah Sentimeter menjadi
double ConCMkeKM (double cm);

// Fungsi untuk mengubah Sentimeter menjadi
double ConCMkeINC (double cm);

// Fungsi untuk mengubah Kilometer menjadi
double ConKMkeCM (double km);

// Fungsi untuk mengubah Kilometer menjadi
double ConKMkeM (double km);

// Fungsi untuk mengubah Kilometer menjadi
double ConKMkeMIL (double km);

// Fungsi untuk mengubah Kilometer menjadi
double ConKMkeMM (double km);

// Fungsi untuk mengubah Milimeter menjadi
double ConMMkeM (double mm);

// Fungsi untuk mengubah Milimeter menjadi
double ConMMkeCM (double mm);

// Fungsi untuk mengubah Milimeter menjadi
double ConMMkeKM (double mm);

// Fungsi untuk mengubah Milimeter menjadi
double ConMMkeINC (double mm);

// Procedure untuk menjalankan modul fungsi konversi
void KonversiPanjang ();

// Procedure untuk menghitung Turunan Palinom
void TurunanPolinom ();

// Fungsi untuk menghitung Turunan Palinom
void HitungTurunanPolinom (int a[100], int n);

#endif

