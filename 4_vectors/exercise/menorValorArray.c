#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declarando variaveis e array

    int vetor[5] = {2, 1, 4, 10, 3};
    int menor = vetor[0];
    int i;

    // Loop para percorrer os elementos e popular o array
    for(i = 1; i < 5; i++){

        // Condições para descobrir o menor valor do array
        // Se o valor que está guardado dentro da variavel MENOR for menor que o valor que está na posição i, então MENOR vai receber o valor que está na posição I
        if(menor > vetor[i]){
            menor = vetor[i];
        }
    }

    printf("Menor: %d \n", menor);

    system("pause");
    return 0;
}