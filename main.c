#include "Fauza.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int operan1, operan2;
	int operasi;
	int hasil1;
	double hasil2;
	
	printf ("Masukkan operan pertama : ");
	scanf  ("%d", &operan1);
	
	printf ("\nOperasi yang tersedia :");
	printf ("\n\t1. Nilai Nutlak");
	printf ("\n\t2. Tambah");
	printf ("\n\t3. Eksponen");
	printf ("\n\t4. Logaritma");
	printf ("\n\t5. Logaritma Natural");
	printf ("\nPilih operasi yang akan dijalankan (berupa angka):");
	scanf  ("%d", &operasi);
	
	switch (operasi){
		case 1 :
			hasil1 = NilaiMutlak (operan1);
			printf ("\nHasilnya adalah : %d", hasil1);
			break;
			
		//case 2 :
		//	hasil1 = NilaiMutlak (operan1);
		//	printf ("\nHasilnya adalah : %d", hasil1);
	}
	
	return 0;
}
