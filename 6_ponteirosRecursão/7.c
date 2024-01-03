#include <stdio.h>
#include <stdlib.h>

int main(){

    int **matA = 0, **matB = 0, **matR = 0;
    int linA = 2, colA = 3, linB = 3, colB = 4;

 // ------------------ MATRIZ A ------------------------

   matA = (int **) malloc(linA * sizeof(int *));

    for(int i = 0; i < linA; i++){

        matA[i] = (int *) malloc( colA * sizeof(int));

    }

    printf("Insira elementos na Matriz A:");
    printf("\n \n");

    for(int i = 0; i < linA; i++){
        for(int j = 0; j < colA; j++){

            scanf("%d", &matA[i][j]);

        }
    }

    printf("\n");

 // ------------------ MATRIZ B ------------------------

    matB = (int **) malloc(linB * sizeof(int *));

    for(int i = 0; i < linB; i++){

        matB[i] = (int *) malloc(colB * sizeof(int));
        
    }

    printf("Insira elementos na matriz B:");
    printf("\n \n");

    for(int i = 0; i < linB; i++){
        for(int j = 0; j < colB; j++){

            scanf("%d", &matB[i][j]);

        }
    }

 // ------------------ MATRIZ R ------------------------

    matR = (int **) malloc(linA * sizeof(int *));

    for(int i = 0; i < linA; i++){

        matR[i] = (int *) malloc(colB * sizeof(int));
        
    }

    for(int i = 0; i < linA; i++){
        for(int j = 0; j < colB; j++){

            matR[i][j] = 0;

        }
    }

    printf("\n");

 // ------------------ MULTIPLICACAO --------------------

    printf("Matriz Resultante ");
    printf("\n \n");

    for(int i = 0; i < linA; i++){
        for (int j = 0; j < colB; j++){
            for(int k = 0; k < colA; k++){

                matR[i][j] += matA[i][k] * matB[k][j];
                printf("%d ", matR[i][j]);

            }
            printf("\n");
        }
    }

 //------------------ DESALOCANDO --------------------

    for(int i = 0;i < linA; i++){

        free(matA[i]);
    }

    for(int i = 0; i < linB; i++){

        free(matB[i]);
    }

    for(int i = 0;i < linA; i++){
        
        free(matR[i]);
    }

    return 0;
}