#include <stdio.h>
#include <stdlib.h>

float **aloca(int linhas, int colunas){

    float **matriz = (float **) malloc(linhas * sizeof(float*));
    if(matriz == NULL){
        printf("DEU ERRADO \n");
    }

    for(int i = 0; i < linhas; i++){
        
        matriz[i] = (float *) malloc(colunas * sizeof(float));

        if(matriz[i] == NULL){
            printf("DEU ERRADO \n\n\n\n");
        }
    }

    

    return matriz;

}

void leitura(float **m, int linhas, int colunas){

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){

            printf("Insira elementos na matriz[%d][%d]: \n", i, j);
            scanf("%f", &m[i][j]);

        }
    }

    return;
}

float **multiplica( float **matrizA, int linhasA, int colunasA, float **matrizB, int linhasB, int colunasB){

    float **matrizResultado = aloca(linhasA, colunasB);
    
    for(int i = 0; i < linhasA; i++){
        for(int j = 0; j < colunasB; j++){

            matrizResultado[i][j] = 0;

        }
    }

    for(int i = 0; i < linhasA; i++){
        for(int j = 0; j < colunasB; j++ ){
            for(int k = 0; k < colunasA; k++){

                matrizResultado[i][j] = matrizResultado[i][j] + matrizA[i][k] * matrizB[k][j];

            }   
        }
    }

    return matrizResultado;
}

void imprime(float **matriz, int linhas, int colunas){

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){

            printf("%f ", matriz[i][j]);

        }
        printf("\n");
    }

    printf("\n \n");

    return;
}

void desaloca(float **matriz, int linhas){

    for(int i = 0; i < linhas; i++){

        free(matriz[i]);
    }

    free(matriz);
}



int main(){

    float **m1 = aloca(2, 3);
    leitura(m1, 2, 3);

    float **m2 = aloca(3, 4);
    leitura(m2, 3, 4);

    float **m3 = multiplica(m1, 2, 3, m2, 3, 4);

    imprime(m1, 2, 3);
    imprime(m2, 3, 4);
    imprime(m3, 2, 4);

    desaloca(m1, 2);
    desaloca(m2, 3);
    desaloca(m3, 2);

    return 0;
}