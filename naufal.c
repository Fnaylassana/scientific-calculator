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

int faktorial(int angka){
	int temp, i;
	 
	temp = 1;
	
	for(i=1;i<=angka;i++){
		temp = temp * i;
	}
	
	return temp;
}
 
int modulus(int nilai1, int nilai2){
	int temp;
	
	temp = nilai1 % nilai2;
	
	return temp;
}

int kombinasi(int nilai1, int nilai2){
	int hasil, i, x1=1, x2=1, x3=1;

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

int permutasi(int nilai1, int nilai2){
	int hasil, i, x1=1, x2=1, x3=1;

	for(i=1;i<=nilai1;i++){
        x1=x1*i;
    }
    
    for(i=1;i<=nilai1-nilai2;i++){
        x2=x2*i;
    }
    
    hasil=x1/x2;
    
    return hasil;
}
