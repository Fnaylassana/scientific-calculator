#include "Fauza.h"
#include "naufal.h"
#include "Hasby.h"
#include "aulianf.h"
#include "aryagara2.h"


int main(int argc, char *argv[]) {
	int operan1, operan2;
	int operasi;
	int hasil1;
	float has1, op1, op2;
	double operan, hasil2;

	
	printf ("\nOperasi yang tersedia :");
	printf ("\n\t1. Nilai Nutlak");
	printf ("\n\t2. Tambah");
	printf ("\n\t3. Pangkat");
	printf ("\n\t4. Logaritma 10");
	printf ("\n\t5. Logaritma Natural");
	printf ("\n\t6. Kurang");
	printf ("\n\t7. Perkalian");
	printf ("\n\t8. Pembagian");
	
	printf ("\n\nPilih operasi yang akan dijalankan (berupa angka): ");
	scanf  ("%d", &operasi);

	switch (operasi){
		case 1 :	
			printf ("\nMasukkan operan pertama : ");
			scanf  ("%d", &operan1);
			hasil1 = NilaiMutlak (operan1);
			printf ("\nHasilnya adalah : %d", hasil1);
			break;
			
		case 2 :	
			printf ("\nMasukkan operan pertama : ");
			scanf  ("%d", &operan1);
			printf ("\nMasukkan operan kedua : ");
			scanf  ("%d", &operan2);
			hasil1 = pertambahan(operan1, operan2);
			printf ("\nHasilnya adalah : %d", hasil1);
			break;
			
		case 3 :	
			printf ("\nMasukkan operan pertama : ");
			scanf  ("%d", &operan1);
			printf ("\nMasukkan operan kedua : ");
			scanf  ("%d", &operan2);
			hasil1 = eksponen(operan1, operan2);
			printf ("\nHasilnya adalah : %d", hasil1);
			break;
		
		case 4 :	
			printf ("\nMasukkan operan pertama : ");
			scanf  ("%d", &operan1);
			hasil1 = log(operan1);
			printf ("\nHasilnya adalah : %d", hasil1);
			break;
			
		case 5 :	
			printf ("\nMasukkan operan pertama : ");
			scanf  ("%lf", &operan);
			hasil2 = hitungLog(operan);
			break;
			
		case 6 :	
			printf ("\nMasukkan operan pertama : ");
			scanf  ("%d", &operan1);
			printf ("\nMasukkan operan kedua : ");
			scanf  ("%d", &operan2);
			hasil1 = pengurangan(operan1, operan2);
			printf ("\nHasilnya adalah : %d", hasil1);
			break;			

		case 7 :	
			printf ("\nMasukkan operan pertama : ");
			scanf  ("%d", &operan1);
			printf ("\nMasukkan operan kedua : ");
			scanf  ("%d", &operan2);
			hasil1 = perkalian(operan1, operan2);
			printf ("\nHasilnya adalah : %d", hasil1);
			break;

		case 8 :	
			printf ("\nMasukkan operan pertama : ");
			scanf  ("%d", &op1);
			printf ("\nMasukkan operan kedua : ");
			scanf  ("%d", &op2);
			has1 = pembagian(op1, op2);
			printf ("\nHasilnya adalah : %f", has1);
			break;
	}
	
	return 0;
}
