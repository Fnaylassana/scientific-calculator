#include "Fauza.h"
#include "naufal.h"
#include "Hasby.h"
#include "aryagara2.h"
#include "aulianf.h"

void header()
{
	system("cls");
	puts	("\t\t\t\t\t================================================================================================================================");
	puts	("\t\t\t\t\t================================================================================================================================");
	puts	("\t\t\t\t\t==              ==    ==  =======  ==       ========   ==     ==   ======   ========   ==    ==       ========                ==");
	puts	("\t\t\t\t\t==              ==   ==   ==       ==       ==    ==   ===   ===   ==    =  ==    ==   ==   ==        ==                      ==");
	puts	("\t\t\t\t\t==              == ==     ======   ==       ==    ==   == = = ==   ==    =  ==    ==   == ==          =====                   ==");
	puts	("\t\t\t\t\t==              ====      ======   ==       ==    ==   ==  =  ==   ======   ==    ==   ====                ==                 ==");
	puts	("\t\t\t\t\t==              ==  ==    ==       ==       ==    ==   ==     ==   ==       ==    ==   ==  ==               ==                ==");
	puts	("\t\t\t\t\t==              ==   ==   =======  =======  ========   ==     ==   ==       ========   ==   ==        =======                 ==");
	puts	("\t\t\t\t\t================================================================================================================================");
	puts	("\t\t\t\t\t==                                                 CALCULATOR PROGRAM                                                         ==");
	puts	("\t\t\t\t\t================================================================================================================================\n\n");	
}

float HitungNilaiMutlak (float nilai){
	
	if (nilai < 0){
		nilai = nilai * -1;
	}
	
	return nilai;
}

////Referensi:
///MOHAMED FARID ABDELAZIZ SALAMA 6905
///ADHAM MOHAMED ALY ABDELHAMID 6744


void kalkulator()
{
    char input[256];
    char lagi = 'y';
	char*x;
    float hasil;
    
    while(lagi == 'y' || lagi == 'Y')
    {
		header();
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==                                                      Ketentuan                                                             ==");
		puts	("\t\t\t\t\t================================================================================================================================");	
		puts	("\t\t\t\t\t==  1. x+y untuk operasi tambah                                                                                               ==");
		puts	("\t\t\t\t\t==  2. x-y untuk operasi kurang                                                                                               ==");
		puts	("\t\t\t\t\t==  3. x*y untuk operasi kali                                                                                                 ==");
		puts	("\t\t\t\t\t==  4. x/y untuk operasi bagi                                                                                                 ==");
		puts	("\t\t\t\t\t==  7. xmody untuk operasi modulus                                                                                            ==");
		puts	("\t\t\t\t\t==  7. (x) untuk prioritas                                                                                                    ==");
		puts	("\t\t\t\t\t==  8. x! untuk operasi faktorial                                                                                             ==");
		puts	("\t\t\t\t\t==  7. x% untuk operasi x/100                                                                                                 ==");
		puts	("\t\t\t\t\t==  8. pi untuk 3.14285714                                                                                                    ==");
		puts	("\t\t\t\t\t==  4. xCy untuk operasi kombinasi (dengan penulisan C berupa huruf kapital)                                                  ==");
		puts	("\t\t\t\t\t==  7. xPy untuk operasi permutasi (dengan penulisan P berupa huruf kapital)                                                  ==");
		puts	("\t\t\t\t\t==  5. x^y untuk operasi pangkat (dengan y sebagai pangkat)                                                                   ==");
		puts	("\t\t\t\t\t==  6. xvy untuk operasi akar (dengan v tidak kapital dan x akar pangkat y)                                                   ==");
		puts	("\t\t\t\t\t==  9. sin(x) untuk operasi sinus (dengan penulisan sin yang harus spesifik seperti contoh dan x berupa derajat)              ==");
		puts	("\t\t\t\t\t==  10. cos(x) untuk operasi cosinus (dengan penulisan cos yang harus spesifik seperti contoh dan x berupa derajat)           ==");
		puts	("\t\t\t\t\t==  11. tan(x) untuk operasi tangen (dengan penulisan tan yang harus spesifik seperti contoh dan x berupa derajat)            ==");
		puts	("\t\t\t\t\t==  12. log(x) untuk operasi logaritma 10 (dengan penulisan log yang harus spesifik seperti contoh)                           ==");
		puts	("\t\t\t\t\t==  13. ln(x) untuk operasi logaritma natural (dengan penulisan ln yang harus spesifik seperti contoh)                        ==");
		puts	("\t\t\t\t\t==  14. ylog(x) untuk operasi cosinus (dengan penulisan log yang harus spesifik seperti contoh dan y sebagai basis)           ==");
		puts	("\t\t\t\t\t================================================================================================================================");
    	
    	printf ("\n\t\t\t\t\t\tMasukkan operasi yang akan anda hitung (tanpa spasi): ");
    	scanf ("%s", &input);
	    char postfix[256] = "";
        printf("\t\t\t\t\t\tPostfix : %s\n",infixToPostfix(input, postfix));
        hasil = hitungIsiPostfix(postfix);
        printf ("\t\t\t\t\t\tHasilnya adalah: %g\n\n", hasil);
        printf ("\t\t\t\t\t\tApakah anda ingin menghitung kembali? (y/t)");
        lagi = getche();
    }
}

Stack* alloc()
{
    Stack *s = malloc(sizeof(Stack));
    s->top=-1;
    return s;
}

int isEmpty(Stack *s)
{
    return s->top == -1;
}

int isFull(Stack *s)
{
    return s->top==255;
}

Item top(Stack *s)
{
    return s->item[s->top];
}

Item pop(Stack *s)
{
    return s->item[s->top--];
}

void push(Stack *s, float val)
{
    s->item[++s->top].datafloat = val;
}

void pushChar(Stack *s, char c)
{
    s->item[++s->top].datachar = c;
}

int prioritas(char c)
{
    if (c=='+' || c=='-') {
    	return 1;
	}else {
		if (c=='*' || c=='/') {
			return 2;
		} else {
			if (c=='^' || c=='v' || c=='m' || c=='l' || c=='C' || c=='P'){
				return 3 ;
			} else {
				return 0;
			}
		}
	}
}

/// This function checks if a given token is a number ( positive or negative )
int isNumber(char *token)
{
    return isdigit(*token) || ( *token == '-' && isdigit(token[1]) );
}

int isOperator(char c)
{
    if( c=='(' || c=='+' || c=='-' || c=='/' || c=='*' || c=='^' || c=='v' || c=='m' || c=='l' || c=='C' || c=='P') {
		return 1;
	}else{
		return 0;
	} 
}

int negativeInteger(char *infix,char c,int ptr)
{
    if (ptr == 0 && c == '-' ) {
    	return 1;
	}else  {
		if((isOperator(infix[ptr-1]) && c == '-' ) ){
			return 1;
		}else {
			return 0;
		}
	}
}

int isAfter(Stack *s)
{
    if(s->item[s->top].datachar == '(' ) return 1;
    else return 0;
}

char *infixToPostfix(char *infix,char *postfix)
{
    char oneSpace[] = " ", tempInfix[256];
    int  ptr = 0;
    float x;
    int y;
    char *temp, *temp2;
    Stack *s = alloc();

    while(infix[ptr] != '\0' )
    {
    	if(infix[ptr]=='s'|| infix[ptr]=='c'|| infix[ptr]=='t'|| infix[ptr]=='l' || infix[ptr]=='m' || infix[ptr]=='p'){
    		strcpy(tempInfix,infix);
        	temp = strtok(tempInfix + ptr, " +-*/^!%");
        	y = ptr;
            ptr+=strlen(temp);
        	if (infix[y]=='s'){
        		sscanf(temp, "sin(%f)", &x);
        		x = sinDerajat(x);
        		sprintf(temp, "%g", x);
			}
			else if (infix[y]=='c'){
        		sscanf(temp, "cos(%f)", &x);
        		x = cosNilai(x);
        		sprintf(temp, "%f", x);
			}
			else if (infix[y]=='t'){
        		sscanf(temp, "tan(%f)", &x);
        		x = tanDerajat(x);
        		sprintf(temp, "%g", x);
			}
			else if (infix[y]=='l' && infix[y+1]=='n'){
				sscanf(temp, "ln(%f)", &x);
	       		x = hitungLog(x);
	        	sprintf(temp, "%g", x);
	        }
			else if (infix[y]=='l' && isNumber(&infix[y-1])){
	        	sscanf (temp, "log(%f)", &x);
	        	sprintf(temp, "%g", x);
	        	*temp2 = 'l';
			}
			else if (infix[y]=='l' && infix[y+1]=='o'){
	        	sscanf (temp, "log(%f)", &x);
	        	x = Log(x);
	        	sprintf(temp, "%g", x);
			}
			else if (infix[y]=='m'){
	        	sscanf (temp, "mod%f", &x);
	        	sprintf(temp, "%g", x);
	        	*temp2 = 'm';
			}
			else if (infix[y]=='p'){
	        	sprintf(temp, "%g", pi);
			}
			
            strcat(postfix, temp);
            strcat(postfix, oneSpace);
            
			if ((infix[y]=='l' && isNumber(&infix[y-1]))||infix[y]=='m'){
            	strcat(postfix, temp2);
        	    strcat(postfix, oneSpace);
			}
		}
        else if(isOperator(infix[ptr]) && !negativeInteger(infix,infix[ptr],ptr))
        {
            if(infix[ptr] == '(' )
            {
                pushChar(s,infix[ptr]); 
                ptr++;
            }
            else if(isAfter(s))
            {
                pushChar(s,infix[ptr]);
                ptr++;
            }
            else if(prioritas(infix[ptr]) > prioritas(top(s).datachar) || isEmpty(s))
            {
                pushChar(s,infix[ptr]);
                ptr++;
            }
            else if(prioritas(infix[ptr])==prioritas(top(s).datachar))
            {
                char tempchar=pop(s).datachar;
                strncat(postfix,&tempchar,1);
                pushChar(s,infix[ptr]);
                ptr++;
                strcat(postfix,oneSpace);
            }
            else if(prioritas(infix[ptr]) <prioritas(top(s).datachar) && top(s).datachar != '(' && top(s).datachar != ')')
            {
                while(1)
                {
                    char tempChar;
                    if( isEmpty(s) ) break;
                    if( top(s).datachar == '(' ) break;
                    tempChar = pop(s).datachar;
                    strncat(postfix, &tempChar, 1);
                    strcat(postfix, oneSpace);
                }
            }
        }
        else if(infix[ptr]==')')
        {
            while(top(s).datachar!='(')
            {
                char tempChar2;
                tempChar2 = pop(s).datachar;
                strncat(postfix, &tempChar2, 1);
                strcat(postfix, oneSpace);
            }
            pop(s);
            ptr++;
        }
        else
        {
            if(negativeInteger(infix,infix[ptr],ptr))
            {
                char temp2[256] = "";
                char tempChar3 = '-';
                strncat(temp2, &tempChar3, 1);
                strcpy(tempInfix, infix);
                temp = strtok(tempInfix + ptr, " +-)(*/^vml!%CP");
                ptr += strlen(temp) + 1;
                strcat(temp2, temp);
                strcat(postfix, temp2);
                strcat(postfix, oneSpace);
            }
            else
            {
                strcpy(tempInfix,infix);
                temp = strtok(tempInfix + ptr, " +-)(*/^vml!%CP");
                ptr+=strlen(temp);
                if (infix[ptr] == '!'){
		        	sscanf (temp, "%f", &x);
					x = faktorial(x);
		        	sprintf(temp, "%g", x);
		        	ptr++;
				}else if(infix[ptr] == '%'){
		        	sscanf (temp, "%f", &x);
					x = x/100;
		        	sprintf(temp, "%g", x);
		        	ptr++;
				}
                strcat(postfix, temp);
                strcat(postfix, oneSpace);
            }
        }
    }
    while(!isEmpty(s))
    {
        char tempChar6 = pop(s).datachar;
        strncat(postfix, &tempChar6, 1);
        strcat(postfix,oneSpace);
    }
    return postfix;
}

float hitungIsiPostfix(char postFix[])
{
    float a, b;
    Stack *stack = alloc();
    char *token = strtok(postFix," ");

    while(token != NULL)
    {
        if(isNumber(token))
        {
            push(stack, atof(token));
        }
        else if(isOperator(*token))
        {
            a = pop(stack).datafloat;
            b = pop(stack).datafloat;
            switch(*token)
            {
            case '+':
                push(stack, pertambahan(b, a));
                break;
            case '-':
                push(stack, pengurangan(b, a));
                break;
            case '*':
                push(stack, perkalian(b, a));
                break;
            case '/':
                push(stack, pembagian(b, a));
                break;
            case '^':
                push(stack, eksponen (b, a));
                break;
            case 'v':
                push(stack, akar(a, b));
                break;
            case 'm':
                push(stack, modulus(b, a));
                break;
            case 'l':
                push(stack, Logaritma(b,a));
                break;
            case 'C':
                push(stack, kombinasi(b,a));
                break;
            case 'P':
                push(stack, permutasi(b,a));
                break;
            default:
                break;
            }
        }
        token = strtok(NULL, " "); 
    }
    return pop(stack).datafloat;
}

void FiturLain()
{
	int fitur, lagi;
	
	do{
		header();
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==                                                    Aritmatika                                                              ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  1. Hitung Sigma                                                                                                           ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  2. Konversi Suhu                                                                                                          ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  3. Konversi Panjang                                                                                                       ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  4. Matriks                                                                                                               ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  5. Turunan                                                                                                               ==");
		puts	("\t\t\t\t\t================================================================================================================================");	
	
		do{
			printf ("\n\n\t\t\t\t\t\tPilih Fitur yang akan digunakan (berupa angka): ");
			scanf  ("%d", &fitur);
		
			switch (fitur){
				case 1 :	
					Sigma ();
					break;
					
				case 2 :	
					KonversiSuhu ();
					break;
					
				case 3 :
					KonversiPanjang ();
					break;

				case 4 :
					Matriks ();
					break;
				
				case 5 :
					TurunanPolinom ();
					break;
					
				default :
					printf ("\n\t\t\t\t\t\tFitur yang anda pilih tidak ada, silahkan pilih ulang\n");
			}
		} while (fitur < 1 || fitur > 5);
			
	    printf ("\n\n\t\t\t\t\t\tApakah anda ingin menggunakan fitur lainnya kembali? (y/t)");
	    lagi = getche();
	}while (lagi == 'y' || lagi == 'Y');
}

void Sigma()
{
	int pilih, lagi;
	float angka1;
	
	do{
		header();
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==                                                       Sigma                                                                ==");
		puts	("\t\t\t\t\t================================================================================================================================");	
		puts	("\t\t\t\t\t==  1. Sigma i                                                                                                                ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  2. Sigma i^2                                                                                                              ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  3. Sigma i^3                                                                                                              ==");
		puts	("\t\t\t\t\t================================================================================================================================");	
		do{
			printf ("\n\n\t\t\t\t\t\tPilih fitur yang akan digunakan (berupa angka): ");
			scanf  ("%d", &pilih);
		
			switch (pilih){
				case 1 :
					Input1Float(&angka1);
					printf ("\n\t\t\t\t\t\tHasil dari sigma n = 1 sampai %0.0f dari i adalah %0.2f\n", angka1, Sigmai(angka1));
					break;
					
				case 2 :
					Input1Float(&angka1);
					printf ("\n\t\t\t\t\t\tHasil dari sigma n = 1 sampai %0.0f dari i^2 adalah %0.2f\n", angka1, Sigmaidua(angka1));
					break;
					
				case 3 :
					Input1Float(&angka1);
					printf ("\n\t\t\t\t\t\tHasil dari sigma n = 1 sampai %0.0f dari i^3 adalah %0.2f\n", angka1, Sigmaitiga(angka1));
					break;
					
		
				default :
					printf ("\n\t\t\t\t\t\tFitur yang anda pilih tidak ada, silahkan pilih ulang\n");
			}
		} while (pilih != 1 && pilih != 2 && pilih != 3 );
		
	    printf ("\n\t\t\t\t\t\tApakah anda ingin menghitung sigma kembali? (y/t)");
	    lagi = getche();
	}while (lagi == 'y' || lagi == 'Y');
}

void KonversiSuhu()
{
	int pilih, lagi;
	float angka1;
	
	do{
		header();
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==                                                  Konversi Suhu                                                             ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  1. Celcius ke Farenheit, Reamur, dan Kelvin                                                                               ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  2. Farenheit ke Celcius, Reamur, dan Kelvin                                                                               ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  3. Reamur ke Celcius, Farenheit, dan Kelvin                                                                               ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  4. Kelvin ke Celcius, Farenheit, dan Reamu                                                                                ==");
		puts	("\t\t\t\t\t================================================================================================================================");
	
		do{
			printf ("\n\n\t\t\t\t\t\tPilih fitur yang akan digunakan (berupa angka): ");
			scanf  ("%d", &pilih);
		
			switch (pilih){
				case 1 :
					Input1Float(&angka1);
					printf ("\n\t\t\t\t\t\t%0.2f Celcius = %0.2f Farenheit\n", angka1, ConCelFahr(angka1));
					printf ("\n\t\t\t\t\t\t%0.2f Celcius = %0.2f Reamur\n", angka1, ConCelReam(angka1));
					printf ("\n\t\t\t\t\t\t%0.2f Celcius = %0.2f Kelvin\n", angka1, ConCelKelv(angka1));
					break;
					
				case 2 :
					Input1Float(&angka1);
					printf ("\n\t\t\t\t\t\t%0.2f Farenheit = %0.2f Celcius\n", angka1, ConFahrCel(angka1));
					printf ("\n\t\t\t\t\t\t%0.2f Farenheit = %0.2f Reamur\n", angka1, ConFahrReam(angka1));
					printf ("\n\t\t\t\t\t\t%0.2f Farenheit = %0.2f Kelvin\n", angka1, ConFahrKelv(angka1));
					break;
					
				case 3 :
					Input1Float(&angka1);
					printf ("\n\t\t\t\t\t\t%0.2f Reamur = %0.2f Celcius\n", angka1, ConReamCel(angka1));
					printf ("\n\t\t\t\t\t\t%0.2f Reamur = %0.2f Farenheit\n", angka1, ConReamFahr(angka1));
					printf ("\n\t\t\t\t\t\t%0.2f Reamur = %0.2f Kelvin\n", angka1, ConReamKelv(angka1));
					break;
					
				case 4 :
					Input1Float(&angka1);
					printf ("\n\t\t\t\t\t\t%0.2f Kelvin = %0.2f Celcius\n", angka1, ConKelvCel(angka1));
					printf ("\n\t\t\t\t\t\t%0.2f Kelvin = %0.2f Farenheit\n", angka1, ConKelvFahr(angka1));
					printf ("\n\t\t\t\t\t\t%0.2f Kelvin = %0.2f Reamur\n", angka1, ConKelvReam(angka1));
					break;
		
				default :
					printf ("\n\t\t\t\t\t\tFitur yang anda pilih tidak ada, silahkan pilih ulang\n");
			}
		} while (pilih != 1 && pilih != 2 && pilih != 3 && pilih != 4);
		
	    printf ("\n\t\t\t\t\t\tApakah anda ingin mengkonversi suhu kembali? (y/t)");
	    lagi = getche();
	}while (lagi == 'y' || lagi == 'Y');
}

void Matriks()
{
	int operan1, operan2;	
	int operan3, operan4;
	float matriks1[max][max];
	float matriks2[max][max];
	float hasil[max][max];
	int operasi1, pilih;
	char lagi;
	
	do {
		header();
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==                                                        Matriks                                                             ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  1. Pertambahan 2 matriks                                                                                                  ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  2. Pengurangan 2 Matriks                                                                                                  ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  3. Perkalian skalar matriks                                                                                               ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  4. Perkalian 2 matriks                                                                                                    ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  5. Transpose Matriks                                                                                                      ==");
		puts	("\t\t\t\t\t================================================================================================================================");
		puts	("\t\t\t\t\t==  6. Determinan Matriks                                                                                                     ==");
		puts	("\t\t\t\t\t================================================================================================================================");
			
		do{
			printf ("\n\n\t\t\t\t\t\tPilih operasi yang akan digunakan (berupa angka): ");
			scanf  ("%d", &operasi1);
			
			switch (operasi1){
				case 1 :
					pertambahanMatriks();
				    break;
					
				case 2 :
					penguranganMatriks();
				    break;
					
				case 3 :
					printf("\n\n\t\t\t\t\t\tInput jumlah baris matriks : "); 
					scanf("%d", &operan1);
					printf("\t\t\t\t\t\tInput jumlah kolom matriks : ");
					scanf("%d", &operan2);
					inputMatriks (matriks1, operan1, operan2);
					
					printf("\n\t\t\t\t\t\tMatriks : \n");
					printMatriks(matriks1, operan1, operan2);
					
					PerkalianSkalarMatriks(matriks1, operan1, operan2);
					printMatriks(matriks1, operan1, operan2);
				    break;
				    
				case 4 :
					printf("\n\n\t\t\t\t\t\tInput jumlah baris matriks : "); 
					scanf("%d", &operan1);
					printf("\t\t\t\t\t\tInput jumlah kolom matriks : ");
					scanf("%d", &operan2);
					inputMatriks (matriks1, operan1, operan2);
					
					printf("\n\n\t\t\t\t\t\tInput jumlah baris matriks : "); 
					scanf("%d", &operan3);
					printf("\t\t\t\t\t\tInput jumlah kolom matriks : ");
					scanf("%d", &operan4);
					inputMatriks (matriks2, operan3, operan4);
					
					printf("\n\t\t\t\t\t\tMatriks 1 : \n");
					printMatriks(matriks1, operan1, operan2);
					printf("\n\t\t\t\t\t\tMatriks 2 : \n");
					printMatriks(matriks2, operan3, operan4);
					
					Perkalian2Matriks(matriks1, matriks2, hasil, operan1, operan2, operan4);
					printf("\n\t\t\t\t\t\tMatriks 1 setelah dikali dengan matriks 2:\n");
					printMatriks(hasil, operan1, operan4);
				    break;
				    
		//		case 5 :
		//			inputMatriks (matriks1, &operan1, &operan2);
		//			transposeMatriks (matriks1, hasil, operan1, operan2);
		//			printf("\n\t\t\t\t\t\tMatriks setelah ditranspose:\n");
		//			printMatriks(hasil, operan2, operan1);
		//		    break;
					
				case 6 :
					determinanMatriks();
				    break;
		
				default :
					printf ("\n\t\t\t\t\t\tFitur yang anda pilih tidak ada, silahkan pilih ulang\n");
			
			}
		} while (pilih < 1 && pilih > 6);
		
	    printf ("\n\t\t\t\t\t\tApakah anda ingin menghitung matriks kembali? (y/t)");
	    lagi = getche();
	}while (lagi == 'y' || lagi == 'Y');
}

void Perkalian2Matriks(float mat1[max][max], float mat2[max][max], float hasil[max][max], int baris1, int kolom1, int kolom2)
{
	int i, j, k;
    for (i = 0; i < baris1; i++)
    {
        for (j = 0; j < kolom2; j++)
        {
            hasil[i][j] = 0;
            for (k = 0; k < kolom1; k++)
            {
                hasil[i][j] = hasil[i][j] + (mat1[i][k] * mat2[k][j]);
            }
        }
    }
}

void PerkalianSkalarMatriks(float matriks[max][max], int baris, int kolom)
{
	int pengali, i, j;
	
	printf ("\n\t\t\t\t\t\tMasukkan pengali : ");
	scanf  ("%d", &pengali);
	i = 1;
	while (i <= baris) {
	   	j = 1;
	    while (j <= kolom) {
		    matriks[i-1][j-1] = pengali * matriks[i-1][j-1];
		    j++;
		}
		i++;
	}
	printf("\n\t\t\t\t\t\tMatriks setelah dikali skalar dengan %d :\n", pengali);
}

void Input1Int(int *angka)
{
	printf ("\n\t\t\t\t\t\tMasukkan operan : ");
	scanf  ("%d", &(*angka));
}

void Input2Int(int *angka1, int *angka2)
{
	printf ("\n\t\t\t\t\t\tMasukkan operan pertama: ");
	scanf  ("%d", &(*angka1));
	printf ("\n\t\t\t\t\t\tMasukkan operan kedua: ");
	scanf  ("%d", &(*angka2));
}

void Input1Double(double *angka)
{
	printf ("\n\t\t\t\t\t\tMasukkan operan : ");
	scanf  ("%lf", &(*angka));
}

void Input1Float(float *angka)
{
	printf ("\n\t\t\t\t\t\tMasukkan operan : ");
	scanf  ("%f", &(*angka));
}
