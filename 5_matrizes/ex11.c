#include <stdio.h>

int main(){

    int matrizA[3][2], matrizB[2][3], produto[3][3];
    int valor;

    for(int L = 0; L < 3; L++){
        for(int C = 0; C < 2; C++){

            printf("Insira elementos na matriz A: \n");
            scanf("%d", &valor);

            matrizA[L][C] = valor;
        }
    }    

    for(int C = 0; C < 2; C++){
        for(int L = 0; L < 3; L++){

            printf("Insira elementos na matriz B: \n");
            scanf("%d", &valor);

            matrizB[L][C] = valor;
        }
    }

    for(int L = 0; L < 3, L++){
        for(int C = 0; C < 3; C++){

            produto[L][C] = 0;

            for(int i = 0; i < 2; i++){
                produto[L][C] = matrizA[L][i] * matrizB[i][C];

                printf("Matriz: %d \n", produto[L][C]);
            }

        }
    }

    return 0;
}