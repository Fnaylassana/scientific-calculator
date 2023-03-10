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
	puts	("\t\t\t\t\t==                                    CALCULATOR PROGRAM (Right Associative)                                                  ==");
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
		puts	("\t\t\t\t\t==  11. xCy untuk operasi kombinasi (dengan penulisan C berupa huruf kapital)                                                      ==");
		puts	("\t\t\t\t\t==  12. xPy untuk operasi permutasi (dengan penulisan P berupa huruf kapital)                                                      ==");
		puts	("\t\t\t\t\t==  13. x^y untuk operasi pangkat (dengan y sebagai pangkat)                                                                       ==");
		puts	("\t\t\t\t\t==  14. xvy untuk operasi akar (dengan v tidak kapital dan x akar pangkat y)                                                       ==");
		puts	("\t\t\t\t\t==  15. sin(x) untuk operasi sinus (dengan penulisan harus spesifik seperti contoh dan x berupa derajat)                           ==");
		puts	("\t\t\t\t\t==  16. sinR(x) untuk operasi sinus (dengan penulisan harus spesifik seperti contoh dan x berupa radian)                           ==");
		puts	("\t\t\t\t\t==  17. cos(x) untuk operasi cosinus (dengan penulisan harus spesifik seperti contoh dan x berupa derajat)                         ==");
		puts	("\t\t\t\t\t==  18. cosR(x) untuk operasi cosinus (dengan penulisan harus spesifik seperti contoh dan x berupa radian)                         ==");
		puts	("\t\t\t\t\t==  19. tan(x) untuk operasi tangen (dengan penulisan harus spesifik seperti contoh dan x berupa derajat)                          ==");
		puts	("\t\t\t\t\t==  20. tanR(x) untuk operasi tangen (dengan penulisan harus spesifik seperti contoh dan x berupa radian)                          ==");
		puts	("\t\t\t\t\t==  21. csc(x) untuk operasi cosecan (dengan penulisan harus spesifik seperti contoh dan x berupa derajat)                         ==");
		puts	("\t\t\t\t\t==  22. cscR(x) untuk operasi cosecan (dengan penulisan harus spesifik seperti contoh dan x berupa radian)                         ==");
		puts	("\t\t\t\t\t==  23. sec(x) untuk operasi secan (dengan penulisan harus spesifik seperti contoh dan x berupa derajat)                           ==");
		puts	("\t\t\t\t\t==  24. secR(x) untuk operasi secan (dengan penulisan harus spesifik seperti contoh dan x berupa radian)                           ==");
		puts	("\t\t\t\t\t==  25. cot(x) untuk operasi cotangen (dengan penulisan harus spesifik seperti contoh dan x berupa derajat)                        ==");
		puts	("\t\t\t\t\t==  26. cotR(x) untuk operasi cotangen (dengan penulisan harus spesifik seperti contoh dan x berupa radian) 		   	   ==");
		puts	("\t\t\t\t\t==  27. log(x) untuk operasi logaritma 10 (dengan penulisan log yang harus spesifik seperti contoh)                                ==");
		puts	("\t\t\t\t\t==  28. ln(x) untuk operasi logaritma natural (dengan penulisan ln yang harus spesifik seperti contoh)                             ==");
		puts	("\t\t\t\t\t==  29. ylog(x) untuk operasi logaritma basis bebas (dengan penulisan log yang harus spesifik seperti contoh dan y sebagai basis)  ==");
		puts	("\t\t\t\t\t==  30. xey untuk euler (x * 10^y)                                                                                                 ==");
		puts	("\t\t\t\t\t=====================================================================================================================================");
    	
    	
    		ulang = 0;	    	
	    	printf ("\n\t\t\t\t\t\tMasukkan operasi yang akan anda hitung (tanpa spasi): ");
	    	scanf ("%s", &input);
			char postfix[256] = "";
	    	temp = infixToPostfix(input, postfix, &ulang);
	    	
	    	if (ulang){
	    		getche();
	    		goto awal;
			}
			
		    printf("\t\t\t\t\t\tPostfix : %s\n",temp);                                                                  
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
			if (c=='^' || c=='v' || c=='m' || c=='l' || c=='C' || c=='P' || c=='e'){
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
    if( c=='(' || c=='+' || c=='-' || c=='/' || c=='*' || c=='^' || c=='v' || c=='m' || c=='l' || c=='C' || c=='P' || c=='e') {
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
			if ((ptr == 1 || isOperator(infix[ptr-2])) && infix[ptr-1]=='|' && c == '-'  ) {
				return 1;
			}else
			return 0;
		}
	}
}

int isAfter(Stack *s)
{
    if(s->item[s->top].datachar == '(' || s->item[s->top].datachar == '|' ) return 1;
    else return 0;
}

char *infixToPostfix(char *infix,char *postfix, int *cek)
{
    char oneSpace[] = " ", tempInfix[256];
    int  ptr = 0;
    float x;
    int y, mutlak=0;
    char *temp, *temp2;
    Stack *s = alloc();

    while(infix[ptr] != '\0' )
    {
    	if(infix[ptr]=='s'|| infix[ptr]=='c'|| infix[ptr]=='t'|| infix[ptr]=='l'){
    		strcpy(tempInfix,infix);
        	temp = strtok(tempInfix + ptr, ")");
        	y = ptr;
            ptr+=strlen(temp)+1;
        	if (infix[y]=='s' && infix[y+3]=='('){
        		sscanf(temp, "sin(%f", &x);
        		x = sinDerajat(x);
        		sprintf(temp, "%g", x);
			}
			else if (infix[y]=='s' && infix[y+3]=='R'){
        		sscanf(temp, "sinR(%f", &x);
        		x = sinRad(x);
        		sprintf(temp, "%g", x);
			}
			else if (infix[y]=='c' && infix[y+1]=='s' && infix[y+3]=='('){
        		sscanf(temp, "csc(%f", &x);
        		if (x == 0 || x == 180 || x == 360 || x == 540){
        			printf ("\t\t\t\t\t\tNilai csc(%g) tidak terdefinisi", x);
        			*cek = 1;
				}
        		x = cosecDerajat(x);
        		sprintf(temp, "%g", x);
			}
			else if (infix[y]=='c' && infix[y+1]=='s' && infix[y+3]=='R'){
        		sscanf(temp, "cscR(%f", &x);
        		if (x == 0 || x == 180 || x == 360 || x == 540){
        			printf ("\t\t\t\t\t\tNilai csc(%g) tidak terdefinisi", x);
        			*cek = 1;
				}
        		x = cosecRad(x);
        		sprintf(temp, "%g", x);
			}
			else if (infix[y]=='c' && infix[y+3]=='('){
        		sscanf(temp, "cos(%f", &x);
        		x = cosNilai(x);
        		sprintf(temp, "%0.2f", x);
			}
			else if (infix[y]=='c' && infix[y+3]=='R'){
        		sscanf(temp, "cosR(%f", &x);
        		x = cosRad(x);
        		sprintf(temp, "%f", x);
			}
			else if (infix[y]=='s' && infix[y+1]=='e' && infix[y+3]=='('){
        		sscanf(temp, "sec(%f", &x);
        		if (x == 90 || x == 270 || x == 450){
        			*cek = 1;
				}
        		x = secDerajat(x);
        		sprintf(temp, "%f", x);
			}
			else if (infix[y]=='s' && infix[y+1]=='e' && infix[y+3]=='R'){
        		sscanf(temp, "secR(%f", &x);
        		if (x == 90 || x == 270 || x == 450){
        			printf ("\t\t\t\t\t\tNilai sec(%g) tidak terdefinisi", x);
        			*cek = 1;
				}
        		x = secRad(x);
        		sprintf(temp, "%f", x);
			}
			else if (infix[y]=='t' && infix[y+3]=='('){
        		sscanf(temp, "tan(%f", &x);
        		if (x == 90 || x == 270 || x == 450){
        			printf ("\t\t\t\t\t\tNilai sec(%g) tidak terdefinisi", x);
        			*cek = 1;
				}
        		x = tanDerajat(x);
        		sprintf(temp, "%g", x);
			}
			else if (infix[y]=='t' && infix[y+3]=='R'){
        		sscanf(temp, "tanR(%f", &x);
        		if (x == 90 || x == 270 || x == 450){
        			printf ("\t\t\t\t\t\tNilai tan(%g) tidak terdefinisi", x);
        			*cek = 1;
				}
        		x = tanRad(x);
        		sprintf(temp, "%g", x);
			}
			else if (infix[y]=='c' && infix[y+1]=='o' && infix[y+3]=='('){
        		sscanf(temp, "cot(%f", &x);
        		if (x == 0 || x == 90 || x == 180 || x == 360 || x == 540){
        			printf ("\t\t\t\t\t\tNilai cot(%g) tidak terdefinisi", x);
        			*cek = 1;
				}
        		x = cotDerajat(x);
        		sprintf(temp, "%g", x);
			}
			else if (infix[y]=='c' && infix[y+1]=='o' && infix[y+3]=='R'){
        		sscanf(temp, "cotR(%f", &x);
        		if (x == 0 || x == 90 || x == 180 || x == 360 || x == 540){
        			printf ("\t\t\t\t\t\tNilai cot(%g) tidak terdefinisi", x);
        			*cek = 1;
				}
        		x = cotRad(x);
        		sprintf(temp, "%g", x);
			}
			else if (infix[y]=='l' && infix[y+1]=='n'){
				sscanf(temp, "ln(%f", &x);
	       		x = hitungLog(x);
	        	sprintf(temp, "%g", x);
	        }
			else if (infix[y]=='l' && isNumber(&infix[y-1])){
	        	sscanf (temp, "log(%f", &x);
	        	sprintf(temp, "%g", x);
	        	*temp2 = 'l';
			}
			else if (infix[y]=='l' && infix[y+1]=='o'){
	        	sscanf (temp, "log(%f", &x);
	        	x = Log(x);
	        	sprintf(temp, "%g", x);
			}
	        
			strcat(postfix, temp);
	        strcat(postfix, oneSpace);
            
			if ((infix[y]=='l' && isNumber(&infix[y-1]))||infix[y]=='m'){
            	strcat(postfix, temp2);
        	    strcat(postfix, oneSpace);
			}
		}
		else if (infix[ptr]=='m' || infix[ptr]=='p'){
    		strcpy(tempInfix,infix);
        	temp = strtok(tempInfix + ptr, " +-*/^v!%CPe");
        	y = ptr;
            ptr+=strlen(temp);
            
			if (infix[y]=='m'){
	        	sscanf (temp, "mod%f", &x);
	        	sprintf(temp, "%g", x);
	        	*temp2 = 'm';
	            strcat(postfix, temp);
	            strcat(postfix, oneSpace);
            	strcat(postfix, temp2);
        	    strcat(postfix, oneSpace);
			}
			else if (infix[y]=='p'){
	        	sprintf(temp, "%g", pi);
	            strcat(postfix, temp);
	            strcat(postfix, oneSpace);
			}
			
		}
		else if(infix[ptr]=='|' && mutlak==1)
        {
            char tempChar2;
            while(top(s).datachar!='|')
            {
                tempChar2 = pop(s).datachar;
                strncat(postfix, &tempChar2, 1);
                strcat(postfix, oneSpace);
            }
            tempChar2 = pop(s).datachar;
            strncat(postfix, &tempChar2, 1);
            strcat(postfix, oneSpace);
            ptr++;
            mutlak = mutlak-1;
        }
        else if(infix[ptr] == '|' && mutlak==0)
        {
            pushChar(s,infix[ptr]);
            ptr++;
            mutlak+=1;
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
            else if(prioritas(infix[ptr]) <prioritas(top(s).datachar) && top(s).datachar != '(' && top(s).datachar != '|' && top(s).datachar != ')')
            {
                while(1)
                {
                    char tempChar;
                    if( isEmpty(s) ) break;
                    if( top(s).datachar == '(' ) break;
                    if( top(s).datachar == '|' ) break;
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
                temp = strtok(tempInfix + ptr, " +-)(*/^vml!%CP|e");
                ptr += strlen(temp) + 1;
                strcat(temp2, temp);
                strcat(postfix, temp2);
                strcat(postfix, oneSpace);
            }
            else
            {
                strcpy(tempInfix,infix);
                temp = strtok(tempInfix + ptr, " +-)(*/^vml!%CP|e");
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
            case 'e':
                push(stack, Eurel(b, a));
                break;
            default:
                break;
            }
        } else if(*token == '|'){
            a = pop(stack).datafloat;
            push(stack, HitungNilaiMutlak(a));
		}
        token = strtok(NULL, " "); 
    }
    return pop(stack).datafloat;
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
