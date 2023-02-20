#include "Fauza.h"


int main() {
	int menu;
	char ulang;

	do {
		header();
		printf ("\n\t\t\t\t\t\tPilih menu :");
		printf ("\n\t\t\t\t\t\t\t1. Kalkulator");
		printf ("\n\t\t\t\t\t\t\t2. Fitur lainnya");
		
		do{
			printf ("\n\n\t\t\t\t\t\tPilih fitur yang akan dijalankan (berupa angka): ");
			scanf  ("%d", &menu);
	
			switch (menu){
				case 1 :	
					kalkulator();
					break;
					
				case 2 :	
					FiturLain();
					break;
		
				default :
					printf ("\n\t\t\t\t\t\tMenu yang anda pilih tidak ada, silahkan pilih antara 1 atau 2!\n");
			}
		} while (menu < 1 || menu > 2);
		
		printf ("\n\n\t\t\t\t\t\tApakah anda ingin kembali ke menu awal? (y/t)");
		ulang = getche ();
	} while (ulang == 'y' || ulang == 'Y');
	
	return 0;
}
