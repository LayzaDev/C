#include <stdio.h>

// 1 - Crie um vetor com n posições, insira elementos no mesmo, e ao fim do programa, mostre a média dos elementos. USE ALGUM LAÇO DE REPETIÇÃO

int main (){

   int soma = 0;
   int tamanhoVetor; 

   printf("Defina um tamanho para o vetor: \n");
   scanf("%d", &tamanhoVetor);

   int vetor[tamanhoVetor];
   
   for(int i = 0; i < tamanhoVetor; i++){
        
        int numero; 

        printf("Defina os elementos do vetor: \n");
        scanf("%d", &numero);

        vetor[i] = numero;   
   }

   for (int j = 0; j < tamanhoVetor; j++){

        soma += vetor[j];

   }

   int media = soma/tamanhoVetor;

   printf("Media: %d \n", media);

   return 0;

}