#include "Fauza.h"

float HitungNilaiMutlak (float nilai){
	
	if (nilai < 0){
		nilai = nilai * -1;
	}
	
	return nilai;
}

float HitungTan(float nilai){
	float temp;
	
	temp = tanf (nilai);
	
	return temp;
}
