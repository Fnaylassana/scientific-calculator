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
	double temp;
	
	temp = nilai1 * nilai2;
	
	return temp;
}

double pembagian(double nilai1, double nilai2){
	double temp;
	
	temp = nilai1 / nilai2;
	
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

void help()
{
	puts	("\t\t\t\t\t=====================================================================================================================================");
	puts	("\t\t\t\t\t==                                                      Ketentuan                                                                  ==");
	puts	("\t\t\t\t\t=====================================================================================================================================");	
	puts	("\t\t\t\t\t==  1. x+y untuk operasi tambah                                                                                                    ==");
	puts	("\t\t\t\t\t==  2. x-y untuk operasi kurang                                                                                                    ==");
	puts	("\t\t\t\t\t==  3. x*y untuk operasi kali                                                                                                      ==");
	puts	("\t\t\t\t\t==  4. x/y untuk operasi bagi                                                                                                      ==");
	puts	("\t\t\t\t\t==  5. xmod(y) untuk operasi modulus                                                                                               ==");
	puts	("\t\t\t\t\t==  6. (x) untuk tanda kurung                                                                                                      ==");
	puts	("\t\t\t\t\t==  7. |x| untuk mutlak                                                                                                            ==");
	puts	("\t\t\t\t\t==  8. x! untuk operasi faktorial                                                                                                  ==");
	puts	("\t\t\t\t\t==  9. x% untuk operasi x/100                                                                                                      ==");
	puts	("\t\t\t\t\t==  10. pi untuk 3.14285714                                                                                                        ==");
	puts	("\t\t\t\t\t==  11. xCy untuk operasi kombinasi                                                                                                ==");
	puts	("\t\t\t\t\t==  12. xPy untuk operasi permutasi                                                                                                ==");
	puts	("\t\t\t\t\t==  13. x^y untuk operasi pangkat (dengan y sebagai pangkat)                                                                       ==");
	puts	("\t\t\t\t\t==  14. xvy untuk operasi akar (y akar x)                                                                                          ==");
	puts	("\t\t\t\t\t==  15. sin(x) untuk operasi sinus (x berupa derajat)                                                                              ==");
	puts	("\t\t\t\t\t==  16. sinR(x) untuk operasi sinus (x berupa radian)                                                                              ==");
	puts	("\t\t\t\t\t==  17. cos(x) untuk operasi cosinus (x berupa derajat)                                                                            ==");
	puts	("\t\t\t\t\t==  18. cosR(x) untuk operasi cosinus (x berupa radian)                                                                            ==");
	puts	("\t\t\t\t\t==  19. tan(x) untuk operasi tangen (x berupa derajat)                                                                             ==");
	puts	("\t\t\t\t\t==  20. tanR(x) untuk operasi tangen (x berupa radian)                                                                             ==");
	puts	("\t\t\t\t\t==  21. csc(x) untuk operasi cosecan (x berupa derajat)                                                                            ==");
	puts	("\t\t\t\t\t==  22. cscR(x) untuk operasi cosecan (x berupa radian)                                                                            ==");
	puts	("\t\t\t\t\t==  23. sec(x) untuk operasi secan (x berupa derajat)                                                                              ==");
	puts	("\t\t\t\t\t==  24. secR(x) untuk operasi secan (x berupa radian)                                                                              ==");
	puts	("\t\t\t\t\t==  25. cot(x) untuk operasi cotangen (x berupa derajat)                                                                           ==");
	puts	("\t\t\t\t\t==  26. cotR(x) untuk operasi cotangen (x berupa radian)                                                                           ==");
	puts	("\t\t\t\t\t==  27. log(x) untuk operasi logaritma berbasis 10                                                                                 ==");
	puts	("\t\t\t\t\t==  28. ln(x) untuk operasi logaritma natural                                                                                      ==");
	puts	("\t\t\t\t\t==  29. ylog(x) untuk operasi logaritma berbasis bebas (dengan y sebagai basis)                                                    ==");
	puts	("\t\t\t\t\t==  30. (x)e(y) untuk euler (x * 10^y)                                                                                             ==");
	puts	("\t\t\t\t\t==  31. sigI1(x) untuk operasi sigma i (dengan x sebagai nilai n)                                                                  ==");
	puts	("\t\t\t\t\t==  32. sigI2(x) untuk operasi sigma i kaudrat (dengan x sebagai nilai n)                                                          ==");
	puts	("\t\t\t\t\t==  33. sigI3(x) untuk operasi sigma i kubik (dengan x sebagai nilai n)                                                            ==");
	puts	("\t\t\t\t\t=====================================================================================================================================");
}
