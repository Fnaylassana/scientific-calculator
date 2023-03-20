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

double Mutlak (double nilai){
	
	if (nilai < 0){
		nilai = nilai * -1;
	}
	
	return nilai;
}

double Persen (double nilai){
	
	nilai = nilai/100;
	
	return nilai;
}

////Referensi:
///MOHAMED FARID ABDELAZIZ SALAMA 6905
///ADHAM MOHAMED ALY ABDELHAMID 6744

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

void push(Stack *s, double val)
{
    s->item[++s->top].datadouble = val;
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
			if (c=='C' || c=='P'){
				return 3 ;
			} else {
				if (c=='e'){
					return 4 ;
				} else {
					if (c=='^' || c=='v'){
						return 5 ;
					} else {
						return 0;
					}
				}
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

int isOperator2(char c)
{
    if(c=='!' || c == '%'|| c=='|' || c == 'L'|| c=='p' || c == 'n' || c == 'z'|| c=='Z' || c == 'E' || c=='i' || c=='I' || c=='s' || c=='S' || c=='o' || c=='O' || c=='a' || c=='A' || c=='t' || c=='T' || c=='g' || c=='G') {
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
    double x;
    int y, mutlak=0;
    char *temp, *temp2, *temp3;
    Stack *s = alloc();

    while(infix[ptr] != '\0' && *cek != 1)
    {
    	if(infix[ptr]=='c' && isNumber(&infix[ptr+1])){
    		infix[ptr] = 'C';
		}
		if(infix[ptr]=='p' && isNumber(&infix[ptr+1])){
    		infix[ptr] = 'P';
		}
    	else if(infix[ptr]=='s'|| infix[ptr]=='c'|| infix[ptr]=='t'|| infix[ptr]=='m' || (infix[ptr]=='l' )){
            if ((infix[ptr+2] != '(' && infix[ptr+3] != '(' && infix[ptr+4] != '(' && infix[ptr+5] != '(')){
	        	*cek = 1;
			}
			else{
	    		strcpy(tempInfix,infix);
	        	temp = strtok(tempInfix + ptr, "( ");
	        	y = ptr;
	            ptr+=strlen(temp);
	        	if (infix[y]=='s' && infix[y+1]=='i' && infix[y+3]=='r'){
	                pushChar(s,'I'); 
				}
				else if (infix[y]=='s' && infix[y+1]=='i' && infix[y+2]=='g'){
					if(infix[y+4] == '1'){
						pushChar(s,'z'); 
					}
					else if(infix[y+4] == '2'){
						pushChar(s,'Z'); 
					}
					else if(infix[y+4] == '3'){
						pushChar(s,'E'); 
					}
				}
				else if (infix[y]=='s' && infix[y+1]=='i'){
	                pushChar(s,'i'); 
				}
				else if (infix[y]=='c' && infix[y+1]=='s' && infix[y+3]=='r'){
	                pushChar(s,'S'); 
				}
				else if (infix[y]=='c' && infix[y+1]=='s'){
	                pushChar(s,'s'); 
				}
				else if (infix[y]=='c' && infix[y+2]=='s' && infix[y+3]=='r'){
	                pushChar(s,'O'); 
				}
				else if (infix[y]=='c' && infix[y+2]=='s'){
	                pushChar(s,'o'); 
				}
				else if (infix[y]=='s' && infix[y+1]=='e' && infix[y+3]=='r'){
	                pushChar(s,'A'); 
				}
				else if (infix[y]=='s' && infix[y+1]=='e'){
	                pushChar(s,'a'); 
				}
				else if (infix[y]=='t' && infix[y+3]=='r'){
	                pushChar(s,'T'); 
				}
				else if (infix[y]=='t'){
	                pushChar(s,'t'); 
				}
				else if (infix[y]=='c' && infix[y+2]=='t' && infix[y+3]=='r'){
	                pushChar(s,'G'); 
				}
				else if (infix[y]=='c' && infix[y+2]=='t'){
	                pushChar(s,'g'); 
				}
				else if (infix[y]=='l' && infix[y+1]=='n'){
	                pushChar(s,'n'); 
		        }
				else if (infix[y]=='l' && infix[y+1]=='o' && !isNumber(&infix[y-1])){
	                pushChar(s,'L'); 
				}
				else if (infix[y]=='m'){
	                pushChar(s,'m'); 
				}
				else if (infix[y]=='l' && isNumber(&infix[y-1])){
	                pushChar(s,'l'); 
		    	}
			}
		}
		else if (infix[ptr]=='p'){
            strcat(postfix, "p");
            strcat(postfix, oneSpace);
            ptr+=2;
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
            
            if (isOperator2(top(s).datachar))
			{
                char tempChar2;
                tempChar2 = pop(s).datachar;
                strncat(postfix, &tempChar2, 1);
                strcat(postfix, oneSpace);
			}
            ptr++;
        }
        else if(infix[ptr]==' ')
        {
            ptr++;
        }
        else if (isNumber(&infix[ptr]))
        {
            if(negativeInteger(infix,infix[ptr],ptr))
            {
                char temp2[256] = "";
                char tempChar3 = '-';
                strncat(temp2, &tempChar3, 1);
                strcpy(tempInfix, infix);
                temp = strtok(tempInfix + ptr, " +-)(*/^vml!%cp|e,`~@#$&][{}:;''<>.?\"qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM");
                ptr += strlen(temp) + 1;
                strcat(temp2, temp);
                strcat(postfix, temp2);
                strcat(postfix, oneSpace);
            }
            else
            {
                strcpy(tempInfix,infix);
                temp = strtok(tempInfix + ptr, " +-)(*/^vml!%cp|e,`~@#$&][{}:;''<>.?\"qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM");
                ptr+=strlen(temp);
                strcat(postfix, temp);
                strcat(postfix, oneSpace);
            }
        }
        else if (infix[ptr] == '!'){
        	strcat(postfix, "!");
            strcat(postfix, oneSpace);
            ptr++;
		}
		else if (infix[ptr] == '%'){
        	strcat(postfix, "%");
            strcat(postfix, oneSpace);
            ptr++;
		}
		else{
	        *cek = 1;
	        ptr++;
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

double hitungIsiPostfix(char postFix[], int *cek)
{
    double a, b;
    Stack *stack = alloc();
    char *token = strtok(postFix," ");

    while(token != NULL && *cek != 1)
    {
        if(isNumber(token))
        {
            push(stack, atof(token));
        }
        else if(isOperator(*token))
        {
            a = pop(stack).datadouble;
            b = pop(stack).datadouble;
            switch(*token){
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
	            	if (a == 0){
	            		printf ("\t\t\t\t\t\tPenyebut = 0, nilai tidak terdefinisi, masukkan input kembali");
	        			*cek = 1;
					} else{
						push(stack, pembagian(b, a));
					}
	                break;
	            case '^':
	                push(stack, eksponen (b, a));
	                break;
	            case 'v':
	            	if (a < 0){
	            		if (modulus(b,2) == 0){
	            			printf ("\t\t\t\t\t\tNilai di dalam akar tidak boleh minus, masukkan input kembali", a);
	        				*cek = 1;
						} else{
							push(stack, (-1*akar(Mutlak(a), b)));
						}
					} else{
						push(stack, akar(a, b));
					}
	                break;
	            case 'm':
	                push(stack, modulus(b, a));
	                break;
	            case 'l':
	                push(stack, Logaritma(a,b));
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
        }
		else if (*token == 'p'){
			push(stack, pi);
		} 
		else if(isOperator2(*token)){
            a = pop(stack).datadouble;
            switch (*token){
            	case '!' :
            		push(stack, faktorial(a));
					break;
				case '%' :																	
					push(stack, Persen(a));
					break;
            	case '|' :
            		push(stack, Mutlak(a));
					break;
				case 'i' :																	//sin dengan input derajat
					push(stack, sinDerajat(a));
					break;
				case 'I' :																	//sin dengan input radian
					push(stack, sinRad(a));
					break;
            	case 's' :																	//cosecan dengan input derajat
	        		if (a == 0 || a == 180 || a == 360 || a == 540){
	        			printf ("\t\t\t\t\t\tNilai csc(%g) tidak terdefinisi", a);
	        			*cek = 1;
					}
            		push(stack, cosecDerajat(a));
					break;
				case 'S' :																	//cosecan dengan input radian
	        		if (a == 0 || a == 180 || a == 360 || a == 540){
	        			printf ("\t\t\t\t\t\tNilai csc(%g) tidak terdefinisi", a);
	        			*cek = 1;
					}
					push(stack, cosecRad(a));
					break;
				case 'o' :																	//cos dengan input derajat
					push(stack, cosNilai(a));
					break;
				case 'O' :																	//cos dengan input radian
					push(stack, cosRad(a));
					break;
				case 'a' :																	//secan dengan input derajat
	        		if (a == 90 || a == 270 || a == 450){
	        			printf ("\t\t\t\t\t\tNilai sec(%g) tidak terdefinisi", a);
	        			*cek = 1;
					}
					push(stack, secDerajat(a));
					break;
            	case 'A' :																	//secan dengan input radian
	        		if (a == 90 || a == 270 || a == 450){
	        			printf ("\t\t\t\t\t\tNilai sec(%g) tidak terdefinisi", a);
	        			*cek = 1;
					}
            		push(stack, secRad(a));
					break;
				case 't' :																	//tan dengan input derajat
	        		if (a == 90 || a == 270 || a == 450){
	        			printf ("\t\t\t\t\t\tNilai tan(%g) tidak terdefinisi", a);
	        			*cek = 1;
					}
					push(stack, tanDerajat(a));
					break;
				case 'T' :																	//tan dengan input radian
	        		if (a == 90 || a == 270 || a == 450){
	        			printf ("\t\t\t\t\t\tNilai tan(%g) tidak terdefinisi", a);
	        			*cek = 1;
					}
					push(stack, tanRad(a));
					break;
				case 'g' :																	//cotangen dengan input derajat
	        		if (a == 0 || a == 90 || a == 180 || a == 360 || a == 540){
	        			printf ("\t\t\t\t\t\tNilai cot(%g) tidak terdefinisi", a);
	        			*cek = 1;
					} else {
						push(stack, cotDerajat(a));
					}
					break;
				case 'G' :																	//cotangen dengan input radian
	        		if (a == 0 || a == 90 || a == 180 || a == 360 || a == 540){
	        			printf ("\t\t\t\t\t\tNilai cot(%g) tidak terdefinisi", a);
	        			*cek = 1;
					} else {
						push(stack, cotRad(a));
					}
					break;	
				case 'n' :																	//hitung logaritma natural
					push(stack, hitungLog(a));
					break;
				case 'L' :																	//hitung logaritma 10
					push(stack, Log(a));
					break;
				case 'z' :																	//sigma i
	        		push(stack, Sigmai(a));
					break;	
				case 'Z' :																	//sigma i kuadrat
					push(stack, Sigmaidua(a));
					break;
				case 'E' :																	//sigma i kubik
					push(stack, Sigmaitiga(a));
					break;
	            default:
	                break;
			}
		} 
        token = strtok(NULL, " "); 
    }
    return pop(stack).datadouble;
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

void Input1Float(double *angka)
{
	printf ("\n\t\t\t\t\t\tMasukkan operan : ");
	scanf  ("%f", &(*angka));
}
