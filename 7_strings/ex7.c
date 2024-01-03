#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char M[100] = "The quick brown fox jumps over the lazy dog";
    char N[100] = "A ligeira raposa marrom saltou sobre o cachorro preguicoso";
    char R[100];

    // 1) imprimir o tamanho das strings M e N

    for(int i = 0; i < 100; i++){

        if(M[i] == '\0'){
            printf("Tam de M: %ld \n", strlen(M));
        }
        
        if(N[i] == '\0'){
            printf("Tam de N: %ld \n", strlen(N));
        }
    }
  
    // 2) copiar M para R

    for(int i = 0; i < 100; i++){
        while(M[i] != '\0'){

            strcpy(R[i], M[i]);

            printf("%d", R[i]);
        }
    }


    // 3) concatenar N em R

    return 0;
}