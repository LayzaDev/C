#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declarando variaveis e matriz
    int matriz[3][3] = {{2, 7, 4}, {11, 5, 3}, {10, 9, 8}};
    int menor = matriz[0][0];
    int i, j;

    // Loop para percorrer os elementos das linhas e colunas da matriz
    for(i = 1; i < 3; i++){
        for(j = 1; j < 3; j++){

            // Condições para verificar qual o menor elemento da matriz
            if(menor > matriz[i][j]){
                menor = matriz[i][j];
            }
        }
    }

    printf("Menor: %d \n", menor);

    system("pause");
    return 0;
}