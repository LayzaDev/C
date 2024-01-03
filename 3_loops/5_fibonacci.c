#include <stdio.h>

int main(){

    // Declaração das variaveis
    int N, i; 

    // pegando o inteiro digitado pelo usuario
    printf("Digite um numero inteiro: \n");
    scanf("%d", &N);

    // Criando vetor para receber N
    int vetor[N];

    // Loop para percorrer o vetor
    for(i = 0; i < N; i++){

        //Inicializando vetor
        if (i == 0) {

            vetor[i] = 0;

        } else if (i == 1){

            vetor[i] = 1;

        } else {

            // Calculo da sequencia de fibonacci
            vetor[i] = vetor[i - 1] + vetor[i - 2];

        }
    }

    // Loop para printar o resultado da sequencia
    for(i = 0; i < N; i++){
        
        printf("Sequencia de Fibonacci: %d \n", vetor[i]);

    }

    return 0;
}













































 