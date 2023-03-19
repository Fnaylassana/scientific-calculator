#include "aulianf.h"
#include "Fauza.h"

double akar(double bilangan1, double bilangan2)
// Menghitung akar
{
	double hasil;
	bilangan2 = 1/bilangan2;
	hasil = pow(bilangan1, bilangan2);
	return hasil;
}

double eksponen(double bilangan1, double bilangan2)
// Menghitung bilangan berpangkat
{   
	double hasil;
	hasil = 1;
        
    if(bilangan2 > 0){
		while (bilangan2 != 0)
	    {
	        hasil = hasil * bilangan1;
	        bilangan2 = bilangan2 - 1;
	    } 
    } 
    
    if(bilangan2 < 0){
		while (bilangan2 != 0)
	    {
	        hasil = hasil * bilangan1;
	        bilangan2 = bilangan2 + 1;
	    } 
        hasil = 1/hasil;
    } 
    
    return hasil;
} 

double sinRad(double angka)
// Menghitung sin dalam radian
{
	double rad;
	rad = sin(angka); 
	return rad;
}

double sinDerajat(double angka)
// Menghitung sin dalam derajat
{
	double nilai, derajat;
	nilai = pi/180;
	derajat = sinf(angka*nilai);
	return derajat;
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

double cosecRad(double angka)
// Menghitung cosec dalam radian
{
	double rad, cosec;
	rad = sinf(angka); 
	cosec = 1/rad;
	return cosec;
}

double cosecDerajat(double angka)
// Menghitung cosec dalam derajat
{
	double nilai, derajat, cosec;
	nilai = pi/180;
	derajat = sinf(angka*nilai);
	cosec = 1/derajat;
	return cosec;
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


