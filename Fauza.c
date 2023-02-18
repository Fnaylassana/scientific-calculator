#include "Fauza.h"
#include "naufal.h"
#include "Hasby.h"
#include "aulianf.h"
#include "aryagara2.h"

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

///MOHAMED FARID ABDELAZIZ SALAMA 6905
///ADHAM MOHAMED ALY ABDELHAMID 6744


void kalkulator()
{
    char infixExpr[256];
    char lagi = 'y';
	char*x;
    float result;
    
    while(lagi == 'y' || lagi == 'Y')
    {
    	system ("cls");
    	
    	printf("\nMasukkan operasi yang akan anda hitung (tanpa spasi): ");
    	scanf ("%s", &infixExpr);
	    char postfixExpr[256] = "";
        replaceNewLineBySpace(infixExpr);
        x=removespaces(infixExpr);
        printf("Postfix : %s\n",infixToPostfix(x, postfixExpr));
        result = evaluatePostfix(postfixExpr);
        printf("Hasilnya adalah: %0.0f\n\n", result);
        printf ("Apakah anda ingin menghitung kembali? (y/t)");
        lagi = getche();
    }
}

Stack* initialize()
{
    Stack *s = malloc(sizeof(Stack));
    s->top=-1;
    return s;
}

int isEmpty(Stack *s)
{
    return s->top == -1;
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

int isFull(Stack *s)
{
    return s->top==255;
}

int priority(char c)
{
    if (c=='+' || c=='-') return 1;
    else if (c=='*' || c=='/') return 2;
    else if (c=='^') return 3 ;
    return 0;
}

int isOperator(char c)
{
    if( c=='(' || c=='+' || c=='-' || c=='/' || c=='*' || c=='^') return 1;
    else return 0;
}

int negativeInteger(char *infix,char c,int ptr)
{
    if (ptr == 0 && c == '-' ) return 1;
    else  if((isOperator(infix[ptr-1]) && c == '-' ) )return 1;
    else return 0;
}

int isAfter(Stack *s)
{
    if(s->item[s->top].datachar == '(' ) return 1;
    else return 0;
}

char * removespaces(char * infix)
{

    char* x=malloc(266*sizeof(char));
    int i,j;
    for(i=0,j=0; infix[i]!='\0'; i++,j++)
    {

        while(infix[j]==' ')
            j++;
        x[i]=infix[j];
    }
    x[i]='\0';
    return x;
}

char *infixToPostfix(char *infix,char *postfix)
{
    char oneSpace[] = " ", tempInfix[256];
    int  ptr = 0;
    char *temp;
    Stack *s = initialize();

    while(infix[ptr] != '\0' )
    {

        if(isOperator(infix[ptr]) && !negativeInteger(infix,infix[ptr],ptr))
        {
            if(infix[ptr] == '(' )
            {
                pushChar(s,infix[ptr]); //(1+
                ptr++;
            }
            else if(isAfter(s))
            {
                pushChar(s,infix[ptr]);
                ptr++;
            }
            else if(priority(infix[ptr]) > priority(top(s).datachar) || isEmpty(s))
            {
                pushChar(s,infix[ptr]);
                ptr++;
            }
            else if(priority(infix[ptr])==priority(top(s).datachar))
            {
                char tempchar=pop(s).datachar;
                strncat(postfix,&tempchar,1);
                pushChar(s,infix[ptr]);
                ptr++;
                strcat(postfix,oneSpace);
            }
            else if(priority(infix[ptr]) <priority(top(s).datachar) && top(s).datachar != '(' && top(s).datachar != ')')
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
                temp = strtok(tempInfix + ptr, " +-)(*/^");
                ptr += strlen(temp) + 1;
                strcat(temp2, temp);
                strcat(postfix, temp2);
                strcat(postfix, oneSpace);
            }
            else
            {
                strcpy(tempInfix,infix);
                temp = strtok(tempInfix + ptr, " +-)(*/^");
                ptr+=strlen(temp);
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

void replaceNewLineBySpace(char *s)
{
    char *s1 = s;
    while((s1 = strstr(s1, "\n")) != NULL)
        *s1 = ' ';
}

/// This function checks if a given token is a number ( positive or negative )
int isNumber(char *token)
{
    return isdigit(*token) || ( *token == '-' && isdigit(token[1]) );
}

/// This function evaluates a postfix expression and returns the result
float evaluatePostfix(char postFix[])
{
    float a, b;
    Stack *stack = initialize();
    char *token = strtok(postFix," ");

    while(token != NULL)
    {
        // The following condition checks if the token is a number. If so, it is converted to float and pushed into the stack
        if(isNumber(token))
        {
            push(stack, atof(token));
        }
        // The following condition checks if the token is an operator. If so, the top two elements are popped to undergo the respective operation
        // The result is then pushed back into the stack
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
            default:
                break;
            }
        }
        token = strtok(NULL, " "); //Proceed with tokenization
    }
    return pop(stack).datafloat;
}

void FiturLain()
{
	int fitur, lagi;
	
	do{
		system ("cls");
		printf ("\nPilih Fitur :");
		printf ("\n\t1. Hitung Trigonometri");
		printf ("\n\t2. Hitung Logaritma");
		printf ("\n\t3. Hitung Sigma");
		printf ("\n\t4. Hitung Faktorial");
		printf ("\n\t5. Hitung Modulus");
		printf ("\n\t6. Hitung Kombinasi");
		printf ("\n\t7. Hitung Permutasi");
		printf ("\n\t8. Konversi Suhu");
	
		do{
			printf ("\n\nPilih Fitur yang akan digunakan (berupa angka): ");
			scanf  ("%d", &fitur);
		
			switch (fitur){
	//			case 1 :	
	//				Trigonometri();
	//				break;
					
				case 2 :	
					Logaritma();
					break;
					
				case 3 :
					Sigma ();
					break;

				case 4 :
					Faktorial ();
					break;
				
				case 5 :
					Modulus ();
					break;

//				case 6 :
//					Kombinasi ();
//					break;
//				
//				case 7 :
//					Permutasi ();
//					break;
						
				default :
					printf ("\nFitur yang anda pilih tidak ada, silahkan pilih ulang\n");
			}
		} while (fitur < 1 || fitur > 8);
			
	    printf ("\n\nApakah anda ingin menggunakan fitur lainnya kembali? (y/t)");
	    lagi = getche();
	}while (lagi == 'y' || lagi == 'Y');
}

void Logaritma()
{
	int pilih, lagi;
	int angka1;
	double angka2;
	
	do{
		system ("cls");
		printf ("\nPilih Fitur :");
		printf ("\n\t1. Logaritma 10");
		printf ("\n\t2. Logaritma Natural");
	
		do{
			printf ("\n\nPilih fitur yang akan digunakan (berupa angka): ");
			scanf  ("%d", &pilih);
		
			switch (pilih){
				case 1 :
					Input1Int(&angka1);
					printf ("\nHasil dari 10 log %d adalah %d\n", angka1, Log(angka1));
					break;
					
				case 2 :	
					Input1Double(&angka2);
					printf ("\nHasil dari log %0.0lf adalah %lf\n", angka2, hitungLog(angka2));
					break;
		
				default :
					printf ("\nFitur yang anda pilih tidak ada, silahkan pilih ulang\n");
			}
		} while (pilih != 1 && pilih != 2);
		
	    printf ("\nApakah anda ingin menghitung logaritma kembali? (y/t)");
	    lagi = getche();
	}while (lagi == 'y' || lagi == 'Y');
}

void Sigma()
{
	int pilih, lagi;
	float angka1;
	
	do{
		system ("cls");
		printf ("\nPilih Fitur :");
		printf ("\n\t1. Sigma i");
		printf ("\n\t2. Sigma i^2");
		printf ("\n\t3. Sigma i^3");
	
		do{
			printf ("\n\nPilih fitur yang akan digunakan (berupa angka): ");
			scanf  ("%d", &pilih);
		
			switch (pilih){
				case 1 :
					Input1Float(&angka1);
					printf ("\nHasil dari sigma n = 1 sampai %0.0f dari i adalah %0.2f\n", angka1, Sigmai(angka1));
					break;
					
				case 2 :
					Input1Float(&angka1);
					printf ("\nHasil dari sigma n = 1 sampai %0.0f dari i^2 adalah %0.2f\n", angka1, Sigmaidua(angka1));
					break;
					
				case 3 :
					Input1Float(&angka1);
					printf ("\nHasil dari sigma n = 1 sampai %0.0f dari i^3 adalah %0.2f\n", angka1, Sigmaitiga(angka1));
					break;
					
		
				default :
					printf ("\nFitur yang anda pilih tidak ada, silahkan pilih ulang\n");
			}
		} while (pilih != 1 && pilih != 2 && pilih != 3 );
		
	    printf ("\nApakah anda ingin menghitung sigma kembali? (y/t)");
	    lagi = getche();
	}while (lagi == 'y' || lagi == 'Y');
}

void Faktorial()
{
	int lagi;
	int angka1, hasil;
	
	do{
		Input1Int(&angka1);
		hasil = faktorial (angka1);
		printf ("\n%d! adalah %d", angka1, angka1);
		angka1 = angka1 - 1;
		
		do{
			printf (" * %d", angka1);
			angka1 = angka1 - 1;
		}while (angka1 >=1);
		
		printf (", sehingga hasilnya adalah %d\n", hasil );

	    printf ("\nApakah anda ingin menghitung faktorial kembali? (y/t)");
	    lagi = getche();
	}while (lagi == 'y' || lagi == 'Y');
}


void Modulus()
{
	int lagi;
	int angka1, angka2;
	
	do{
		Input2Int(&angka1, &angka2);
		printf ("\nHasil dari %d mod %d adalah %d\n", angka1, angka2, modulus(angka1, angka2));

	    printf ("\nApakah anda ingin menghitung modulus kembali? (y/t)");
	    lagi = getche();
	}while (lagi == 'y' || lagi == 'Y');
}

//void Kombinasi()
//{
//	int lagi;
//	int angka1, angka2;
//	
//	do{
//		Input2Int(&angka1, &angka2);
//		printf ("\nHasil dari %d mod %d adalah %d\n", angka1, angka2, modulus(angka1, angka2));
//
//	    printf ("\nApakah anda ingin menghitung modulus kembali? (y/t)");
//	    lagi = getche();
//	}while (lagi == 'y' || lagi == 'Y');
//}
//
//void Permutasi()
//{
//	int lagi;
//	int angka1, angka2;
//	
//	do{
//		Input2Int(&angka1, &angka2);
//		printf ("\nHasil dari %d mod %d adalah %d\n", angka1, angka2, modulus(angka1, angka2));
//
//	    printf ("\nApakah anda ingin menghitung modulus kembali? (y/t)");
//	    lagi = getche();
//	}while (lagi == 'y' || lagi == 'Y');
//}

void Input1Int(int *angka)
{
	printf ("\nMasukkan operan : ");
	scanf  ("%d", &(*angka));
}

void Input2Int(int *angka1, int *angka2)
{
	printf ("\nMasukkan operan pertama: ");
	scanf  ("%d", &(*angka1));
	printf ("\nMasukkan operan kedua: ");
	scanf  ("%d", &(*angka2));
}

void Input1Double(double *angka)
{
	printf ("\nMasukkan operan : ");
	scanf  ("%lf", &(*angka));
}

void Input1Float(float *angka)
{
	printf ("\nMasukkan operan : ");
	scanf  ("%f", &(*angka));
}
