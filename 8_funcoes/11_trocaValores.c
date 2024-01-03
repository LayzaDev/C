#include <stdio.h>
#include <stdlib.h>

// Crie uma função que troque o valor de dois números inteiros passados por referência.

void troca(int *a, int *b){

    int temp;

    temp = *a;
    *a = *b;
    *b = temp; 

}

int main(){

    int A, B;

    printf("Valor de A: ");
    scanf("%d", &A);

    printf("Valor de B: ");
    scanf("%d", &B);

    troca(&A, &B);

    printf("A: %d \n", A);
    printf("B: %d \n", B);
    return 0;
}