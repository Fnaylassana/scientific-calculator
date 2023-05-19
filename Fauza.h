#ifndef Fauza_H
#define Fauza_H
#include <stdio.h>		//library agar dapat menggunakan printf(), scanf(), dll
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


//pembuatan tipe data baru bernama infotype bertipe char*
typedef char *infotype;

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

/**
 * fungsi modul	: function yang akan menghitung nilai mutlak dari sebuah nilai
 * IS			: variabel nilai berisi bilangan baik <0, >0, ataupun =0
 * FS			: variabel nilai berisi bilangan positif
 */
double Mutlak (double nilai);

/**
 * fungsi modul	: function yang akan menghitung % dari sebuah nilai
 * IS			: variabel nilai berisi sebuah bilangan
 * FS			: variabel nilai berisi bilangan dibagi 100
 */
double Persen (double nilai);

/**
 * fungsi modul	: procedure untuk meminta inputan bertipe float sebanyak 1 nilai
 * IS			: variabel *angka berisi nilai random
 * FS			: variabel *angka berisi inputan user
 */
void Input1Float(double *angka);

/**
 * fungsi modul	: procedure untuk menampilkan header kalkulator kelompok 5
 * referensi	: https://textkool.com/en/ascii-art-generator
 */
void header();

/**
 * fungsi modul	: function yang akan mengecek prioritas suatu operasi
 * referensi	: https://github.com/MohamedFarid612/Calculator-infix-to-postfix-/blob/main/main.c
 * IS			: variabel c berisi sebuah operasi yang akan dicek urutan prioritasnya
 * FS			: mengembalikan angka prioritas dari operasi pada variabel c
 */
int prioritas(char c);

/**
 * fungsi modul	: function yang akan mengecek apakah Info(token) berisi angka atau bukan
 * referensi	: https://github.com/MohamedFarid612/Calculator-infix-to-postfix-/blob/main/main.c
 * IS			: variabel token berisi alamat dari sebuah node yang akan dicek apakah isi dari subvar info nodenya angka atau bukan
 * FS			: mengembalikan angka 1 apabila isi subvar info node teresebut adalah angka, bila bukan mengembalikan angka 0
 */
int isNumber(address token);

/**
 * fungsi modul	: function yang akan mengecek apakah variabel token berisi angka atau bukan
 * IS			: variabel token berisi sebuah char* yang akan dicek apakah isi variabel tersebut angka atau bukan
 * FS			: mengembalikan angka 1 apabila isi variabel teresebut adalah angka, bila bukan mengembalikan angka 0
 */
int isNumber1(const char *token);

/**
 * fungsi modul	: function yang akan mengecek apakah variabel c berisi operator atau bukan
 * referensi	: https://github.com/MohamedFarid612/Calculator-infix-to-postfix-/blob/main/main.c
 * IS			: variabel c berisi sebuah char yang akan dicek apakah isi variabel tersebut operator atau bukan
 * FS			: mengembalikan angka 1 apabila isi variabel teresebut adalah operator, bila bukan mengembalikan angka 0
 */
int isOperator(char c);		//operator-operator dengan 2 operan
int isOperator2(char c);	//operator-operator dengan 1 operan
int isOperator3(char c);	//simbol selain angka, operator 1, dan operator 2

/**
 * fungsi modul	: function yang akan mengecek apakah variabel infix berisi negatif integer atau bukan
 * referensi	: https://github.com/MohamedFarid612/Calculator-infix-to-postfix-/blob/main/main.c
 * IS			: variabel infix berisi alamat dari sebuah node yang akan di cek apakah isi dari subvar info nodenya adalah bilangan negatif
 * FS			: mengembalikan angka 1 apabila isi variabel teresebut adalah bilangan negatif, bila bukan mengembalikan angka 0
 */
int negativeInteger(address infix);

/**
 * fungsi modul	: function yang akan mengecek apakah variabel c adalah operator yang berada di dalam tanda kurung atau bukan
 * referensi	: https://github.com/MohamedFarid612/Calculator-infix-to-postfix-/blob/main/main.c
 * IS			: variabel c berisi sebuah operator yang akan dicek apakah operator tersebut merupakan operator di dalam tanda kurung atau bukan
 * FS			: mengembalikan angka 1 apabila operator teresebut adalah terdapat setelah tanda kurung, bila tidak mengembalikan angka 0
 */
int isAfter(char c);

/**
 * fungsi modul	: function yang akan mengubah urutan dari operasi dari infix menjadi postfix dan juga mengecek validasi inputan
 * IS			: sebuah linked list yang berisi serangkaian operasi dengan penulisan notasi secara infix dan info dari linked list berisi 1 karakter saja
 * FS			: sebuah linked list yang berisi serangkaian operasi dengan penulisan notasi secara postfix
 */
address infixToPostfix(List input, int *cek);

/**
 * fungsi modul	: function yang akan membuat sebuah tree
 * IS			: sebuah linked list yang berisi serangkaian operasi dengan penulisan notasi secara postfix
 * FS			: sebuah tree yang berisi rangakian operasi
 */
link CreateTree(List L);

/**
 * fungsi modul	: procedure untuk menampilkan tranversal preorder dari tree
 * referensi	: https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/
 */
void preOrder(link root);

/**
 * fungsi modul	: procedure untuk menampilkan tranversal inorder dari tree
 * referensi	: https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/
 */
void inOrder(link root);

/**
 * fungsi modul	: procedure untuk menampilkan tranversal postorder dari tree
 * referensi	: https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/
 */
void postOrder(link root);

/**
 * fungsi modul	: function yang akan membentuk sebuah node baru
 * IS			: sebuah infotype/char/angka yang akan menjadi info dari sebuah linked list/tree
 * FS			: sebuah node baru yang akan direturnkan alamatnya
 */
link AlokasiTree(infotype X);          		//node tree
address AlokasiNode (infotype X);       	//node double linked list
address1 AlokasiStackChar (char X);     	//node stack dengan info bertipe char
address2 AlokasiStackDouble (double X);		//node stack dengan info bertipe double

/**
 * fungsi modul	: procedure untuk memastikan list kosong sebelum digunakan
 * IS			: sebuah variabel pointer linked list yang isinya random
 * FS			: sebuah variabel pointer linked list yang isinya NULL
 */
void CreateList (List * L);   	//list penunjuk node double linked list
void CreateList1 (List1 * L); 	//list penunjuk node stack dengan info bertipe char
void CreateList2 (List2 * L); 	//list penunjuk node stack dengan info bertipe double

/**
 * fungsi modul	: procedure untuk memasukkan node baru ke linked list
  * IS			: sebuah linked list yang belum ditambahkan node baru
  * FS			: sebuah linked list yang jumlah node nya bertambah 1
 */
void InsVLast (List * L, infotype X); 		//memasukkan node double linked list baru pada akhir linked list
void InsertLast (List * L, address P); 
void PushChar (List1 * L, char X);			//memasukkan node stack dengan info char baru pada bagian atas stack
void InsertChar (List1 * L, address1 P);
void Push (List2 * L, double X);			//memasukkan node stack dengan info double baru pada bagian atas stack
void InsertDouble (List2 * L, address2 P);

/**
 * fungsi modul	: procedure untuk menampilkan info-info dari linked list
 */
void PrintNode (List L, infotype C, int *X);

/**
 * fungsi modul	: procedure untuk menghapus sebuah node dari linked list
 * IS			: sebuah linked list yang masih utuh
 * FS			: sebuah linked list yang sudah terhapus satu node nya
 */
infotype Delete (List * L);		//menghapus node double linked list baru pada akhir linked list
char PopChar (List1 * L);   	//menghapus node stack dengan info char baru pada bagian atas stack
double Pop (List2 * L);     	//menghapus node stack dengan info double baru pada bagian atas stack

#endif
