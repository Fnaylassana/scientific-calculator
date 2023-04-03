#include "Fauza.h"
#include "naufal.h"
#include "Hasby.h"
#include "aryagara2.h"
#include "aulianf.h"

int main() 
{
	infotype input;
	List infix, postfix, preorder;
    char lagi = 'y';
    infotype x, temp;
    double hasil;
    int ulang, JmlNode;   
	link Tree; 
    
    while(lagi == 'y' || lagi == 'Y')
    {
    	awal :
    		system("cls");
	    	ulang = 0;	    	
			CreateList (&infix);
			CreateList (&postfix);
			
		    printf ("\nMasukkan operasi yang akan anda hitung atau ketik H untuk help: ");
			input = (infotype) malloc (50*sizeof (char));
			scanf (" %[^\n]s", input);
			
			if (input[0] == 'h' || input[0] == 'H'){
				header();
				help();
			} else{
				strlwr(input);
			    
			    int i = 0;
			    while (input[i] != '\0'){
					temp = (infotype) malloc (sizeof (char));
			    	sprintf (temp, "%c", input[i]);
					InsVLast (&infix, temp);
					i++;
				}
				Top(postfix) = infixToPostfix(infix, &ulang);
				
				if(!ulang){
			    	PrintNode (postfix, "Postfix : ", &JmlNode);                                                                   
			    	hasil = hitungIsiPostfix(postfix, &ulang);
				} else{
		        	printf ("Input anda tidak sesuai, cek kembali inputan anda sesuai ketentuan");
				}
				
			    if (ulang){
			    	getche();
			    	goto awal;
				}
					
				Tree = CreateTree(postfix);
				
				preorder = TranversalPreOrder(Tree, JmlNode);
				
				PrintNode (preorder, "Tranversal PreOrder : ", &JmlNode);
			    printf ("Hasilnya adalah: %lf\n\n", hasil);
			}
			
		    printf ("Apakah anda ingin menghitung kembali? (y/t)");
		    lagi = getche();
    }
    
    return 0;
}
