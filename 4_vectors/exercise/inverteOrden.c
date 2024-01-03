/*
Read 20 elements in a vector A and build a new vector B with elements of A, but inverted, that is, the first element of A becomes the last element of B, and so on.

After creating vector B with the values, print the 2 vectors.

Use a constant to reference the size of the vector:

#define
const int
*/

#include <stdio.h>

// Referenciando o tamanho do vetor
#define TAM 5

int main(){

    // Declarando vetores
    int vetorA[TAM], vetorB[TAM];

    // Loop para popular o vetor A
    for(int i = 0; i < TAM; i++){

        printf("Defina os valores do vetor A: \n");
        scanf("%d", &vetorA[i]);
     
    }

    // Loop para vetorB receber os elementos do vetorA invertidos
    for(int i = 0; i < TAM; i++){

        vetorB[i] = vetorA[TAM - i - 1];
    }

    // Imprimir vetor A
    for(int i = 0; i < TAM; i++){

        printf("\n vetor A: %d", vetorA[i]);

    }

    //imprimir vetor B
    for(int i = 0; i < TAM; i++){

        printf("\n vetor B: %d ", vetorB[i]);

    }

    return 0;
}
