#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando matriz 8x8
    int matriz[3][3];

    //declarando variaveis
    int soma = 0;
    int i, j;

    //loop para popular a matriz
    for(i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){

            printf("Defina os elementos da matriz: \n");
            scanf("%d", &matriz[i][j]);
        }
    }

    // Loop para percorrer a matriz e somar os elementos na diagonal principal
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){

            // condições para somar os elementos na diagonal
            if(j == i){
                soma += matriz[i][j];
            }
        }
    }

    // printando resultado da soma da diagonal principal da matriz
    printf("Soma da diagonal principal: %d \n", soma);

    system("pause");
    return 0;
}