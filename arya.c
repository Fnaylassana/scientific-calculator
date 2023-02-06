#include <stdio.h>
#include <math.h>
//#include "aryagara.h"


//void inputAngka()
//{
//	double angka, hasil;
//    //Memasukkan angka yang ingin dihitung
//    printf("Masukkan nilai logaritma natural: ");
//    scanf("%lf", &angka);
//    
//}

double hitungLog(double angka, double hasil)
{
    //Menghitung angka yang diiinput sebagai logaritma Natural
    angka = 1.5;
    hasil = log(angka);
    
    return hasil;
}

int main()
{
	//variable untuk menampung angka dan hasil akhir
	
	double angka1, hasil1, x;
	x = hitungLog(angka1, hasil1);
	//mencetak hasil
    printf("Hasil logaritma natural dari adalah %lf\n", hasil1);
	
//	inputAngka();
	
    return 0;
}
