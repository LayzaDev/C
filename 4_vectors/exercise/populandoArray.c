#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando um array de 3 dimensões de tamanho 5
    int cub[5][5][5];
    //declarando uma variavel para cada dimensão do array
    int i, j, k;

    //preenchendo o array de 3 dimensões com zeros
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            for(k = 0; k < 5; k++){
                cub[i][j][k] = 0;

                printf("i: %d j: %d k: %d \n", i, j, k);
            }
        }
    } 

    system("pause");
    return 0;
}