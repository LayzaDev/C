/*
Write an algorithm to obtain the sum of two matrices A and B, storing the result in a third matrix C.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declarando matrizes
    int matrizA[2][3] = {{15, 52, 29},{47, 34, 85}};
    int matrizB[2][3] = {{5, 13, 11},{8, 7, -10}};
    int matrizC[2][3];

    // loop para percorrer linhas e colunas da matrizA
    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 3; coluna++){

            matrizA[linha][coluna];

        }
    }

    // loop para percorrer linhas e colunas da matrizB
    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            
            matrizB[linha][coluna];

        }
    }

    // loop para armazenar a soma de matrizA e matrizB em matrizC
    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 3; coluna++){

            matrizC[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];

        }
    }

    // loop para pegar o resultado o da matrizC
    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 3; coluna++){

            printf("MatrizC: %d \n", matrizC[linha][coluna]);

        }
    }

    system("pause");
    return 0;
}