#include <stdio.h>

int main(){

    // Declarando variaveis
    int numero, maior, qtdNumeros;

    // Pegando valor de qtd
    printf("Informe a quantidade de numeros a serem lidos: \n");
    scanf("%d", &qtdNumeros); 

    int vetor[qtdNumeros];// [NULL, NULL, NULL, NULL, NULL]

    // Loop para percorrer o vetor;
    for(int i = 0; i < qtdNumeros; i++){

        printf("Digite um numero: \n");
        scanf("%d", &numero); // lendo o numero do usuario

        vetor[i] = numero; // inserindo numeros ao vetor

    }

    // [4 5 2 7 5]
    // maior = 5;
    for(int i = 0; i < qtdNumeros; i++){

        if(i == 0){

            maior = vetor[i];

        }
        if(i > 0){

            if(vetor[i] > maior)
                maior = vetor[i];

        }

    }

    return 0;
}