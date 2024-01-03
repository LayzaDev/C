#include <stdio.h>
#include <string.h>

/* Escreva um programa que faça uso das funções: 
   gets - OK
   fgets - OK
   strcpy - OK
   strcat - OK
   strlen - OK
   strstr 
   Execute o programa em modo de depuração (debug). 
*/

int main(){

    char palavra1[20];
    char palavra2[30];

    int i, j = 0;

//---------------- GETS ------------------------

    printf("Digite uma palavra: \n");
    gets(palavra1);
    setbuf(stdin, NULL);

//---------------- STRLEN ----------------------

    int tamanho = strlen(palavra1);

    printf("Tamanho: %d \n", tamanho);

//---------------- STRCPY ----------------------

    strcpy(palavra2, palavra1);

    printf("Palavra 2: %s \n", palavra2);

//---------------- FGETS ------------------------

    printf("Digite outra palavra: \n");
    fgets(palavra2, 30, stdin);
    
//---------------- STRCAT -----------------------

    strcat(palavra1 , palavra2);

    printf("Palavras concatenadas: %s \n", palavra1);

//---------------- STRSTR ------------------------


}