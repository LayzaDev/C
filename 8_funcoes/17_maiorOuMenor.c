#include <stdio.h>

int maiorMenor(int *vetor, int tam, int *maior, int *menor){

    *maior = *vetor;
    *menor = *vetor;

    for(int i = 0; i < tam; i++){

        if(*maior < *(vetor + 1)) {

            *maior = *(vetor + 1);
        }       

        if(*menor > *(vetor + 1)){

            *menor = *(vetor + 1);

        }

    }   

    return 0;
}

int main(){

    int n, maior, menor;
    int valor = 0;

    printf("Defina o tamanho do vetor: \n");
    scanf("%d", &n);

    int vetor[n];

    printf("Insira elementos no vetor: \n");

    for(int i = 0; i < n; i++){

        scanf("%d", &valor);

        vetor[i] = valor;

    }

    maiorMenor(vetor, n, &maior, &menor);

    printf("Maior: %d \n Menor: %d \n ", maior, menor);

    return 0;
}