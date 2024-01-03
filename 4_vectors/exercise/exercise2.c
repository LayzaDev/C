/*
Write an algorithm that reads a vector of N elements. After typing the last value, find and display the largest element.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declarando a variavel N
    int i, j, N;
    int maior = 0;

    // Pegando o valor de N digitado pelo usuario
    printf("Defina o valor de N: \n");
    scanf("%d", &N);

    // Criando o vetor de N elementos
    int vetor[N];

    // Loop para popularizar o vetor de tamanho N
    for(i = 0; i < N; i++){

        //Definindo os elementos do vetor
        printf("Defina os valores do vetor de N elementos: \n");
        scanf("%d", &vetor[i]);

    }

    // Loop para verificar os elementos do vetor[i]
    for(j = 0; j < N; j++){

        if(maior < vetor[j]){
            maior = vetor[j];
        }
    }

    // Printando o maior elemento do vetor
    printf("Maior: %d \n", maior);


    system("pause");
    return 0;
}
