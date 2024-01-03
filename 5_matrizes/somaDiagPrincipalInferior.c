#include <stdio.h>

int main(){

    int matriz[4][4], soma = 0, sum = 0, valor;

    for(int linha = 0; linha < 4; linha++){
        for(int coluna = 0; coluna < 4; coluna++){

            printf("Insira valores na matriz: \n");
            scanf("%d", &valor);

            matriz[linha][coluna] = valor;

        }
    }

    for(int linha = 0; linha < 4; linha++){
        for(int coluna = 0; coluna < 4; coluna++){

            if(linha == coluna){

                soma += matriz[linha][coluna];

            }
            if(linha > coluna){

                sum += matriz[linha][coluna];

            }
        }
    }

    printf("Soma da diagonal principal: %d \n", soma);
    printf("Soma da diagonal inferior: %d \n", sum);

    return 0;
}