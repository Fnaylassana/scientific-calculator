#include "naufal.h"

float pertambahan(float nilai1, float nilai2){
	float temp;
	
	temp = nilai1 + nilai2;
	
	return temp;
}

float pengurangan(float nilai1, float nilai2){
	float temp;
	
	temp = nilai1 - nilai2;
	
	return temp;
}

float perkalian(float nilai1, float nilai2){
	float temp, i;
	temp = 0;
	
	for (i = 1; i <= nilai2; i++) {
    temp += nilai1;
    }
	
	return temp;
}

float pembagian(float nilai1, float nilai2){
	float temp;
	
	temp = 0;
	while (nilai1 >= nilai2) {
    nilai1 -= nilai2;
    temp++;
    }
	
	return temp;
}

float faktorial(float angka){
	float temp, i;
	 
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

float kombinasi(float nilai1, float nilai2){
	float hasil, i, x1=1, x2=1, x3=1;

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

float permutasi(float nilai1, float nilai2){
	float hasil, i, x1=1, x2=1, x3=1;

	for(i=1;i<=nilai1;i++){
        x1 = perkalian(x1, i);
    }
    
    for(i=1;i<=nilai1-nilai2;i++){
        x2= perkalian(x2, i);
    }
    
    hasil= pembagian(x1, x2);
    
    return hasil;
}

void transposeMatriks (float matriks[max][max], float transpose[max][max], int baris, int kolom)
{
	int i, j;
	for (i = 0; i < baris; i ++){
    	for(j = 0; j < kolom; j++){
    		transpose[j][i] = matriks[i][j];
    	}
	}
}
