#ifndef Hasby_H
#define Hasby_H
#include "Fauza.h"
#include "naufal.h"
#include "aryagara2.h"
#include "aulianf.h"
#include <stdio.h>
#include <conio.h>


/**
 * Referensi	: https://www.utakatikotak.com/Rumus-Cara-Menghitung-Log-Dengan-Mudah-Beserta-Contohnya/kongkow/detail/15269
 * Deskripsi 	: Fungsi ini bertujuan untuk menghitung Logaritma berbasis 10
 * IS 			: Variable Angka diisi dengan nilai
 * FS 			: Variable Hasil akan direturn setelah dihitung Logaritma basis 10 nya.
*/
double Log(int Angka1); 


/**
 * Referensi	: https://www.utakatikotak.com/Rumus-Cara-Menghitung-Log-Dengan-Mudah-Beserta-Contohnya/kongkow/detail/15269
 * Deskripsi 	: Fungsi ini bertujuan untuk menghitung Logaritma bebas yang menggunakan modul fungsi logaritna berbasis 10
 * IS 			: Variable X dan Y diisi dengan nilai
 * FS 			: Variable Hasil akan direturn setelah dihitung Logaritmanya.
*/
double Logaritma (double X,double Y);


/**
 * Kontributor	: Aulia Azizah Fauziyah
 * Deskripsi 	: Fungsi ini bertujuan untuk menghitung Logaritma Natural dengan perhitungan Deret Taylor
 * IS 			: Variable X dan Y diisi dengan nilai
 * FS 			: Variable Hasil akan direturn setelah dihitung Logaritma Naturalnya.
*/
double LogNatural (double Angka);


/**
 * Deskripsi 	: Fungsi ini bertujuan untuk menghitung Eurel
 * IS 			: Variable nilai dan e diisi dengan nilai
 * FS 			: Variable hasil akan direturn setelah dihitung eurelnya.
*/
double Eurel (double nilai, double e);


/**
 * Referensi	: https://www.programmersought.com/article/95294413292/
 * Deskripsi 	: Fungsi ini bertujuan untuk menghitung, mengakumulasikan atau menjumlahkan dari Tree yang sudah dibuat
 * IS 			: Variable pointer yang memegang sebuah root dari tree yang sudah dibuat
 * FS 			: Variable hasil akan direturn setelah menghitung, mengakumulasikan atau menjumlahkan dari Tree yang sudah dibuat
*/
double HitungTree(link pcur, int *cek);


/**
 * Deskripsi 	: Fungsi ini bertujuan untuk menghitung Sigma
 * IS 			: Variable en diisi dengan nilai
 * FS 			: Variable sig akan direturn setelah dihitung sigmanya.
*/
double Sigmai(double en);

/**
 * Deskripsi 	: Fungsi ini bertujuan untuk menghitung Sigma Kuadrat
 * IS 			: Variable en diisi dengan nilai
 * FS 			: Variable sig akan direturn setelah dihitung sigma kuadratnya.*/
double Sigmaidua(double en);

/**
 * Deskripsi 	: Fungsi ini bertujuan untuk menghitung Sigma Kubik
 * IS 			: Variable en diisi dengan nilai
 * FS 			: Variable sig akan direturn setelah dihitung sigma kubiknya.*/
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

