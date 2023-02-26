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
	float temp;
	
	temp = nilai1 * nilai2;
	
	return temp;
}

float pembagian(float nilai1, float nilai2){
	float temp;
	
	temp = nilai1 / nilai2;
	
	return temp;
}

float faktorial(float angka){
	float temp;
	int i;
	 
	temp = 1;
	
	for(i=1;i<=angka;i++){
		temp = temp * i;
	}
	
	return temp;
}

float modulus(int nilai1, int nilai2){
	float temp;
	
	temp = nilai1 % nilai2;
	
	return temp;
}

float kombinasi(float nilai1, float nilai2){
	float hasil, i, x1=1, x2=1, x3=1;

	for(i=1;i<=nilai1;i++){
        x1=x1*i;
    }
    
	for(i=1;i<=nilai2;i++){
        x2=x2*i;
    }
    
	for(i=1;i<=nilai1-nilai2;i++){
        x3=x3*i;
	}
	hasil=x1/(x2*x3);
	return hasil;
}

float permutasi(float nilai1, float nilai2){
	float hasil, i, x1=1, x2=1, x3=1;

	for(i=1;i<=nilai1;i++){
        x1=x1*i;
    }
    
    for(i=1;i<=nilai1-nilai2;i++){
        x2=x2*i;
    }
    
    hasil=x1/x2;
    
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
