#include <stdio.h>

int main(){

    // Declarando as variaveis
    int num, media, menor, maior, soma;

    // Loop para percorrer os valores digitados pelo usuario
    for(int i = 0; i < 10; i++){

        // Pegando os valores digitados pelo usuario
        printf("Digite um numero: \n");
        scanf("%d", &num);

        // inicializando as variaveis quando i == 0, ou seja, na primeira vez que o for rodar;
        if(i == 0){
            soma = num;
            menor = num;
            maior = num;
        }

        if(i > 0){
            soma += num;
        }
         // condição para o menor numero
        if(num < menor){
            menor = num;
        } // condição para o maior numero
        if(num > maior){
            maior = num;
        }
        
        soma += num;

    }

    media = soma / 10;

    printf("A media dos numeros eh: %d \n", media);

    printf("O menor numero eh %d \n", menor);

    printf("O maior numero eh: %d \n", maior);

    return 0;
}





