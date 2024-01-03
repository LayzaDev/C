#include <stdio.h>

int main(){

    int matrizA[3][2];
    int matrizB[2][3];
    int produto[3][3];
    int valor;

    // Inserindo elementos na matriz A
    for(int linha = 0; linha < 3; linha++ ){
        for(int coluna = 0; coluna < 2; coluna++){

            printf("Insira valores na matriz A: \n");
            scanf("%d", &valor);

            matrizA[linha][coluna] = valor;
        }
    }

    // Inserindo elementos na matriz B
    for(int coluna = 0; coluna < 3; coluna++ ){
        for(int linha = 0; linha < 2; linha++){
            
            printf("Insira valores na matriz B: \n");
            scanf("%d", &valor);

            matrizB[linha][coluna] = valor;
        }
    }

    // multiplicando matrizes
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){

            produto[linha][coluna] = matrizA[linha][coluna] * matrizB[linha][coluna];

        }
    }

    for (int linha = 0; linha < 3; linha++){ 
        for(int coluna = 0; coluna < 3; coluna++){

            printf("Multiplicação da Matriz A e Matriz B: %d \n", produto[linha][coluna]);

        }
    }
    
    return 0;
}