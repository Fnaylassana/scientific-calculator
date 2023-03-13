#ifndef Fauza_H
#define Fauza_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include <ctype.h>
#define max 10

typedef union
{
    float datafloat;
    char  datachar;
} Item;

typedef struct
{
    Item item[256];
    int top;
} Stack;

float HitungNilaiMutlak (float nilai);

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

char *infixToPostfix(char *infix,char *postfix, int *cek);

float hitungIsiPostfix(char postFix[]);

void kalkulator();

void push(Stack *s, float val);

void pushChar(Stack *s, char c);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void header();

void Input1Int(int *angka);

void Input2Int(int *angka1, int *angka2);

void Input1Double(double *angka);

void Input1Float(float *angka);

#endif
