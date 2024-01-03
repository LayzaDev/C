#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declando variaveis e array
    int i, vetor[5] = {6, 4, 3, 7, 10};
    int maior = vetor[0];

    // Loop para percorrer e popularizar o vetor
    for(i = 1; i < 5; i++){

        // Condições para descobrir o maior valor do array
        //"O valor dentro da variavel 'maior' é menor que o valor guardado na posição 'i'?"
        if(maior < vetor[i]){
            maior = vetor[i];
        } 
    }  

    printf("Maior: %d \n", maior);  

    system("pause");
    return 0;
}