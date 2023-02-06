#include "aulianf.h"

int eksponen(int bilangan1, int bilangan2)
// Menghitung bilangan berpangkat
{
	int hasil; 							// Variabel untuk menampung hasil pangkat
	hasil = pow(bilangan1,bilangan2);     	// Menghitung pangkat dengan fungsi pow 
	return hasil;
}
