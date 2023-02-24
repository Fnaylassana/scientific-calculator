#include "Hasby.h"

float Log(Angka1){
	int Hasil;

    Hasil = log10(Angka1);
   return Hasil;
}

float ConCelFahr(float celc){
	float fahr; 
	fahr = (9.0/5.0 * celc) + 32;
	return fahr;
}
 
 float ConCelKelv(float celc){
	float kelv;
	 
	kelv = celc + 273.15;
	return kelv;
}

float ConCelReam(float celc){
	float ream;
	 
	ream = celc * (4.0/5.0) ;
	return ream;
}

float ConFahrCel(float fahr){
	float celc; 
	celc = (5.0/9.0) * (fahr - 32);
	return celc;
}
 
float ConFahrKelv(float fahr){
	float kelv;
	kelv = (fahr - 32)* 5/9 + 273,15;
	return kelv;
}

float ConFahrReam(float fahr){
	float ream;
	ream = (fahr - 32)* 4/9 ;
	return ream;
}

float ConKelvCel(float kelv){
	float celc; 
	 celc = kelv - 273,15;
	return celc;
}
 
float ConKelvFahr(float kelv){
	float fahr;
	fahr = kelv * 9/5 - 459,67;
	return fahr;
}

float ConKelvReam(float kelv){
	float ream;
	ream = (kelv - 273) * 4/5;
	return ream;
}

float ConReamCel(float ream){
	float celc; 
	celc = (5.0/4.0) * ream;
	return celc;
}
 
float ConReamFahr(float ream){
	float fahr;
	fahr = ream * (9.0/4.0) + 32;
	return fahr;
}

float ConReamKelv(float ream){
	float kelv;
	kelv = 273.15 + (5.0/4.0) * ream;
	return kelv;
}

float Sigmai(float en){
	int i,sig = 0;
	for (i = 1; i <= en; i++) {
        sig = sig + i;
    }
    	return sig; // operasi sigma i
}

float Sigmaidua(float en){
	int i,sig = 0;
	for (i = 1; i <= en; i++) {
        sig += i*i; // operasi sigma i
    }
    return sig; // operasi sigma i kuadrat
}

float Sigmaitiga(float en){
	int i,sig = 0;
	for (i = 1; i <= en; i++) {
        sig += i*i*i; // operasi sigma i
    }
    return sig; // operasi sigma i kubik
}

float ConMkeCM (float met){
	float cm;
	cm = met * 100;
	return cm;
}

float ConMkeMM (float met){
	float mm;
	mm = met * 1000;
	return mm;
}

float ConMkeKM (float met){
	float km;
	km = met / 1000;
	return km;
}

float ConMkeMIL (float met){
	float mil;
	mil = met / 1609.344;
	return mil;
}

float ConCMkeM (float cm){
	float met;
	met = cm / 100;
	return met;
}

float ConCMkeMM (float cm){
	float mm;
	mm = cm * 10;
	return mm;
}

float ConCMkeKM (float cm){
	float km;
	km = cm / 100000;
	return km;
}

float ConCMkeINC (float cm){
	float inc;
	inc = cm / 2.54;
	return inc;
}

float ConKMkeCM (float km){
	float cm;
	cm = km * 100000;
	return cm;
}

float ConKMkeMM (float km){
	float mm;
	mm = km * 1000000;
	return mm;
}

float ConKMkeM (float km){
	float m;
	m = km * 1000;
	return m;
}

float ConKMkeMIL (float km){
	float mil;
	mil = km / 1.609344;
	return mil;
}

float ConMMkeM (float mm){
	float met;
	met = mm / 1000;
	return met;
}

float ConMMkeCM (float mm){
	float cm;
	cm = mm / 10;
	return cm;
}

float ConMMkeKM (float mm){
	float km;
	km = mm / 1000000;
	return km;
}

float ConMMkeINC (float mm){
	float inc;
	inc = mm / 25.4;
	return inc;
}

void KonversiPanjang()
{
    int pilihan, lagi;
    float angka1;
    
    do{
		header();
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==                                                   Konversi Panjang                                                         ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  1. Meter ke Sentimeter, Milimeter, Kilometer , dan Mil                                                                    ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  2. Kilometer ke Sentimeter, Milimeter, Meter, dan Mil                                                                     ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  3. Sentimeter ke Meter, Milimeter, Kilometer, dan Inci                                                                    ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  4. Milimeter ke Meter, Sentimeter, Kilometer, dan Inci                                                                    ==");
		puts	("\t\t\t\t\t================================================================================================================================");
    
        do{
            printf ("\n\n\t\t\t\t\tPilih fitur yang akan digunakan (berupa angka): ");
            scanf  ("%d", &pilihan);
        
            switch (pilihan){
                case 1 :
                    Input1Float(&angka1);
                    printf("\t\t\t\t\tPanjang meter :%g m dalam sentimeter: %g cm\n", angka1, ConMkeCM(angka1));
                    printf("\t\t\t\t\tPanjang meter :%g m dalam milimeter %g mm\n", angka1, ConMkeMM(angka1));
                    printf("\t\t\t\t\tPanjang meter :%g m dalam kilometer: %g km\n", angka1, ConMkeKM(angka1));
                    printf("\t\t\t\t\tPanjang meter :%g m dalam mil: %g mi\n", angka1, ConMkeMIL(angka1));
                    break;
                    
                case 2 :
                    Input1Float(&angka1);
                    printf("\t\t\t\t\tPanjang kilometer :%g km dalam sentimeter: %g cm\n", angka1, ConKMkeCM(angka1));
                    printf("\t\t\t\t\tPanjang kilometer :%g km dalam milimeter %g mm\n", angka1, ConKMkeMM(angka1));
                    printf("\t\t\t\t\tPanjang kilometer :%g km dalam meter: %g m\n", angka1, ConKMkeM(angka1));
                    printf("\t\t\t\t\tPanjang kilometer :%g km dalam mil: %g mi\n", angka1, ConKMkeMIL(angka1));
                    break;
                    
                case 3 :
                    Input1Float(&angka1);
                    printf("\t\t\t\t\tPanjang sentimeter :%g cm dalam meter: %g m\n", angka1, ConCMkeM(angka1));
                    printf("\t\t\t\t\tPanjang sentimeter :%g cm dalam milimeter %g mm\n", angka1, ConCMkeMM(angka1));
                    printf("\t\t\t\t\tPanjang sentimeter :%g cm dalam kilometer: %g km\n", angka1, ConCMkeKM(angka1));
                    printf("\t\t\t\t\tPanjang sentimeter :%g cm dalam inci: %g inci\n", angka1, ConCMkeINC(angka1));
                    break;
                    
                case 4 :
                    Input1Float(&angka1);
                    printf("\t\t\t\t\tPanjang milimeter :%g mm dalam meter: %g m\n", angka1, ConMMkeM(angka1));
                    printf("\t\t\t\t\tPanjang milimeter :%g mm dalam milimeter %g m\n", angka1, ConMMkeCM(angka1));
                    printf("\t\t\t\t\tPanjang milimeter :%g mm dalam kilometer: %g km\n", angka1, ConMMkeKM(angka1));
                    printf("\t\t\t\t\tPanjang milimeter :%g mm dalam inci: %g inci\n", angka1, ConMMkeINC(angka1));
                    break;
        
                default :
                    printf ("\n\t\t\t\t\tPilihan yang anda inputkan salah, Silahkan pilih dari 1 sampai 4\n");
            }
        } while (pilihan != 1 && pilihan != 2 && pilihan != 3 && pilihan != 4);
        
        printf ("\n\t\t\t\t\tApakah anda akan menkonversi panjang kembali? (y/t)");
        lagi = getche();
    }while (lagi == 'y' || lagi == 'Y');
}

void TurunanPolinom ()
{
	int pilihan, lagi;
	int n, a[100];

	do	{
		header();
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==                                                   Turunan Polinom                                                          ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		printf("\t\t\t\t\t\tMasukkan orde polinom: ");
  		scanf("%d", &n);
  		if (n <= 0) {
	    	printf("\t\t\t\t\t\tJika orde polinom <= 0, turunan adalah 0\n");
		}
		else {
			int i;
  			for (i = 0; i < n; i++) {
    			printf("\t\t\t\t\t\tMasukkan koefisien x^%d: ", n-i-1);
    			scanf("%d", &a[i]);
  			}
  			HitungTurunanPolinom(a,n);
		
 		 // Hitung dan cetak turunan
	 		printf("\t\t\t\t\t\tTurunan polinom: ");
 			printf("%dx^%d", a[0], n-2);
  			for (i = 1; i < n-1; i++) {
   				printf(" + %dx^%d", a[i], n-i-2);
			}
  			printf("\n");
		}
		
	    printf ("\n\t\t\t\t\t\tApakah anda akan menghitung polinom kembali? (y/t)");
	    lagi = getche();
	}while (lagi == 'y' || lagi == 'Y');

}

void HitungTurunanPolinom (int a[100], int n) {
	int i;
	for (i = 0; i < n - 1; i++) {
		a[i] = a[i] * (n-i-1);
	  	}
  		a[n-1] = 0;
}
