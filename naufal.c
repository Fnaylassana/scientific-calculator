#include "naufal.h"

double pertambahan(double nilai1, double nilai2){
	double temp;
	
	temp = nilai1 + nilai2;
	
	return temp;
}

double pengurangan(double nilai1, double nilai2){
	double temp;
	
	temp = nilai1 - nilai2;
	
	return temp;
}

double perkalian(double nilai1, double nilai2){
	double temp, i;
	temp = 0;
	
	for (i = 1; i <= nilai2; i++) {
    temp += nilai1;
    }
	
	return temp;
}

double pembagian(double nilai1, double nilai2){
	double temp;
	
	temp = 0;
	while (nilai1 >= nilai2) {
    nilai1 -= nilai2;
    temp++;
    }
	
	return temp;
}

double faktorial(double angka){
	double temp, i;
	 
	temp = 1;
	
	for(i=1;i<=angka;i++){
	temp = perkalian(temp, i);
	}
	
	return temp;
}

int modulus(int nilai1, int nilai2){
	
    while (nilai1 >= nilai2) {
    nilai1 -= nilai2;
    }
    
	return nilai1;
}

double kombinasi(double nilai1, double nilai2){
	double hasil, i, x1=1, x2=1, x3=1;

	for(i=1;i<=nilai1;i++){
        x1 = perkalian(x1, i);
    }
    
	for(i=1;i<=nilai2;i++){
        x2 = perkalian(x2, i);
    }
    
	for(i=1;i<=nilai1-nilai2;i++){
        x3 = perkalian(x3, i);
	}
	hasil = pembagian(x1, (perkalian(x2, x3)));
	return hasil;
}

double permutasi(double nilai1, double nilai2){
	double hasil, i, x1=1, x2=1, x3=1;

	for(i=1;i<=nilai1;i++){
        x1 = perkalian(x1, i);
    }
    
    for(i=1;i<=nilai1-nilai2;i++){
        x2= perkalian(x2, i);
    }
    
    hasil= pembagian(x1, x2);
    
    return hasil;
}

void transposeMatriks (double matriks[max][max], double transpose[max][max], int baris, int kolom)
{
	int i, j;
	for (i = 0; i < baris; i ++){
    	for(j = 0; j < kolom; j++){
    		transpose[j][i] = matriks[i][j];
    	}
	}
}
