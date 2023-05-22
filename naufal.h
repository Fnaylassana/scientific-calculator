#include <stdio.h>
#ifndef naufal_H
#define naufal_H
#define max 10

/**
 * fungsi pertambahan
 * referensi 	: Algoritma & pemrograman : Andri Kristanto
 * IS			: Belum tampil hasil nilai dari kedua operand yang akan dilakukan operasi pertamabahan
 * FS			: Sudah tampil hasil nilai dari kedua operand yang akan dilakukan operasi pertamabahan
 */
double pertambahan(double nilai1, double nilai2);

/**
 * fungsi pengurangan
 * referensi 	: Algoritma & pemrograman : Andri Kristanto
 * IS			: Belum tampil hasil nilai dari kedua operand yang akan dilakukan operasi pengurangan
 * FS			: Sudah tampil hasil nilai dari kedua operand yang akan dilakukan operasi pengurangan
 */
double pengurangan(double nilai1, double nilai2);

/**
 * fungsi perkalian
 * referensi 	: Algoritma & pemrograman : Andri Kristanto
 * IS			: Belum tampil hasil nilai dari kedua operand yang akan dilakukan operasi perkalian
 * FS			: Sudah tampil hasil nilai dari kedua operand yang akan dilakukan operasi perkalian
 */

double perkalian(double nilai1, double nilai2);

/**
 * fungsi pembagian
 * referensi 	: Algoritma & pemrograman : Andri Kristanto
 * IS			: Belum tampil hasil nilai dari kedua operand yang akan dilakukan operasi pembagian
 * FS			: Sudah tampil hasil nilai dari kedua operand yang akan dilakukan operasi pembagian
 */
double pembagian(double nilai1, double nilai2);

/**
 * fungsi faktorial
 * referensi 	: duniailkom.com
 * IS			: Belum tampil hasil nilai dari satu operand yang akan dilakukan operasi faktorial
 * FS			: Sudah tampil hasil nilai dari satu operand yang akan dilakukan operasi faktorial
 */
double faktorial(double angka);

/**
 * fungsi modulus
 * referensi 	: geejsforgeeks.org
 * IS			: Belum tampil hasil nilai dari kedua operand yang akan dilakukan operasi modulus
 * FS			: Sudah tampil hasil nilai dari kedua operand yang akan dilakukan operasi modulus
 */
int modulus(int nilai1, int nilai2);

/**
 * fungsi kombinasi
 * referensi 	: ngodingdirumah.home.blog/2019/04/30/membuat-program-permutasi-dan-kombinasi-dalam-bahasa-c/
 * IS			: Belum tampil hasil nilai dari kedua operand yang akan dilakukan opersi kombinasi
 * FS			: Sudah tampil hasil nilai dari kedua operand yang akan dilakukan opersi kombinasi
 */
double kombinasi(double nilai1, double nilai2);

/**
 * fungsi permutasi
 * referensi 	: ngodingdirumah.home.blog/2019/04/30/membuat-program-permutasi-dan-kombinasi-dalam-bahasa-c/
 * IS			: Belum tampil hasil nilai dari kedua operand yang akan dilakukan opersi permutasi
 * FS			: Sudah tampil hasil nilai dari kedua operand yang akan dilakukan opersi permutasi
 */
double permutasi(double nilai1, double nilai2);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * prosedur transpose matriks
 * kontributor  : Fauza Naylasana(010)
 * IS			: Belum tampil hasil nilai dari kedua operand yang akan dilakukan opersi transpose matriks
 * FS			: Sudah tampil hasil nilai dari kedua operand yang akan dilakukan opersi transpose matriks
 */
void transposeMatriks (double matriks[max][max], double transpose[max][max], int baris, int kolom);

/**
 * prosedur help untuk pemanggilan tampilan pembantu
 * IS			: Belum ditampilkan tampilan pembantu
 * FS			: Sudah ditampilkan tampilan pembantu
 */
void help();
#endif
