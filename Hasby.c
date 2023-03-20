#include "Hasby.h"
#include "Fauza.h"
#include "naufal.h"


double Log(int Angka1){ //log basis 10
	
	double Hasil;
	Hasil = 0;
    
	while (Angka1 >= 10) {
        Hasil++;
        Angka1 /= 10;
    }
    
    while (Angka1 % 2 == 0){ 	
		Hasil += 0.30103;  	
		Angka1 /= 2;
	}
	
    while (Angka1 % 3 == 0){
		Hasil += 0.47712;  	
		Angka1 /= 3;
	}
	
    while (Angka1 % 5 == 0){
		Hasil += 0.69897;  	
		Angka1 /= 5;
	}
	
    while (Angka1 % 7 == 0){
		Hasil += 0.84510;  	
		Angka1 /= 7;
	}
	
   return Hasil;
}

double Logaritma(double X, double Y){
	double Hasil; 
	
	Hasil = 0;
	
	while (X >= Y) {
        Hasil++;
        X /= Y;
    }
    
    return Hasil;
}

double Eurel (double nilai, double e){   //eurel
	double hasil;
	hasil = 1;
        
    if(e > 0){
		while (e != 0)
	    {
	        hasil = hasil * 10;
	        e = e - 1;
	    } 
    } 
    
    hasil = nilai * hasil;
    
    return hasil;
} 


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double ConCelFahr(double celc){
	double fahr; 
	fahr = (9.0/5.0 * celc) + 32;
	return fahr;
}
 
 double ConCelKelv(double celc){
	double kelv;
	 
	kelv = celc + 273.15;
	return kelv;
}

double ConCelReam(double celc){
	double ream;
	 
	ream = celc * (4.0/5.0) ;
	return ream;
}

double ConFahrCel(double fahr){
	double celc; 
	celc = (5.0/9.0) * (fahr - 32);
	return celc;
}
 
double ConFahrKelv(double fahr){
	double kelv;
	kelv = (fahr - 32)* 5/9 + 273,15;
	return kelv;
}

double ConFahrReam(double fahr){
	double ream;
	ream = (fahr - 32)* 4/9 ;
	return ream;
}

double ConKelvCel(double kelv){
	double celc; 
	 celc = kelv - 273,15;
	return celc;
}
 
double ConKelvFahr(double kelv){
	double fahr;
	fahr = kelv * 9/5 - 459,67;
	return fahr;
}

double ConKelvReam(double kelv){
	double ream;
	ream = (kelv - 273) * 4/5;
	return ream;
}

double ConReamCel(double ream){
	double celc; 
	celc = (5.0/4.0) * ream;
	return celc;
}
 
double ConReamFahr(double ream){
	double fahr;
	fahr = ream * (9.0/4.0) + 32;
	return fahr;
}

double ConReamKelv(double ream){
	double kelv;
	kelv = 273.15 + (5.0/4.0) * ream;
	return kelv;
}

double Sigmai(double en){
	int i,sig = 0;
	for (i = 1; i <= en; i++) {
        sig = sig + i;
    }
    	return sig; // operasi sigma i
}

double Sigmaidua(double en){
	int i;
	double tampung, sig = 0;
	
	for (i = 1; i<=en ; i++){
		tampung = perkalian(i,i);
		sig += tampung; // operasi sigma i
    }
    return sig; // operasi sigma i kuadrat
}               

double Sigmaitiga(double en){
	int i;
	double tampung, sig = 0;
	for (i = 1; i <= en; i++) {
		tampung = perkalian (i,i);
		tampung = perkalian (i,tampung);
        sig += tampung; // operasi sigma i
    }
    return sig; // operasi sigma i kubik
}

double ConMkeCM (double met){
	double cm;
	cm = met * 100;
	return cm;
}

double ConMkeMM (double met){
	double mm;
	mm = met * 1000;
	return mm;
}

double ConMkeKM (double met){
	double km;
	km = met / 1000;
	return km;
}

double ConMkeMIL (double met){
	double mil;
	mil = met / 1609.344;
	return mil;
}

double ConCMkeM (double cm){
	double met;
	met = cm / 100;
	return met;
}

double ConCMkeMM (double cm){
	double mm;
	mm = cm * 10;
	return mm;
}

double ConCMkeKM (double cm){
	double km;
	km = cm / 100000;
	return km;
}

double ConCMkeINC (double cm){
	double inc;
	inc = cm / 2.54;
	return inc;
}

double ConKMkeCM (double km){
	double cm;
	cm = km * 100000;
	return cm;
}

double ConKMkeMM (double km){
	double mm;
	mm = km * 1000000;
	return mm;
}

double ConKMkeM (double km){
	double m;
	m = km * 1000;
	return m;
}

double ConKMkeMIL (double km){
	double mil;
	mil = km / 1.609344;
	return mil;
}

double ConMMkeM (double mm){
	double met;
	met = mm / 1000;
	return met;
}

double ConMMkeCM (double mm){
	double cm;
	cm = mm / 10;
	return cm;
}

double ConMMkeKM (double mm){
	double km;
	km = mm / 1000000;
	return km;
}

double ConMMkeINC (double mm){
	double inc;
	inc = mm / 25.4;
	return inc;
}



void KonversiPanjang()
{
    int pilihan, lagi;
    double angka1;
    
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
