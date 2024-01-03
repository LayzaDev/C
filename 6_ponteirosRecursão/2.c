#include <stdio.h>
#include <stdlib.h>

int main(){

    int *vetor = (int *) malloc(5 * sizeof(int));

    printf("Insira elementos no vetor: \n");

    for(int i = 0; i < 5; i++){

        scanf("%d", &*vetor+i);

    }

    printf("Dobro:");
    printf("\n");

    for(int i = 0; i < 5; i++){

        printf("%d \n", (*vetor + i) * (*vetor + i));

    }

    free(vetor);

    return 0;
}