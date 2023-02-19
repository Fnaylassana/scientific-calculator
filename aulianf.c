#include "aulianf.h"

float akar(float bilangan1, float bilangan2)
// Menghitung akar
{
	float hasil;
	bilangan2 = 1/bilangan2;
	hasil = pow(bilangan1, bilangan2);
	return hasil;
}

float eksponen(float bilangan1, float bilangan2)
// Menghitung bilangan berpangkat
{   
	float hasil;
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

float sinRad(float angka)
// Menghitung sin dalam radian
{
	float rad;
	rad = sin(angka); 
	return rad;
}

float sinDerajat(float angka)
// Menghitung sin dalam derajat
{
	float nilai, derajat;
	nilai = pi/180;
	derajat = sinf(angka*nilai);
	return derajat;
}

float sinInversRad(float angka)
// Menghitung invers sin dalam radian
{
	float rad;
	rad = asinf(angka);
	return rad;
} 

float sinInversDerajat(float angka)
// Menghitung invers sin dalam derajat
{
	float nilai, derajat;
	nilai = 180/pi;
	derajat = ((asinf(angka))*nilai);
	return derajat;
} 

float cosecRad(float angka)
// Menghitung cosec dalam radian
{
	float rad, cosec;
	rad = sinf(angka); 
	cosec = 1/rad;
	return cosec;
}

float cosecDerajat(float angka)
// Menghitung cosec dalam derajat
{
	float nilai, derajat, cosec;
	nilai = pi/180;
	derajat = sinf(angka*nilai);
	cosec = 1/derajat;
	return cosec;
}

void printMatriks(float matriks[max][max], int baris, int kolom) 
// Menampilkan matriks pertambahan dan pengurangan
{
    int i, j;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("%f\t", matriks[i][j]);
        }
        printf("\n");
    }
}

void inputMatriks(float matriks[max][max], int baris, int kolom) 
// Input elemen pada matriks pertambahan dan pengurangan
{
    int i, j;
    for (i = 0; i < baris; i++){
   		for (j = 0; j < kolom; j++){
   			
		printf("matriksA[%d][%d]: ", i+1 ,j+1);
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
        printf("\n");
    }
}

void inputMatriksDet(int matriks[max][max], int baris, int kolom) 
// Menampilkan matriks determinan
{
    int i, j;
    for (i = 0; i < baris; i++){
   		for (j = 0; j < kolom; j++){
   			
		printf("matriksA[%d][%d]: ", i+1 ,j+1);
		scanf("%d",&matriks[i][j]);
      	}
   }
}

float hitungPertambahanMatriks(float hasil[max][max], float matriksA[max][max], float matriksB[max][max], int baris, int kolom)
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

float hitungPenguranganMatriks(float hasil[max][max], float matriksA[max][max], float matriksB[max][max], int baris, int kolom)
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

void determinanMatriks(int baris, int kolom, int matriks[max][max])
// Menampilkan determinan matriks
{
	int i, j, hasilDet;
	
	printf("DETERMINAN MATRIKS");
	printf("\n(Jumlah baris dan kolom harus sama)");
    printf("\n\nInput jumlah baris matriks : "); 
	scanf("%d", &baris);
	printf("Input jumlah kolom matriks : ");
	scanf("%d", &kolom);
    
    printf("\nInput elemen dari matriks : \n");
	inputMatriksDet(matriks, baris, kolom);
   
   	printf("\nMatriks : \n");
	printMatriksDet(matriks, baris, kolom); 
    
   	while (baris != kolom){
	   	printf("\nTidak bisa melakukan determinan (Jumlah baris dan kolom tidak sama)\n");
		printf("Silahkan masukkan kembali Matriks dengan jumlah baris dan kolom yang sama)\n");
	    printf("\n");
		system("pause");
	    system("cls");
		printf("DETERMINAN MATRIKS");
		printf("\n(Jumlah baris dan kolom harus sama)");
		printf("\n\nInput jumlah baris matriks : "); 
		scanf("%d", &baris);
		printf("Input jumlah kolom matriks : ");
		scanf("%d", &kolom);
	    printf("\nInput elemen dari matriks : \n");
		inputMatriksDet(matriks, baris, kolom);
	   	printf("\nMatriks : \n");
		printMatriksDet(matriks, baris, kolom); 
	}
    printf("\n\nHasil determinan : ");
	hasilDet = hitungDeterminan(matriks, baris);
	printf("%d", hasilDet);
}

void pertambahanMatriks(int barisA, int barisB, int kolomA, int kolomB, float matriksA[max][max], float matriksB[max][max])
// Menampilkan pertambahan matriks
{
	float hasilMatriks[max][max], i, j;
	 
	printf("PERTAMBAHAN MATRIKS");
	printf("\n(Jumlah baris dan kolom harus sama)");
	printf("\n\nInput jumlah baris matriks : "); 
	scanf("%d", &barisA);
	printf("Input jumlah kolom matriks : ");
	scanf("%d", &kolomA);
   
	printf("\nInput elemen dari matriks 1 : \n");
	inputMatriks(matriksA, barisA, kolomA);
	
	printf("\nInput jumlah baris matriks 2 : "); 
	scanf("%d", &barisB);
	printf("Input jumlah kolom matriks 2 : ");
	scanf("%d", &kolomB);
   
    printf("\nInput elemen dari matriks 2 : \n");
	inputMatriks(matriksB, barisB, kolomB);
   
	printf("\nMatriks 1 : \n");
	printMatriks(matriksA, barisA, kolomA);
	printf("\nMatriks 2 : \n");
	printMatriks(matriksB, barisB, kolomB);
   
   while (barisA != barisB || kolomA != kolomB){
		printf("\nTidak bisa melakukan penjumlahan (Jumlah kolom dan baris Matriks 1 dan 2 tidak sama)\n");
		printf("Silahkan masukkan kembali Matriks dengan jumlah baris dan kolom Matriks 1 dan 2 yang sama\n");
		printf("\n");
		system("pause");
	    system("cls");
	    printf("PERTAMBAHAN MATRIKS");
		printf("\n(Jumlah baris dan kolom harus sama)");
		printf("\n\nInput jumlah baris matriks : "); 
		scanf("%d", &barisA);
		printf("Input jumlah kolom matriks : ");
		scanf("%d", &kolomA);
	   
		printf("\nInput elemen dari matriks 1 : \n");
		inputMatriks(matriksA, barisA, kolomA);
		
		printf("\nInput jumlah baris matriks 2 : "); 
		scanf("%d", &barisB);
		printf("Input jumlah kolom matriks 2 : ");
		scanf("%d", &kolomB);
	   
	    printf("\nInput elemen dari matriks 2 : \n");
		inputMatriks(matriksB, barisB, kolomB);
	   
		printf("\nMatriks 1 : \n");
		printMatriks(matriksA, barisA, kolomA);
		printf("\nMatriks 2 : \n");
		printMatriks(matriksB, barisB, kolomB);
   }
	printf("\nHasil penjumlahan Matriks : \n");
	hitungPertambahanMatriks(hasilMatriks, matriksA, matriksB, barisA, kolomB);
	printMatriks(hasilMatriks, barisA, kolomB);
}

void penguranganMatriks(int barisA, int barisB, int kolomA, int kolomB, float matriksA[max][max], float matriksB[max][max])
// Menampilkan pengurangan matriks
{
	float hasilMatriks[max][max], i, j;

	printf("PENGURANGAN MATRIKS");
	printf("\n(Jumlah baris dan kolom harus sama)");
	printf("\n\nInput jumlah baris matriks : "); 
	scanf("%d", &barisA);
	printf("Input jumlah kolom matriks : ");
	scanf("%d", &kolomA);
   
	printf("\nInput elemen dari matriks 1 : \n");
	inputMatriks(matriksA, barisA, kolomA);
	
	printf("\nInput jumlah baris matriks 2 : "); 
	scanf("%d", &barisB);
	printf("Input jumlah kolom matriks 2 : ");
	scanf("%d", &kolomB);
   
    printf("\nInput elemen dari matriks 2 : \n");
	inputMatriks(matriksB, barisB, kolomB);
   
	printf("\nMatriks 1 : \n");
	printMatriks(matriksA, barisA, kolomA);
	printf("\nMatriks 2 : \n");
	printMatriks(matriksB, barisB, kolomB);;
   
   while (barisA != barisB || kolomA != kolomB){
		printf("Tidak bisa melakukan penjumlahan (Jumlah kolom dan baris Matriks 1 dan 2 tidak sama)\n");
		printf("Silahkan masukkan kembali Matriks dengan jumlah baris dan kolom Matriks 1 dan 2 yang sama\n");
		printf("\n");
		system("pause");
	    system("cls");
		printf("PENGURANGAN MATRIKS");
		printf("\n(Jumlah baris dan kolom harus sama)");
		printf("\n\nInput jumlah baris matriks : "); 
		scanf("%d", &barisA);
		printf("Input jumlah kolom matriks : ");
		scanf("%d", &kolomA);
	   
		printf("\nInput elemen dari matriks 1 : \n");
		inputMatriks(matriksA, barisA, kolomA);
		
		printf("\nInput jumlah baris matriks 2 : "); 
		scanf("%d", &barisB);
		printf("Input jumlah kolom matriks 2 : ");
		scanf("%d", &kolomB);
	   
	    printf("\nInput elemen dari matriks 2 : \n");
		inputMatriks(matriksB, barisB, kolomB);
	   
		printf("\nMatriks 1 : \n");
		printMatriks(matriksA, barisA, kolomA);
		printf("\nMatriks 2 : \n");
		printMatriks(matriksB, barisB, kolomB);
   }
	printf("\nHasil pengurangan Matriks : \n");
	hitungPenguranganMatriks(hasilMatriks, matriksA, matriksB, barisA, kolomB);
	printMatriks(hasilMatriks, barisA, kolomB);	
}


