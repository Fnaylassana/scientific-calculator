#include "Fauza.h"
#include "naufal.h"
#include "Hasby.h"
#include "aryagara2.h"
#include "aulianf.h"

void header()
{
	system("cls");
	printf	("========================================================================================================================\n");
	printf	("========================================================================================================================\n");
	printf	("==                          _  ________ _      ____  __  __ _____   ____  _  __    _____                              ==\n");
	printf	("==                         | |/ /  ____| |    / __ \\|  \\/  |  __ \\ / __ \\| |/ /   | ____|                             ==\n");
	printf	("==                         | ' /| |__  | |   | |  | | \\  / | |__) | |  | | ' /    | |__                               ==\n");
	printf	("==                         |  < |  __| | |   | |  | | |\\/| | ___/ | |  | |  <     |___ \\                              ==\n");
	printf	("==                         | . \\| |____| |___| |__| | |  | | |    | |__| | . \\     ___) |                             ==\n");
	printf	("==                         |_|\\_\\______|______\\____/|_|  |_|_|     \\____/|_|\\_\\   |____/                              ==\n");
	printf	("========================================================================================================================\n");
	printf	("==                                     CALCULATOR PROGRAM (Right Associative)                                         ==\n");
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
	int d = 0;
	
	c = *Info(token);
	d = strlen(Info(token));
	
	if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9'){
		return 1;
	}else if (c == '-' && d > 1){
		return 1;
	}
	else{
		return 0;
	}
}

int isNumber1(const char *token)
{
    return isdigit(*token) || ( *token == '-' && isdigit(token[1]) );
}

int isOperator(char c)
{
    if( c=='(' || c=='+' || c=='-' || c=='/' || c=='*' || c=='^' || c=='v' || c=='m' || c=='l' || c=='C' || c=='P'|| c=='e') {
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
	}else if( c==':' || c==';' || c==' ' || c=='"' || c=='<' || c=='>' || c=='?' || c=='\'' || c=='q' || c=='w') {
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
	}else if((isOperator(*Info(Prev(infix))) || *Info(Prev(infix)) == '|') && *Info(infix) == '-' ){
		return 1;
	}else if ((Prev(Prev(infix)) == NULL || (isOperator(*Info(Prev(infix)))  )) && *Info(Prev(infix)) =='|' && *Info(infix) == '-'  ) {
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
	List1 stack;
	address1 cari;
    int mutlak = 0, ketemu = 0;
    char *temp;
    char temp2;
    
    infix = Top(input);
    CreateList1(&stack);
    CreateList(&postfix);

    while(infix != NULL && *cek != 1)
    {
    	if(*Info(infix) == 'v' && (Prev(infix) == NULL || (Prev(infix) != NULL && !isNumber(Prev(infix)) && !(*Info(Prev(infix)) == 'i')))) {
    		InsVLast (&postfix, "2");
		}
    	if(*Info(infix)=='c' && (isNumber(Next(infix)) || *Info(Next(infix))=='-')){
    		Info(infix) = "C";
		}
		if(*Info(infix)=='p' && (isNumber(Next(infix)) || *Info(Next(infix))=='-')){
    		Info(infix) = "P";
		}
    	if(((*Info(infix) == 's'|| *Info(infix)=='c'|| *Info(infix)=='t') && (Next(infix) != NULL && Next(Next(infix)) != NULL && Next(Next(Next(infix))) != NULL && Next(Next(Next(Next(infix)))) != NULL) && (Prev(infix) == NULL || (Prev(infix) != NULL && !isNumber(Prev(infix)) && !(*Info(Prev(infix)) == 'i') && *Info(Prev(infix)) != '!' && *Info(Prev(infix)) != '%') || *Info(Prev(infix)) == '|')) || *Info(infix)=='m' || (*Info(infix)=='l' )){
        	if (*Info(infix)=='s' && *Info(Next(infix))=='i' && *Info(Next(Next(infix)))=='n' && *Info(Next(Next(Next(infix))))=='r'){
                PushChar(&stack,'I'); 
			}
			else if (*Info(infix)=='s' && *Info(Next(infix))=='i' && *Info(Next(Next(infix)))=='n'){
                PushChar(&stack,'i'); 
			}
			else if (*Info(infix)=='s' && *Info(Next(infix))=='i' && *Info(Next(Next(infix)))=='g'){
				if(*Info(Next(Next(Next(Next(infix))))) == '1'){
                	PushChar(&stack,'z'); 
				}
				else if(*Info(Next(Next(Next(Next(infix))))) == '2'){
                	PushChar(&stack,'Z'); 
				}
				else if(*Info(Next(Next(Next(Next(infix))))) == '3'){
                	PushChar(&stack,'E'); 
				}
			}
			else if (*Info(infix)=='c' && *Info(Next(infix))=='s' && *Info(Next(Next(infix)))=='c' && *Info(Next(Next(Next(infix))))=='r'){
                PushChar(&stack,'S'); 
			}
			else if (*Info(infix)=='c' && *Info(Next(infix))=='s' && *Info(Next(Next(infix)))=='c'){
                PushChar(&stack,'s'); 
			}
			else if (*Info(infix)=='c' && *Info(Next(infix))=='o' && *Info(Next(Next(infix)))=='s' && *Info(Next(Next(Next(infix))))=='r'){
                PushChar(&stack,'O'); 
			}
			else if (*Info(infix)=='c' && *Info(Next(infix))=='o' && *Info(Next(Next(infix)))=='s'){
                PushChar(&stack,'o'); 
			}
			else if (*Info(infix)=='s' && *Info(Next(infix))=='e' && *Info(Next(Next(infix)))=='c' && *Info(Next(Next(Next(infix))))=='r'){
                PushChar(&stack,'A'); 
			}
			else if (*Info(infix)=='s' && *Info(Next(infix))=='e' && *Info(Next(Next(infix)))=='c'){
                PushChar(&stack,'a'); 
			}
			else if (*Info(infix)=='t' && *Info(Next(infix))=='a' && *Info(Next(Next(infix)))=='n' && *Info(Next(Next(Next(infix))))=='r'){
                PushChar(&stack,'T'); 
			}
			else if (*Info(infix)=='t' && *Info(Next(infix))=='a' && *Info(Next(Next(infix)))=='n'){
                PushChar(&stack,'t'); 
			}
			else if (*Info(infix)=='c' && *Info(Next(infix))=='o' && *Info(Next(Next(infix)))=='t' && *Info(Next(Next(Next(infix))))=='r'){
                PushChar(&stack,'G'); 
			}
			else if (*Info(infix)=='c' && *Info(Next(infix))=='o' && *Info(Next(Next(infix)))=='t'){
                PushChar(&stack,'g'); 
			}
			else if (*Info(infix)=='l' && *Info(Next(infix))=='n'){
                PushChar(&stack,'n'); 
	        }
			else if (*Info(infix)=='l' && *Info(Next(infix))=='o' && *Info(Next(Next(infix)))=='g' && (Prev(infix) == NULL || !isNumber(Prev(infix)))){
                PushChar(&stack,'L'); 
			}
			else if (*Info(infix)=='l' && *Info(Next(infix))=='o' && *Info(Next(Next(infix)))=='g' && isNumber(Prev(infix))){
                PushChar(&stack,'l'); 
	    	}
			else if (*Info(infix)=='m' && *Info(Next(infix))=='o' && *Info(Next(Next(infix)))=='d' && (Prev(infix) != NULL && isNumber(Prev(infix)))){
                PushChar(&stack,'m'); 
			}
			else{
				*cek = 1;
			}
	    	while (infix != NULL && *Info(infix) != '('){
	    		infix = Next(infix);
			}
			if (infix == NULL){
				*cek = 1;
			}
		}
		else if (*Info(infix)=='p' && *Info(Next(infix)) == 'i'){
			InsVLast (&postfix, "p");
			infix = Next(Next(infix));
		}
		else if(*Info(infix)=='|' && mutlak==1)
        { 
        	
            while(Info(Top(stack)) != '|')
            {
				temp = (char *) malloc (2*sizeof (char));
				temp[0] = PopChar(&stack);
				temp[1]  = '\0';
				InsVLast (&postfix, temp);
            }
            
			temp = (char *) malloc (2*sizeof (char));
			temp[0] = PopChar(&stack);
			temp[1]  = '\0';
			InsVLast (&postfix, temp);
            mutlak = 0;
            
            if (Next(infix) != NULL){
            	infix = Next(infix);
			} else {
				infix = NULL;
			}
        }
        else if(*Info(infix) == '|' && mutlak==0)
        {
            PushChar(&stack, '|');
            infix = Next(infix);
            mutlak = 1;
        }
        else if(isOperator(*Info(infix)) && !negativeInteger(infix) && ((Prev(infix) != NULL && !isOperator(*Info(Prev(infix)))) || *Info(infix) == '(' || *Info(infix) == 'v'))
        {
            if(*Info(infix) == '(' )
            {
            	if (Prev(infix) != NULL && isNumber(Prev(infix))){
            		if (Prev(Prev(infix)) == NULL || (Prev(Prev(infix)) != NULL && *Info(Prev(Prev(infix))) != 'i')){
            			PushChar(&stack, '*');
					}
				}
	            PushChar(&stack, *Info(infix));
	            infix = Next(infix);
            }
            else if(isEmpty(stack))
            {
	            PushChar(&stack, *Info(infix));
	            infix = Next(infix);
            }
            else if(isAfter(Info(Top(stack))))
            {
	            PushChar(&stack, *Info(infix));
	            infix = Next(infix);
            }
            else if(prioritas(*Info(infix)) > prioritas(Info(Top(stack))))
            {
	            PushChar(&stack, *Info(infix));
	            infix = Next(infix);
            }
            else if(prioritas(*Info(infix)) == prioritas(Info(Top(stack))))
            {
				temp = (char *) malloc (2*sizeof (char));
				temp[0] = PopChar(&stack);
				temp[1]  = '\0';
				InsVLast (&postfix, temp);
				
	            PushChar(&stack, *Info(infix));
	            infix = Next(infix);
            }
            else if(prioritas(*Info(infix)) < prioritas(Info(Top(stack))) && Info(Top(stack)) != '(' && Info(Top(stack)) != '|' && Info(Top(stack)) != ')')
            {
                while(1)
                {
                    if( isEmpty(stack) ) break;
                    if( Info(Top(stack)) == '(' ) break;
                    if( Info(Top(stack)) == '|' ) break;
					temp = (char *) malloc (2*sizeof (char));
					temp[0] = PopChar(&stack);
					temp[1]  = '\0';
					InsVLast (&postfix, temp);
                }
            } else {
            	*cek = 1;
			}
        }
        else if(*Info(infix)==')' && (Next(infix) == NULL || (Next(infix) != NULL && isOperator(*Info(Next(infix)))) || *Info(Next(infix)) == '%' || *Info(Next(infix)) == '!'))
        {
        	cari = Top(stack);
        	while (cari != NULL && Info(cari) != '('){
        		cari = Next(cari);
			}
			
			if (cari != NULL && Info(cari) == '('){
        		ketemu = 1;
			}
			
			if (ketemu == 1){
				while(Info(Top(stack)) != '(')
	            {
					temp = (char *) malloc (2*sizeof (char));
					temp[0] = PopChar(&stack);
					temp[1]  = '\0';
					InsVLast (&postfix, temp);
	            }
	            
	            temp2 = PopChar(&stack);
	            
	            if (Next(infix) != NULL){
	            	infix = Next(infix);
				} else {
					infix = NULL;
				}
				
	            if (!isEmpty(stack) && (isOperator2(Info(Top(stack))) || Info(Top(stack)) == 'l'))
				{
					temp = (infotype) malloc (2*sizeof (char));
					temp[0] = PopChar(&stack);
					temp[1]  = '\0';
					InsVLast (&postfix, temp);
				}
				
				ketemu = 0;
			} else {
				*cek = 1;
			}
            
        }
        else if(*Info(infix)==' ')
        {
            infix = Next(infix);
        }
        else if (isNumber(infix) || negativeInteger(infix))
        {
            if(negativeInteger(infix))
            {
            	int i = 1;
				temp = (char *) malloc (50*sizeof (char));
                
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
				temp = (char *) malloc (50*sizeof (char));
            	while( infix != NULL && !isOperator(*Info(infix)) && !isOperator2(*Info(infix)) && !isOperator3(*Info(infix))){
					temp[i] = *Info(infix);
					temp[i+1]  = '\0';
					i++;
            		infix = Next(infix);
				}
				InsVLast (&postfix, temp);
            }
        }
        else if (*Info(infix) == '!' && (Prev(infix) != NULL && !isOperator(*Info(Prev(infix))))){
			InsVLast (&postfix, "!");
			infix = Next(infix);
		}
		else if (*Info(infix) == '%' && (Prev(infix) != NULL && !isOperator(*Info(Prev(infix))))){
			InsVLast (&postfix, "%");
			infix = Next(infix);
		}
		else{
	        *cek = 1;
		}
    }

    while(Top(stack) != NULL)
    {
		temp = (char *) malloc (2*sizeof (char));
		temp[0] = PopChar(&stack);
		temp[1]  = '\0';
		if (temp[0] != '('){
			InsVLast (&postfix, temp);
		}
    }
    
    if (mutlak == 1){
    	*cek = 1;
	}
	
    return Top(postfix);
}

link CreateTree(List L)
{
	address tail;
	link Pcur, root;
	bool lnjt;
	
	tail = Top(L);
	
	while (Next(tail) != NULL){
		tail = Next(tail);
	}
	
	root = AlokasiTree (Info(tail));
	Pcur = root;
	tail = Prev(tail);
	
	while (tail != NULL){
		lnjt = true;
		if(isNumber(tail) || *Info(tail) == 'p')
        {
    		if (RightSon(Pcur) == NULL && !isOperator2(*Info(Pcur))){
        		RightSon(Pcur) = AlokasiTree(Info(tail));
        		Parent(RightSon(Pcur)) = Pcur;
			}else if (LeftSon(Pcur) == NULL){
				LeftSon(Pcur) = AlokasiTree(Info(tail));
        		Parent(LeftSon(Pcur)) = Pcur;
			}else{
				Pcur = Parent(Pcur);
				lnjt = false;
			}
        }
        else if(isOperator(*Info(tail)) || isOperator2(*Info(tail)))
        {
        	if (RightSon(Pcur) == NULL  && !isOperator2(*Info(Pcur))){
        		RightSon(Pcur) = AlokasiTree(Info(tail));
        		Parent(RightSon(Pcur)) = Pcur;
        		Pcur = RightSon(Pcur);
			}else if (LeftSon(Pcur) == NULL){
				LeftSon(Pcur) = AlokasiTree(Info(tail));
        		Parent(LeftSon(Pcur)) = Pcur;
        		Pcur = LeftSon(Pcur);
			}else{
				Pcur = Parent(Pcur);
				lnjt = false;
			}
        }
        else{
        	printf ("Masuk ke else");
		}
		
		if (lnjt){
			tail = Prev(tail);
		}
	} 
	
	return root;
}

link AlokasiTree(infotype X)
{
	link P;
	
	P = (link) malloc (sizeof (SubTree));
	if (P != NULL)		
	{
		Info(P) = X;
		RightSon(P) = NULL;
		LeftSon(P) = NULL;
		Parent(P) = NULL;
	}
	
	return P;
}

void preOrder(link root)
{
	if (root != NULL){
		printf("%s ", Info(root));
        preOrder(LeftSon(root));
        preOrder(RightSon(root));
	}
}

void inOrder (link root)
{
	if (root != NULL) {
        inOrder(LeftSon(root));
        printf("%s ", Info(root));
        inOrder(RightSon(root));
    }
}

void postOrder (link root)
{
	if (root != NULL){
        postOrder(LeftSon(root));
        postOrder(RightSon(root));
        printf("%s ", Info(root));
	}
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
	
	return P;
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

void PrintNode (List L, infotype C, int *X)
{
	address P;
	*X = 0;
	
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
				*X = *X + 1;
				printf ("%s ", Info(P));
				P = Next(P);
			}
		}
	}
}

infotype Delete (List * L)
{
	address Pdel;
	infotype x;
	
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
	
	return P;
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
	
	return P;
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
	printf ("\nMasukkan operan : ");
	scanf  ("%f", &(*angka));
}
