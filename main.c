#include "Fauza.h"


int main() 
{
    char input[256];
    char lagi = 'y';
	char *x, *temp;
    float hasil;
    int ulang;    
    
    while(lagi == 'y' || lagi == 'Y')
    {
    	awal :
		header();
		puts	("\t\t\t\t\t=====================================================================================================================================");
		puts	("\t\t\t\t\t==                                                      Ketentuan                                                                  ==");
		puts	("\t\t\t\t\t=====================================================================================================================================");	
		puts	("\t\t\t\t\t==  1. x+y untuk operasi tambah                                                                                                    ==");
		puts	("\t\t\t\t\t==  2. x-y untuk operasi kurang                                                                                                    ==");
		puts	("\t\t\t\t\t==  3. x*y untuk operasi kali                                                                                                      ==");
		puts	("\t\t\t\t\t==  4. x/y untuk operasi bagi                                                                                                      ==");
		puts	("\t\t\t\t\t==  5. xmody untuk operasi modulus                                                                                                 ==");
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
		puts	("\t\t\t\t\t==  27. log(x) untuk operasi logaritma 10                                                                                          ==");
		puts	("\t\t\t\t\t==  28. ln(x) untuk operasi logaritma natural                                                                                      ==");
		puts	("\t\t\t\t\t==  29. ylog(x) untuk operasi logaritma basis bebas (y sebagai basis)                                                              ==");
		puts	("\t\t\t\t\t==  30. xey untuk euler (x * 10^y)                                                                                                 ==");
		puts	("\t\t\t\t\t=====================================================================================================================================");
    	
    	ulang = 0;	    	
	    printf ("\n\t\t\t\t\t\tMasukkan operasi yang akan anda hitung : ");
	    scanf (" %[^\n]s", &input);
	    strlwr(input);
		char postfix[256] = "";
	    temp = infixToPostfix(input, postfix);
		
		printf("\t\t\t\t\t\tPostfix : %s\n",temp);                                                                    
	    hasil = hitungIsiPostfix(postfix, &ulang); 
	    	
	    if (ulang){
	    	getche();
	    	goto awal;
		}	
			
	    printf ("\t\t\t\t\t\tHasilnya adalah: %g\n\n", hasil);
	    printf ("\t\t\t\t\t\tApakah anda ingin menghitung kembali? (y/t)");
	    lagi = getche();
    }
    
    return 0;
}
