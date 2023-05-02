#ifndef Fauza_H
#define Fauza_H
#include <stdio.h>		
#include <stdlib.h>		//library agar dapat menggunakan atof()
#include <string.h>		//library agar dapat menggunakan strlwr(), strcat(), strlen(), strcmp(), strcpy()
#include <ctype.h>		//library agar dapat menggunakan isdigit()
#include <conio.h>		//library agar dapat menggunakan getche() 
#include <stdbool.h>	//library agar dapat menggunakan tipe data bool
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

//pembuatan tipe data baru bernama infotype bertipe char*
typedef const char *infotype;

//pembuatan tipe data baru bernama address bertipe node*
typedef struct node *address;
//pembuatan tipe data node yang memiliki 3 subvar yang berfungsi sebagai node dari double linked list
typedef struct node 
{
	infotype info;
	address  next;
	address  prev;
} Node;

//pembuatan tipe data baru bernama link bertipe link*
typedef struct subtree *link;
//pembuatan tipe data node yang memiliki 4 subvar yang berfungsi sebagai simpul dari tree
typedef struct subtree 
{
	infotype info;
	link  leftson;
	link  rightson;
	link  parent;
} SubTree;

//pembuatan tipe data baru bernama address1 bertipe stackchar*
typedef struct stackchar *address1;
//pembuatan tipe data node yang memiliki 2 subvar yang berfungsi sebagai node dari stack yang infonya bertipe character
typedef struct stackchar 
{
	char info;
	address1  next;
} StackChar;

//pembuatan tipe data baru bernama address2 bertipe stackdouble*
typedef struct stackdouble *address2;
//pembuatan tipe data node yang memiliki 2 subvar yang berfungsi sebagai node dari stack yang infonya bertipe double
typedef struct stackdouble
{
	double info;
	address2  next;
} StackDouble;

//pembuatan tipe data baru bernama List yang subvarnya berfungsi sebagai pointer dari node double linked list
typedef struct {
	address Top;
} List;

//pembuatan tipe data baru bernama List1 yang subvarnya berfungsi sebagai pointer dari node stack char
typedef struct {
	address1 Top;
} List1;

//pembuatan tipe data baru bernama List2 yang subvarnya berfungsi sebagai pointer dari node stack double
typedef struct {
	address2 Top;
} List2;

//function yang akan mengembalikan nilai mutlak dari nilai yang diparsing
double Mutlak (double nilai);

//function yang akan mengembalikan hasil /100 dari nilai yang diparsing
double Persen (double nilai);

//modul untuk meminta inputan bertipe float sebanyak 1 nilai
void Input1Float(double *angka);

// Menu Utama Scientific Calculator---------------------------------------------------------------------------------------------------

//modul untuk menampilkan header kalkulator kelompok 5
void header();

//function yang akan mengembalikan angka sesuai dengan prioritas dari sebuah operasi
int prioritas(char c);

//function yang akan mengembalikan nilai 1 apabila Info(token) yang diparsing merupakan sebuah operan
//dan mengembalikan nilai 0 apabila Info(token) bukan berupa angka
int isNumber(address token);

//function yang akan mengembalikan nilai 1 apabila string yang diparsing merupakan sebuah operan
//dan mengembalikan nilai 0 apabila string bukan berupa angka
int isNumber1(const char *token);

//function yang akan mengembalikan nilai 1 apabila char yang diparsing merupakan sebuah operator
//dan mengembalikan nilai 0 apabila char bukan berupa angka
int isOperator(char c);	//operator-operator dengan 2 operan
int isOperator2(char c); //operator-operator dengan 1 operan
int isOperator3(char c); //simbol selain angka, operator 1, dan operator 2


//function yang akan mengembalikan nilai 1 apabila Info(infix) yang di parsing merupakan sebuah operan negatif
//dan mengembalikan nilai 0 apabila Info(infix) bukan berupa operan negatif
int negativeInteger(address infix);


//function yang akan mengembalikan nilai 1 apabila char merupakan sebuah operator yang berada di dalam tanda kurung
//dan mengembalikan nilai 0 apabila char bukan merupakan sebuah operator yang berada di dalam tanda kurung
int isAfter(char c);

//function yang akan mengembalikan sebuah pointer penunjuk node pertama dari linked list
//dalam function terdapat operasi perubahan bentuk inputan yang berupa infix, menjadi bentuk 
//postfix yang sudah diurutkan berdasarkan prioritas dari operasi" yang terdapat di dalamnya
address infixToPostfix(List input, int *cek);

//function yang akan mengembalikan hasil dari perhitungan dari operasi yang diinputkan
//perhitungan dievaluate dari bentuk postfix
double hitungIsiPostfix(List postfix, int *cek);

//function yang akan mengembalikan alamat dari root dari tree yang sudah terbentuk
//dalam function ini terdapat operasi pembuatan tree (mengubah postfix menjadi tree)
link CreateTree(List L);

//modul untuk menampilkan tranversal preorder dari tree yang sudah terbentuk
void preOrder(link root);

//modul untuk menampilkan tranversal inorder dari tree yang sudah terbentuk
void inOrder(link root);

//modul untuk menampilkan tranversal postorder dari tree yang sudah terbentuk
void postOrder(link root);

//function yang akan mengembalikan alamat dari node yang baru dibuat
link AlokasiTree(infotype X); //node tree
address AlokasiNode (infotype X); //node double linked list
address1 AlokasiStackChar (char X); //node stack dengan info bertipe char
address2 AlokasiStackDouble (double X); //node stack dengan info bertipe double

//modul untuk mengosongkan list
void CreateList (List * L); //list penunjuk node double linked list
void CreateList1 (List1 * L); //list penunjuk node stack dengan info bertipe char
void CreateList2 (List2 * L); //list penunjuk node stack dengan info bertipe double

//modul untuk memasukkan node baru ke linked list
void InsVLast (List * L, infotype X); 	//memasukkan node double linked list baru pada akhir linked list
void InsertLast (List * L, address P); 
void PushChar (List1 * L, char X);		//memasukkan node stack dengan info char baru pada bagian atas stack
void InsertChar (List1 * L, address1 P);
void Push (List2 * L, double X);		//memasukkan node stack dengan info double baru pada bagian atas stack
void InsertDouble (List2 * L, address2 P);

//modul untuk menampilkan info" dari linked list
void PrintNode (List L, infotype C, int *X);

//modul untuk menghapus sebuah node dari linked list
infotype Delete (List * L);	//menghapus node double linked list baru pada akhir linked list
char PopChar (List1 * L); //menghapus node stack dengan info char baru pada bagian atas stack
double Pop (List2 * L); //menghapus node stack dengan info double baru pada bagian atas stack

#endif
