/*
DESCRIPTION

The program reads a matrix of size 3x3, creates the transposed matrix of this matrix and prints it on the screen. The transposed matrix is ​​obtained by replacing the rows with the columns of the original matrix.
*/

#include <stdio.h>
#include <stdlib.h>

int **transposed(int **matrix, int row, int column){

    int **transposedMatrix = malloc(row * sizeof(int *));

    for(int i = 0; i < row; i++){
        transposedMatrix[i] = malloc(column * sizeof(int));
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            transposedMatrix[i][j] = matrix[j][i];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            matrix[i][j] = transposedMatrix[i][j];
        }
    }

    printf("\n");
    printf("Transposed Matrix \n\n");
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return transposedMatrix;
}


int main (){

    int row = 3, column = 3;

    int **matrixA = malloc(row * sizeof(int *));

    for(int i = 0; i < row; i++){
        matrixA[i] = malloc(column * sizeof(int));
    }

    printf("Insert elements into Matrix A: \n\n");

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("\nMatrix A \n\n");

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", matrixA[i][j]);
        }
        printf("\n");
    }


    transposed(matrixA, row, column);

    return 0;
}
