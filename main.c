#include "Fauza.h"
#include "naufal.h"
#include "Hasby.h"
#include "aulianf.h"
#include "aryagara2.h"


int main() {
//	int operan1, operan2;
//	float operan3, operan4;
	int menu;
	char ulang;
//	int hasil1;
//	double operan, hasil2;
//	float hasil3;

	do {
		system ("cls");
		printf ("\nPilih menu :");
		printf ("\n\t1. Kalkulator");
		printf ("\n\t2. Fitur lainnya");
		
		do{
			printf ("\n\nPilih fitur yang akan dijalankan (berupa angka): ");
			scanf  ("%d", &menu);
	
			switch (menu){
				case 1 :	
					kalkulator();
					break;
					
				case 2 :	
					FiturLain();
					break;
		
				default :
					printf ("\nMenu yang anda pilih tidak ada, silahkan pilih antara 1 atau 2!\n");
			}
		} while (menu < 1 || menu > 2);
		
		printf ("\n\nApakah anda ingin kembali ke menu awal? (y/t)");
		ulang = getche ();
	} while (ulang == 'y' || ulang == 'Y');
	
	return 0;
}
