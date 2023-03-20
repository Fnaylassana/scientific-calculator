#ifndef Fauza_H
#define Fauza_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max 10

typedef union
{
    double datadouble;
    char  datachar;
} Item;

typedef struct
{
    Item item[256];
    int top;
} Stack;

double Mutlak (double nilai);

double Persen (double nilai);

Stack* alloc();	

int isEmpty(Stack *s);

int isFull(Stack *s);

Item top(Stack *s);

Item pop(Stack *s);

int prioritas(char c);

int isNumber(char *token);

int isOperator(char c);

int negativeInteger(char *infix,char c,int ptr);

int isAfter(Stack *s);

char *infixToPostfix(char *infix, char *postfix, int *cek);

double hitungIsiPostfix(char postFix[], int *cek);

void push(Stack *s, double val);

void pushChar(Stack *s, char c);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void header();

void Input1Int(int *angka);

void Input2Int(int *angka1, int *angka2);

void Input1Double(double *angka);

void Input1Float(double *angka);

#endif
