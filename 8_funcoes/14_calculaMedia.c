#include <stdio.h>

int media(float *vetor, int n){

    float media = 0.0;

    for(int i = 0; i < n; i++){
        
        media += vetor[i] / n;

    }

    printf("Media: %.2f \n", media);

    return media;
}

int main(){

    int n;
    float valor = 0; 

    printf("Defina o tamanho do vetor: \n");
    scanf("%d", &n);

    float vetor[n];

    printf("Insira elementos no vetor: \n");

    for(int i = 0; i < n; i++){

        scanf("%f", &valor);

        vetor[i] = valor;

    }

    media(vetor, n);
    
    return 0;
}