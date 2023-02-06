#include "aryagara2.h"
#include <stdio.h>

double hitungLog(double angka)
{
	double hasil;
    //Menghitung angka yang diiinput sebagai logaritma Natural
    hasil = log(angka);
    
	//mencetak hasil
    printf("\nHasil logaritma natural dari adalah %lf\n", hasil);
    
    return hasil;
}
