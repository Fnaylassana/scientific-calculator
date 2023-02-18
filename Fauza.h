#ifndef Fauza_H
#define Fauza_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

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

float HitungTan(float nilai);

void kalkulator();

Stack* initialize();

int isEmpty(Stack *s);

Item top(Stack *s);

Item pop(Stack *s);

void push(Stack *s, float val);

void pushChar(Stack *s, char c);

int isFull(Stack *s);

int priority(char c);

int isOperator(char c);

int negativeInteger(char *infix,char c,int ptr);

int isAfter(Stack *s);

char * removespaces(char * infix);

char *infixToPostfix(char *infix,char *postfix);

void replaceNewLineBySpace(char *s);

int isNumber(char *token);

float evaluatePostfix(char postFix[]);

void FiturLain();

void Logaritma();

void Sigma();

void Faktorial();

void Modulus();

void Kombinasi();

void Permutasi();

void KonversiSuhu();

void Input1Int(int *angka);

void Input2Int(int *angka1, int *angka2);

void Input1Double(double *angka);

void Input1Float(float *angka);

#endif
