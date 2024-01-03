#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, **mat;

    int i, j;

    printf("Defina o valor de N: \n");

    do{

        scanf("%d", &N);

    } while (N < 0);

    mat = (int**) malloc(N * sizeof(int *));

    for(i = 0; i < N; i++){

        mat[i] = (int *) malloc(N * sizeof(int));

    }

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){

            if(i == j){

                mat[i][j] = 1;
            }
            if(i != j){
                
                mat[i][j] = 0;
            }
        }
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){

           printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < N; i++){

        free(mat[i]);
    }

    free(mat);

    return 0;
}