#include "aulianf.h"
#include "Fauza.h"
#include "naufal.h"

double akar(double bilangan, double pangkat) 
// Menghitung akar
{
    double hasil, epsilon;
    
	hasil = bilangan;
    epsilon = 0.000001; 
    while ((eksponen(hasil, pangkat) - bilangan) > epsilon) 
	{
        hasil = (1/pangkat)*((pangkat-1)*hasil + bilangan/eksponen(hasil, pangkat-1));
    }
    return hasil;
}

double eksponen(double bilangan, double pangkat) 
// Menghitung bilangan berpangkat
{
    double hasil = 1;
    int i;
    
    if(pangkat > 0){
    	for (i = 1; i <= pangkat; i++) 
		{
        	hasil *= bilangan;
		}
	} else {
		if(pangkat < 0){
			hasil = eksponen(bilangan,-pangkat);
			hasil = 1/hasil;
		}
	}
    
    return hasil;
}

double sinRad(double bilangan)
// Menghitung sin dalam radian
{
	int n = 10; 								// jumlah suku deret Taylor yang dihitung
	double rad = 0;
	double tanda, pembilang, penyebut;
	int i;
	
	for (i = 0; i <= n; i++) 
   {
      tanda = (i % 2 == 0) ? 1 : -1;				// menentukan tanda suku deret Taylor
      pembilang = eksponen(bilangan, 2 * i + 1);	// menghitung nilai pembilang pada setiap suku deret Taylor
      penyebut = faktorial(2 * i + 1);				// menghitung nilai penyebut pada setiap suku deret Taylor
      rad += tanda * pembilang / penyebut;
   }
   
   return rad;
}

double sinDerajat(double bilangan)
// Menghitung sin dalam derajat
{
	double derajat;
	bilangan = bilangan* pi / 180;
	derajat = sinRad(bilangan);
	
	return derajat;
}

double cosecRad(double bilangan)
// Menghitung cosec dalam radian
{
	double rad, cosec;
	rad = sinRad(bilangan); 
	cosec = 1/rad;
	return cosec;
}

double cosecDerajat(double bilangan)
// Menghitung cosec dalam derajat
{
	double nilai, derajat, cosec;
	derajat = sinDerajat(bilangan);
	cosec = 1/derajat;
	return cosec;
}

double sinInversRad(double angka)
// Menghitung invers sin dalam radian
{
	double rad;
	rad = asinf(angka);
	return rad;
} 

double sinInversDerajat(double angka)
// Menghitung invers sin dalam derajat
{
	double nilai, derajat;
	nilai = 180/pi;
	derajat = ((asinf(angka))*nilai);
	return derajat;
} 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void printMatriks(double matriks[max][max], int baris, int kolom) 
// Menampilkan matriks pertambahan dan pengurangan
{
    int i, j;
    printf ("\t\t\t\t\t\t");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("%0.0f\t", matriks[i][j]);
        }
        printf("\n\t\t\t\t\t\t");
    }
}

void inputMatriks(double matriks[max][max], int baris, int kolom) 
// Input elemen pada matriks pertambahan dan pengurangan
{
    int i, j;
    for (i = 0; i < baris; i++){
   		for (j = 0; j < kolom; j++){
   			
		printf("\t\t\t\t\t\tmatriksA[%d][%d]: ", i+1 ,j+1);
		scanf("%f",&matriks[i][j]);
      	}
   }
}

void printMatriksDet(int matriks[max][max], int baris, int kolom) 
// Input elemen pada matriks determinan
{
    int i, j;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("%d\t", matriks[i][j]);
        }
        printf("\n\t\t\t\t\t\t");
    }
}

void inputMatriksDet(int matriks[max][max], int baris, int kolom) 
// Menampilkan matriks determinan
{
    int i, j;
    for (i = 0; i < baris; i++){
   		for (j = 0; j < kolom; j++){
   			
		printf("\t\t\t\t\t\tmatriksA[%d][%d]: ", i+1 ,j+1);
		scanf("%d",&matriks[i][j]);
      	}
   }
}

double hitungPertambahanMatriks(double hasil[max][max], double matriksA[max][max], double matriksB[max][max], int baris, int kolom)
// Penjumlahan dua buah matriks
{
	int i, j;
	
	for (i = 0; i < baris; i++){
    	for (j = 0; j < kolom; j++)
    	{
    		hasil[i][j] = matriksA[i][j] + matriksB[i][j];
    	}
	}
}

double hitungPenguranganMatriks(double hasil[max][max], double matriksA[max][max], double matriksB[max][max], int baris, int kolom)
// Pengurangan dua buah matriks
{
	int i, j;
	
	for (i = 0; i < baris; i++){
    	for (j = 0; j < kolom; j++)
    	{
    		hasil[i][j] = matriksA[i][j] - matriksB[i][j];
    	}
	}
}

int hitungKofaktor(int matriks[max][max], int temp[max][max], int p, int q, int ordo) 
// Menghitung determinan dengan kofaktor
{
    int i = 0, j = 0, baris, kolom;
    
    for (baris = 0; baris < ordo; baris++) {
        for (kolom = 0; kolom < ordo; kolom++) {
            if (baris != p && kolom != q) {
                temp[i][j++] = matriks[baris][kolom];
                if (j == ordo - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
    
    return temp[i][j++];
}

int hitungDeterminan(int matriks[max][max], int ordo) 
// Menghitung determinan matriks
{
    int det, i, kofaktor;
    int temp[max][max];
    int tanda = 1;
    
    if (ordo == 1) {
        return matriks[0][0];
    }
    
    for (i = 0; i < ordo; i++) {
        kofaktor = hitungKofaktor(matriks, temp, 0, i, ordo);
        det += tanda * matriks[0][i] * hitungDeterminan(temp, ordo - 1);
        tanda = -tanda;
    }
    
    return det;
}

void determinanMatriks()
// Menampilkan determinan matriks
{
	int baris, kolom;
	int matriks[max][max];
	int i, j, hasilDet;
	
	printf("\t\t\t\t\t\tDETERMINAN MATRIKS");
	printf("\n\t\t\t\t\t\t(Jumlah baris dan kolom harus sama)");
    printf("\n\n\t\t\t\t\t\tInput jumlah baris matriks : "); 
	scanf("%d", &baris);
	printf("\t\t\t\t\t\tInput jumlah kolom matriks : ");
	scanf("%d", &kolom);
    
    printf("\n\t\t\t\t\t\tInput elemen dari matriks : \n");
	inputMatriksDet(matriks, baris, kolom);
   
   	printf("\n\t\t\t\t\t\tMatriks : \n");
	printMatriksDet(matriks, baris, kolom); 
    
   	while (baris != kolom){
	   	printf("\n\t\t\t\t\t\tTidak bisa melakukan determinan (Jumlah baris dan kolom tidak sama)\n");
		printf("\t\t\t\t\t\tSilahkan masukkan kembali Matriks dengan jumlah baris dan kolom yang sama)\n");
	    printf("\n");
		system("pause");
	    system("cls");
		printf("\t\t\t\t\t\tDETERMINAN MATRIKS");
		printf("\n\t\t\t\t\t\t(Jumlah baris dan kolom harus sama)");
		printf("\n\n\t\t\t\t\t\tInput jumlah baris matriks : "); 
		scanf("%d", &baris);
		printf("\t\t\t\t\t\tInput jumlah kolom matriks : ");
		scanf("%d", &kolom);
	    printf("\n\t\t\t\t\t\tInput elemen dari matriks : \n");
		inputMatriksDet(matriks, baris, kolom);
	   	printf("\n\t\t\t\t\t\tMatriks : \n");
		printMatriksDet(matriks, baris, kolom); 
	}
    printf("\n\n\t\t\t\t\t\tHasil determinan : ");
	hasilDet = hitungDeterminan(matriks, baris);
	printf("%d", hasilDet);
}

void pertambahanMatriks()
// Menampilkan pertambahan matriks
{
	int barisA, barisB, kolomA, kolomB;
	double matriksA[max][max];
	double matriksB[max][max];
	double hasilMatriks[max][max], i, j;
	 
	printf("\t\t\t\t\t\tPERTAMBAHAN MATRIKS");
	printf("\n\t\t\t\t\t\t(Jumlah baris dan kolom harus sama)");
	printf("\n\n\t\t\t\t\t\tInput jumlah baris matriks : "); 
	scanf("%d", &barisA);
	printf("\t\t\t\t\t\tInput jumlah kolom matriks : ");
	scanf("%d", &kolomA);
   
	printf("\n\t\t\t\t\t\tInput elemen dari matriks 1 : \n");
	inputMatriks(matriksA, barisA, kolomA);
	
	printf("\n\t\t\t\t\t\tInput jumlah baris matriks 2 : "); 
	scanf("%d", &barisB);
	printf("\t\t\t\t\t\tInput jumlah kolom matriks 2 : ");
	scanf("%d", &kolomB);
   
    printf("\n\t\t\t\t\t\tInput elemen dari matriks 2 : \n");
	inputMatriks(matriksB, barisB, kolomB);
   
	printf("\n\t\t\t\t\t\tMatriks 1 : \n");
	printMatriks(matriksA, barisA, kolomA);
	printf("\n\t\t\t\t\t\tMatriks 2 : \n");
	printMatriks(matriksB, barisB, kolomB);
   
   while (barisA != barisB || kolomA != kolomB){
		printf("\n\t\t\t\t\t\tTidak bisa melakukan penjumlahan (Jumlah kolom dan baris Matriks 1 dan 2 tidak sama)\n");
		printf("\t\t\t\t\t\tSilahkan masukkan kembali Matriks dengan jumlah baris dan kolom Matriks 1 dan 2 yang sama\n");
		printf("\n");
		system("pause");
	    system("cls");
	    printf("\t\t\t\t\t\tPERTAMBAHAN MATRIKS");
		printf("\n\t\t\t\t\t\t(Jumlah baris dan kolom harus sama)");
		printf("\n\n\t\t\t\t\t\tInput jumlah baris matriks : "); 
		scanf("%d", &barisA);
		printf("\t\t\t\t\t\tInput jumlah kolom matriks : ");
		scanf("%d", &kolomA);
	   
		printf("\n\t\t\t\t\t\tInput elemen dari matriks 1 : \n");
		inputMatriks(matriksA, barisA, kolomA);
		
		printf("\n\t\t\t\t\t\tInput jumlah baris matriks 2 : "); 
		scanf("%d", &barisB);
		printf("\t\t\t\t\t\tInput jumlah kolom matriks 2 : ");
		scanf("%d", &kolomB);
	   
	    printf("\nInput elemen dari matriks 2 : \n");
		inputMatriks(matriksB, barisB, kolomB);
	   
		printf("\n\t\t\t\t\t\tMatriks 1 : \n");
		printMatriks(matriksA, barisA, kolomA);
		printf("\n\t\t\t\t\t\tMatriks 2 : \n");
		printMatriks(matriksB, barisB, kolomB);
   }
	printf("\nHasil penjumlahan Matriks : \n");
	hitungPertambahanMatriks(hasilMatriks, matriksA, matriksB, barisA, kolomB);
	printMatriks(hasilMatriks, barisA, kolomB);
}

void penguranganMatriks()
// Menampilkan pengurangan matriks
{
	int barisA, barisB, kolomA, kolomB;
	double matriksA[max][max];
	double matriksB[max][max];
	double hasilMatriks[max][max], i, j;

	printf("\t\t\t\t\t\tPENGURANGAN MATRIKS");
	printf("\n\t\t\t\t\t\t(Jumlah baris dan kolom harus sama)");
	printf("\n\n\t\t\t\t\t\tInput jumlah baris matriks : "); 
	scanf("%d", &barisA);
	printf("\t\t\t\t\t\tInput jumlah kolom matriks : ");
	scanf("%d", &kolomA);
   
	printf("\n\t\t\t\t\t\tInput elemen dari matriks 1 : \n");
	inputMatriks(matriksA, barisA, kolomA);
	
	printf("\n\t\t\t\t\t\tInput jumlah baris matriks 2 : "); 
	scanf("%d", &barisB);
	printf("\t\t\t\t\t\tInput jumlah kolom matriks 2 : ");
	scanf("%d", &kolomB);
   
    printf("\n\t\t\t\t\t\tInput elemen dari matriks 2 : \n");
	inputMatriks(matriksB, barisB, kolomB);
   
	printf("\n\t\t\t\t\t\tMatriks 1 : \n");
	printMatriks(matriksA, barisA, kolomA);
	printf("\n\t\t\t\t\t\tMatriks 2 : \n");
	printMatriks(matriksB, barisB, kolomB);;
   
   while (barisA != barisB || kolomA != kolomB){
		printf("\t\t\t\t\t\tTidak bisa melakukan penjumlahan (Jumlah kolom dan baris Matriks 1 dan 2 tidak sama)\n");
		printf("\t\t\t\t\t\tSilahkan masukkan kembali Matriks dengan jumlah baris dan kolom Matriks 1 dan 2 yang sama\n");
		printf("\n");
		system("pause");
	    system("cls");
		printf("\t\t\t\t\t\tPENGURANGAN MATRIKS");
		printf("\n\t\t\t\t\t\t(Jumlah baris dan kolom harus sama)");
		printf("\n\n\t\t\t\t\t\tInput jumlah baris matriks : "); 
		scanf("%d", &barisA);
		printf("\t\t\t\t\t\tInput jumlah kolom matriks : ");
		scanf("%d", &kolomA);
	   
		printf("\n\t\t\t\t\t\tInput elemen dari matriks 1 : \n");
		inputMatriks(matriksA, barisA, kolomA);
		
		printf("\n\t\t\t\t\t\tInput jumlah baris matriks 2 : "); 
		scanf("%d", &barisB);
		printf("\t\t\t\t\t\tInput jumlah kolom matriks 2 : ");
		scanf("%d", &kolomB);
	   
	    printf("\n\t\t\t\t\t\tInput elemen dari matriks 2 : \n");
		inputMatriks(matriksB, barisB, kolomB);
	   
		printf("\n\t\t\t\t\t\tMatriks 1 : \n");
		printMatriks(matriksA, barisA, kolomA);
		printf("\n\t\t\t\t\t\tMatriks 2 : \n");
		printMatriks(matriksB, barisB, kolomB);
   }
	printf("\n\t\t\t\t\t\tHasil pengurangan Matriks : \n");
	hitungPenguranganMatriks(hasilMatriks, matriksA, matriksB, barisA, kolomB);
	printMatriks(hasilMatriks, barisA, kolomB);	
}


