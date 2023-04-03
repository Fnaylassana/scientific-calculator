#ifndef Fauza_H
#define Fauza_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdbool.h>
#define max 10
#define Info(P) (P)->info
#define Next(P) (P)->next
#define Prev(P) (P)->prev
#define LeftSon(P) (P)->leftson
#define RightSon(P) (P)->rightson
#define Parent(P) (P)->parent
#define Top(L) (L).Top

//Referensi logika Prioritas Scientific Kalkulator dari GitHub by:
//MOHAMED FARID ABDELAZIZ SALAMA 6905
//ADHAM MOHAMED ALY ABDELHAMID 6744

typedef const char *infotype;

typedef struct node *address;
typedef struct node 
{
	infotype info;
	address  next;
	address  prev;
} Node;

typedef struct subtree *link;
typedef struct subtree 
{
	infotype info;
	link  leftson;
	link  rightson;
	link  parent;
} SubTree;

typedef struct stackchar *address1;
typedef struct stackchar 
{
	char info;
	address1  next;
} StackChar;

typedef struct stackdouble *address2;
typedef struct stackdouble
{
	double info;
	address2  next;
} StackDouble;

typedef struct {
	address Top;
} List;

typedef struct {
	address1 Top;
} List1;

typedef struct {
	address2 Top;
} List2;

double Mutlak (double nilai);

double Persen (double nilai);

void Input1Float(double *angka);

// Menu Utama Scientific Calculator

void header();

int prioritas(char c);

int isNumber(address token);

int isOperator(char c);								//operator-operator dengan 2 operan

int isOperator2(char c);							//operator-operator dengan 1 operan

int isOperator3(char c);							//simbol selain angka, operator 1, dan operator 2

int negativeInteger(address infix);

int isAfter(char c);

address infixToPostfix(List input, int *cek);

double hitungIsiPostfix(List postfix, int *cek);

link CreateTree(List L);

List TranversalPreOrder(link P, int JmlPostfix);

link AlokasiTree(infotype X);

void CreateList (List * L);

address AlokasiNode (infotype X);

void InsVLast (List * L, infotype X);

void InsertLast (List * L, address P);

void PrintNode (List L, infotype C, int *X);

address1 AlokasiStackChar (char X);

infotype Delete (List * L);

void CreateList1 (List1 * L);

void PushChar (List1 * L, char X);

void InsertChar (List1 * L, address1 P);

char PopChar (List1 * L);

void CreateList2 (List2 * L);

address2 AlokasiStackDouble (double X);

void Push (List2 * L, double X);

void InsertDouble (List2 * L, address2 P);

double Pop (List2 * L);

#endif
