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

int isEmpty(List1 s)
{
    return Top(s) == NULL;
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

int isNumber(address token)
{
	char c;
	c = *Info(token);
    return (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || negativeInteger(token));
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

int isOperator3(char c)
{
    if( c==')' || c==',' || c=='`' || c=='~' || c=='@' || c=='#' || c=='$' || c=='&' || c=='[' || c==']' || c=='{' || c=='}') {
		return 1;
	}else if( c==':' || c==';' || c==' ' || c=='"' || c=='<' || c=='>' || c=='.' || c=='?' || c=='\'' || c=='q' || c=='w') {
		return 1;
	}else if( c=='r' || c=='y' || c=='u' || c=='l' || c=='k' || c=='j' || c=='h' || c=='f' || c=='d' || c=='x' || c=='c' || c=='b' || c=='m') {
		return 1;
	}else{
		return 0;
	} 
}

int negativeInteger(address infix)
{
    if (Prev(infix) == NULL) {
    	if (*Info(infix) == '-'){
    		return 1;
		} else{
    		return 0;
		}
	}else if(isOperator(*Info(Prev(infix))) && *Info(infix) == '-' ){
		return 1;
	}else if ((Prev(Prev(infix)) == NULL || isOperator(*Info(Prev(Prev(infix))))) && *Info(Prev(infix)) =='|' && *Info(infix) == '-'  ) {
		return 1;
	}else{
		return 0;
	}
}

int isAfter(char c)
{
    if(c == '(' || c == '|' ) {
    	return 1;
	} else{
		return 0;
	}
}

address infixToPostfix(List input, int *cek)
{
	address infix;
	List postfix;
	List1 top;
    int mutlak=0;
    char *temp;
    char temp2;
    
    infix = Top(input);
    CreateList1(&top);
    CreateList(&postfix);

    while(infix != NULL && *cek != 1)
    {
    	if(*Info(infix)=='c' && isNumber(Next(infix))){
    		Info(infix) = "C";
		}
		if(*Info(infix)=='p' && isNumber(Next(infix))){
    		Info(infix) = "P";
		}
    	else if(*Info(infix) == 's'|| *Info(infix)=='c'|| *Info(infix)=='t'|| *Info(infix)=='m' || (*Info(infix)=='l' )){
            if ((*Info(Next(Next(infix))) != '(' && *Info(Next(Next(Next(infix)))) != '(' && *Info(Next(Next(Next(Next(infix))))) != '(' && *Info(Next(Next(Next(Next(Next(infix)))))) != '(')){
	        	*cek = 1;
			}
			else{
	        	if (*Info(infix)=='s' && *Info(Next(infix))=='i' && *Info(Next(Next(Next(infix))))=='r'){
	                PushChar(&top,'I'); 
				}
				else if (*Info(infix)=='s' && *Info(Next(infix))=='i' && *Info(Next(Next(infix)))=='g'){
					if(*Info(Next(Next(Next(Next(infix))))) == '1'){
	                	PushChar(&top,'z'); 
					}
					else if(*Info(Next(Next(Next(Next(infix))))) == '2'){
	                	PushChar(&top,'Z'); 
					}
					else if(*Info(Next(Next(Next(Next(infix))))) == '3'){
	                	PushChar(&top,'E'); 
					}
				}
				else if (*Info(infix)=='s' && *Info(Next(infix))=='i'){
	                PushChar(&top,'i'); 
				}
				else if (*Info(infix)=='c' && *Info(Next(infix))=='s' && *Info(Next(Next(Next(infix))))=='r'){
	                PushChar(&top,'S'); 
				}
				else if (*Info(infix)=='c' && *Info(Next(infix))=='s'){
	                PushChar(&top,'s'); 
				}
				else if (*Info(infix)=='c' && *Info(Next(Next(infix)))=='s' && *Info(Next(Next(Next(infix))))=='r'){
	                PushChar(&top,'O'); 
				}
				else if (*Info(infix)=='c' && *Info(Next(Next(infix)))=='s'){
	                PushChar(&top,'o'); 
				}
				else if (*Info(infix)=='s' && *Info(Next(infix))=='e' && *Info(Next(Next(Next(infix))))=='r'){
	                PushChar(&top,'A'); 
				}
				else if (*Info(infix)=='s' && *Info(Next(infix))=='e'){
	                PushChar(&top,'a'); 
				}
				else if (*Info(infix)=='t' && *Info(Next(Next(Next(infix))))=='r'){
	                PushChar(&top,'T'); 
				}
				else if (*Info(infix)=='t'){
	                PushChar(&top,'t'); 
				}
				else if (*Info(infix)=='c' && *Info(Next(Next(infix)))=='t' && *Info(Next(Next(Next(infix))))=='r'){
	                PushChar(&top,'G'); 
				}
				else if (*Info(infix)=='c' && *Info(Next(Next(infix)))=='t'){
	                PushChar(&top,'g'); 
				}
				else if (*Info(infix)=='l' && *Info(Next(infix))=='n'){
	                PushChar(&top,'n'); 
		        }
				else if (*Info(infix)=='l' && *Info(Next(infix))=='o' && !isNumber(Prev(infix))){
	                PushChar(&top,'L'); 
				}
				else if (*Info(infix)=='m'){
	                PushChar(&top,'m'); 
				}
				else if (*Info(infix)=='l' && isNumber(Prev(infix))){
	                PushChar(&top,'l'); 
		    	}
		    	while (*Info(infix) != '('){
		    		infix = Next(infix);
				}
			}
		}
		else if (*Info(infix)=='p' && *Info(Next(infix)) == 'i'){
			InsVLast (&postfix, "p");
			infix = Next(Next(infix));
		}
		else if(*Info(infix)=='|' && mutlak==1)
        {
            while(Info(Top(top)) != '|')
            {
				temp = (infotype) malloc (2*sizeof (char));
				temp[0] = PopChar(&top);
				temp[1]  = '\0';
				InsVLast (&postfix, temp);
            }
            
			temp = (infotype) malloc (2*sizeof (char));
			temp[0] = PopChar(&top);
			temp[1]  = '\0';
			InsVLast (&postfix, temp);
            mutlak -= 1;
            
            if (Next(infix) != NULL){
            	infix = Next(infix);
			} else {
				infix = NULL;
			}
        }
        else if(*Info(infix) == '|' && mutlak==0)
        {
            PushChar(&top, '|');
            infix = Next(infix);
            mutlak += 1;
        }
        else if(isOperator(*Info(infix)) && !negativeInteger(infix))
        {
            if(*Info(infix) == '(' )
            {
	            PushChar(&top, *Info(infix));
	            infix = Next(infix);
            }
            else if(isEmpty(top))
            {
	            PushChar(&top, *Info(infix));
	            infix = Next(infix);
            }
            else if(isAfter(Info(Top(top))))
            {
	            PushChar(&top, *Info(infix));
	            infix = Next(infix);
            }
            else if(prioritas(*Info(infix)) > prioritas(Info(Top(top))))
            {
	            PushChar(&top, *Info(infix));
	            infix = Next(infix);
            }
            else if(prioritas(*Info(infix)) == prioritas(Info(Top(top))))
            {
				temp = (infotype) malloc (2*sizeof (char));
				temp[0] = PopChar(&top);
				temp[1]  = '\0';
				InsVLast (&postfix, temp);
				
	            PushChar(&top, *Info(infix));
	            infix = Next(infix);
            }
            else if(prioritas(*Info(infix)) < prioritas(Info(Top(top))) && Info(Top(top)) != '(' && Info(Top(top)) != '|' && Info(Top(top)) != ')')
            {
                while(1)
                {
                    if( isEmpty(top) ) break;
                    if( Info(Top(top)) == '(' ) break;
                    if( Info(Top(top)) == '|' ) break;
					temp = (infotype) malloc (2*sizeof (char));
					temp[0] = PopChar(&top);
					temp[1]  = '\0';
					InsVLast (&postfix, temp);
                }
            }
        }
        else if(*Info(infix)==')')
        {
            while(Info(Top(top)) != '(')
            {
				temp = (infotype) malloc (2*sizeof (char));
				temp[0] = PopChar(&top);
				temp[1]  = '\0';
				InsVLast (&postfix, temp);
            }
            
            temp2 = PopChar(&top);
            
            if (Next(infix) != NULL){
            	infix = Next(infix);
			} else {
				infix = NULL;
			}
			
            if (!isEmpty(top) && isOperator2(Info(Top(top))))
			{
				temp = (infotype) malloc (2*sizeof (char));
				temp[0] = PopChar(&top);
				temp[1]  = '\0';
				InsVLast (&postfix, temp);
			}
        }
        else if(*Info(infix)==' ')
        {
            infix = Next(infix);
        }
        else if (isNumber(infix))
        {
            if(negativeInteger(infix))
            {
            	int i = 1;
				temp = (infotype) malloc (50*sizeof (char));
                
                temp[0] = *Info(infix);
            	infix = Next(infix);
            	
            	while( infix != NULL && !isOperator(*Info(infix)) && !isOperator2(*Info(infix)) && !isOperator3(*Info(infix))){
					temp[i] = *Info(infix);
					temp[i+1]  = '\0';
					i++;
            		infix = Next(infix);
				}
				InsVLast (&postfix, temp);
            }
            else
            {
            	int i = 0;
				temp = (infotype) malloc (50*sizeof (char));
            	while( infix != NULL && !isOperator(*Info(infix)) && !isOperator2(*Info(infix)) && !isOperator3(*Info(infix))){
					temp[i] = *Info(infix);
					temp[i+1]  = '\0';
					i++;
            		infix = Next(infix);
				}
				InsVLast (&postfix, temp);
            }
        }
        else if (*Info(infix) == '!'){
			InsVLast (&postfix, "!");
			infix = Next(infix);
		}
		else if (*Info(infix) == '%'){
			InsVLast (&postfix, "%");
			infix = Next(infix);
		}
		else{
	        *cek = 1;
		}
    }

    while(Top(top) != NULL)
    {
		temp = (infotype) malloc (2*sizeof (char));
		temp[0] = PopChar(&top);
		temp[1]  = '\0';
		InsVLast (&postfix, temp);
    }
    
    return Top(postfix);
}

double hitungIsiPostfix(List postfix, int *cek)
{
    double a, b;
    address token;
    List2 stack;
    
    token = Top(postfix);
    CreateList2 (&stack);
    

    while(token != NULL && *cek != 1)
    {
        if(isNumber(token))
        {
            Push(&stack, atof(Info(token)));
        }
        else if(isOperator(*Info(token)))
        {
            a = Pop (&stack);
            b = Pop (&stack);
            
            switch(*Info(token)){
	            case '+':
	                Push(&stack, pertambahan(b, a));
	                break;
	            case '-':
	                Push(&stack, pengurangan(b, a));
	                break;
	            case '*':
	                Push(&stack, perkalian(b, a));
	                break;
	            case '/':
	            	if (a == 0){
	            		printf ("\t\t\t\t\t\tPenyebut = 0, nilai tidak terdefinisi, masukkan input kembali");
	        			*cek = 1;
					} else{
						Push(&stack, pembagian(b, a));
					}
	                break;
	            case '^':
	                Push(&stack, eksponen (b, a));
	                break;
	            case 'v':
	            	if (a < 0){
	            		if (modulus(b,2) == 0){
	            			printf ("\t\t\t\t\t\tNilai di dalam akar tidak boleh minus, masukkan input kembali", a);
	        				*cek = 1;
						} else{
							Push(&stack, (-1*akar(Mutlak(a), b)));
						}
					} else{
						Push(&stack, akar(a, b));
					}
	                break;
	            case 'm':
	                Push(&stack, modulus(b, a));
	                break;
	            case 'l':
	                Push(&stack, Logaritma(a,b));
	                break;
	            case 'C':
	                Push(&stack, kombinasi(b,a));
	                break;
	            case 'P':
	                Push(&stack, permutasi(b,a));
	                break;
	            case 'e':
	                Push(&stack, Eurel(b, a));
	                break;
	            default:
	                break;
            }
        }
		else if (*Info(token) == 'p'){
			Push(&stack, pi);
		} 
		else if(isOperator2(*Info(token))){
            a = Pop (&stack);
            switch (*Info(token)){
            	case '!' :
            		Push(&stack, faktorial(a));
					break;
				case '%' :																	
					Push(&stack, Persen(a));
					break;
            	case '|' :
            		Push(&stack, Mutlak(a));
					break;
				case 'i' :																	//sin dengan input derajat
					Push(&stack, sinDerajat(a));
					break;
				case 'I' :																	//sin dengan input radian
					Push(&stack, sinRad(a));
					break;
            	case 's' :																	//cosecan dengan input derajat
	        		if (a == 0 || a == 180 || a == 360 || a == 540){
	        			printf ("\t\t\t\t\t\tNilai csc(%g) tidak terdefinisi", a);
	        			*cek = 1;
					}
            		Push(&stack, cosecDerajat(a));
					break;
				case 'S' :																	//cosecan dengan input radian
	        		if (a == 0 || a == 180 || a == 360 || a == 540){
	        			printf ("\t\t\t\t\t\tNilai csc(%g) tidak terdefinisi", a);
	        			*cek = 1;
					}
					Push(&stack, cosecRad(a));
					break;
				case 'o' :																	//cos dengan input derajat
					Push(&stack, cosNilai(a));
					break;
				case 'O' :																	//cos dengan input radian
					Push(&stack, cosRad(a));
					break;
				case 'a' :																	//secan dengan input derajat
	        		if (a == 90 || a == 270 || a == 450){
	        			printf ("\t\t\t\t\t\tNilai sec(%g) tidak terdefinisi", a);
	        			*cek = 1;
					}
					Push(&stack, secDerajat(a));
					break;
            	case 'A' :																	//secan dengan input radian
	        		if (a == 90 || a == 270 || a == 450){
	        			printf ("\t\t\t\t\t\tNilai sec(%g) tidak terdefinisi", a);
	        			*cek = 1;
					}
            		Push(&stack, secRad(a));
					break;
				case 't' :																	//tan dengan input derajat
	        		if (a == 90 || a == 270 || a == 450){
	        			printf ("\t\t\t\t\t\tNilai tan(%g) tidak terdefinisi", a);
	        			*cek = 1;
					}
					Push(&stack, tanDerajat(a));
					break;
				case 'T' :																	//tan dengan input radian
	        		if (a == 90 || a == 270 || a == 450){
	        			printf ("\t\t\t\t\t\tNilai tan(%g) tidak terdefinisi", a);
	        			*cek = 1;
					}
					Push(&stack, tanRad(a));
					break;
				case 'g' :																	//cotangen dengan input derajat
	        		if (a == 0 || a == 90 || a == 180 || a == 360 || a == 540){
	        			printf ("\t\t\t\t\t\tNilai cot(%g) tidak terdefinisi", a);
	        			*cek = 1;
					} else {
						Push(&stack, cotDerajat(a));
					}
					break;
				case 'G' :																	//cotangen dengan input radian
	        		if (a == 0 || a == 90 || a == 180 || a == 360 || a == 540){
	        			printf ("\t\t\t\t\t\tNilai cot(%g) tidak terdefinisi", a);
	        			*cek = 1;
					} else {
						Push(&stack, cotRad(a));
					}
					break;	
				case 'n' :																	//hitung logaritma natural
					Push(&stack, hitungLog(a));
					break;
				case 'L' :																	//hitung logaritma 10
					Push(&stack, Log(a));
					break;
				case 'z' :																	//sigma i
	        		Push(&stack, Sigmai(a));
					break;	
				case 'Z' :																	//sigma i kuadrat
					Push(&stack, Sigmaidua(a));
					break;
				case 'E' :																	//sigma i kubik
					Push(&stack, Sigmaitiga(a));
					break;
	            default:
	                break;
			}
		} 
        token = Next(token);
    }
    return Info(Top(stack));
}

void CreateList (List * L)
{
	Top(*L) = NULL;
}

address AlokasiNode (infotype X)
{
	address P;
	 
	P = (address) malloc (sizeof (Node));
	if (P != NULL)		
	{
		Info(P) = X;
		Next(P) = NULL;
		Prev(P) = NULL;
	}
}

void InsVLast (List * L, infotype X)
{
	address P;
	P = AlokasiNode (X);
	if (P != NULL)
	{	InsertLast (&(*L), P);		}
}

void InsertLast (List * L, address P)
{
	if(Top(*L) == NULL){
		Top(*L) = P;
	} else{
		address last;
		last = Top(*L);
		while (Next(last) != NULL){
			last = Next(last);
		}
		Prev(P) = last;
		Next(last) = P;
	}
}

void PrintNode (List L, infotype C)
{
	address P;
	
	if (Top(L) == NULL)
	{
		 printf ("List Kosong .... \a\n");
	}
	else
	{
		printf("%s", C);
		P = Top(L);
		for (;;)
		{
			if (P == NULL)
			{
				printf ("\n");
				break;
			}
			else
			{
				printf ("%s ", Info(P));
				P = Next(P);
			}
		}
	}
}

void CreateList1 (List1 * L)
{
	Top(*L) = NULL;
}

address1 AlokasiStackChar (char X)
{
	address1 P;
	 
	P = (address1) malloc (sizeof (StackChar));
	if (P != NULL)		
	{
		Info(P) = X;
		Next(P) = NULL;
	}
}

void PushChar (List1 * L, char X)
{
	address1 P;
	
	P = AlokasiStackChar (X);
	if (P != NULL)
	{	InsertChar (&(*L), P);		}
}

void InsertChar (List1 * L, address1 P)
{
	if(Top(*L) == NULL){
		Top(*L) = P;
	} else{
		Next(P) = Top(*L);
		Top(*L) = P;
	}
}

char PopChar (List1 * L)
{
	address1 Pdel;
	char x;
	
	x = Info(Top (*L));
	Pdel = Top (*L);
	
	if (Next(Top (*L)) != NULL){
		Top (*L) = Next(Top (*L));
	} else{
		Top (*L) = NULL;
	}
	
	free(Pdel);
	
	return x;
}

void CreateList2 (List2 * L)
{
	Top(*L) = NULL;
}

address2 AlokasiStackDouble (double X)
{
	address2 P;
	 
	P = (address2) malloc (sizeof (StackDouble));
	if (P != NULL)		
	{
		Info(P) = X;
		Next(P) = NULL;
	}
}

void Push (List2 * L, double X)
{
	address2 P;
	
	P = AlokasiStackDouble (X);
	if (P != NULL)
	{	InsertDouble (&(*L), P);		}
}

void InsertDouble (List2 * L, address2 P)
{
	if(Top(*L) == NULL){
		Top(*L) = P;
	} else{
		Next(P) = Top(*L);
		Top(*L) = P;
	}
}

double Pop (List2 * L)
{
	address2 Pdel;
	double x;
	
	x = Info(Top (*L));
	Pdel = Top (*L);
	
	if (Next(Top (*L)) != NULL){
		Top (*L) = Next(Top (*L));
	} else{
		Top (*L) = NULL;
	}
	
	free(Pdel);
	
	return x;
}

void Input1Float(double *angka)
{
	printf ("\n\t\t\t\t\t\tMasukkan operan : ");
	scanf  ("%f", &(*angka));
}
