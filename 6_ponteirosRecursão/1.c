#include <stdio.h>
#include <stdlib.h>

int main(){

    float vetEstatico[10];
    float aux = 0;

    printf("Vetor Estatico \n");
    printf("\n");

    printf("Insira elementos no vetor estatico: \n");
    printf("\n");

    for(int i = 0; i < 10; i++){

        scanf("%f", &aux);
        vetEstatico[i] = aux;

    }

    printf("\n");

    for(int i = 0; i < 10; i++){

        printf("Conteúdo[%d]: %.2f \nEndereco[%d]: %p \n",i, vetEstatico[i], i, vetEstatico + i);

    }

    printf("\n");
    printf("----------------------------------------------------------------------------------------- \n");

    printf("Vetor Dinamico \n");
    printf("\n");

    float tam, *vetDinamico;

    float *p = vetDinamico;

    printf("Digite o tamanho do vetor dinamico: \n");   
    printf("\n"); 
    scanf("%f", &tam);
    printf("\n");
    

    p = (float *) malloc(tam * sizeof(float));

    if(p == NULL){

        printf("ERROR \n");
        exit(1);

    }

    printf("Insira elementos no vetor dinamico: \n");
    printf("\n");

    for(int i = 0; i < tam; i++){

        scanf("%f", &p[i]);

    }

    printf("\n");

    for(int i = 0; i < tam; i++){

        printf("Conteudo[%d]: %.2f \n", i, *(p + i));
        printf("Endereço[%d]: %p \n", i, p + i);
    }

    return 0;
}