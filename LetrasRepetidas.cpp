#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
  char frase[100];
  int fraseaux[100];
  int ascii[255];
  int i;
  int nope;

  printf("Digite uma frase (sem acentos): \n");
  printf("\n");
  gets(frase);

 for (i=0; i<255; i++){
  ascii[i]=0; 
    }

 for (i=0; i<strlen(frase);i++){
  fraseaux[i]=frase[i];
    }

 for (i=0; i<strlen(frase); i++){
        if (fraseaux[i] > 64 && fraseaux[i] <91){
           fraseaux[i]=fraseaux[i]+32;
           }
    }    

 for (i=0; i<strlen(frase); i++){                        
  if (fraseaux[i] != 32){                            
        ascii[fraseaux[i]]++; 
        }                             
 }

 for (i=0; i<255; i++){
        if (ascii[i] > 1){      
   printf("\nA letra %c repetiu %d vezes na frase que voce escreveu!\n", i, ascii[i]);
           } 
		else { 
   nope++;
 		   } 
		if (nope == 255) {
   printf("\nNenhuma letra se repetiu na frase inserida!\n");
           }
 }
 
  printf("\n");
  system("pause");
  return 0;
}
