#include <stdio.h>
#include <stdlib.h>

int main(){

    int N; 

    printf("Defina o valor de N: ");
    scanf("%d", &N);
    printf("\n");
    

    while(N <= 0){

        printf("Valor invalido.\nDigite outro numero: \n\n");
        scanf("%d", &N);
    }

    int *V = (int *) malloc(N * sizeof(int));

    printf("Insira elementos no vetor: ");
    printf("\n\n");

    for(int i = 0; i < N; i++){

        scanf("%d", &V[i]);

        while(V[i] <= 2){

            printf("\n");
            printf("Valor invalido!\nDigite outro numero: \n");
            printf("\n");
            scanf("%d", &V[i]);
            
        }
    }

    printf("\n");
    printf("Saida");
    printf("\n \n");

    for(int i = 0; i < N; i++){

        printf("%d \n", V[i]);
    }

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(){

    int N;

    printf("Valor de N: \n");

    do { scanf("%d", &N); } while (N <= 0);

    int *V = (int *) malloc (N * sizeof(int));

    printf("Insiira elementos no vetor: \n");
    for(int i = 0; i < N; i++){

        // ler N valores maiores ou iguais a 2
        do {
           scanf("%d", &V[i]);
        } while (V[i] < 2);
    }

    for(int i = 0; i < N; i++){

        printf("%d", V[i]);
    }

    free(V);

    return 0;
}

*/