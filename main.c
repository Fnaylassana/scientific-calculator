#include "Fauza.h"


int main() {
	int menu;
	char ulang;

	do {
		header();
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==                                                        Menu                                                                ==");
		puts	("\t\t\t\t\t================================================================================================================================");	
		puts	("\t\t\t\t\t==  1. Kalkulator                                                                                                             ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  2. Aritmatika                                                                                                             ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		printf ("\n\n\t\t\t\t\t\tPilih fitur yang akan dijalankan (berupa angka): ");
		
		do{
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
		} while (menu != 1 || menu != 2);
		
		printf ("\n\n\t\t\t\t\t\tApakah anda ingin kembali ke menu awal? (y/t)");
		ulang = getche ();
	} while (ulang == 'y' || ulang == 'Y');
	
	return 0;
}
