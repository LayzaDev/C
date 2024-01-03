#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando a variavel i e o array de tamanho 5
    int i, vetor[5] = {1, 2, 3, 4, 5};
    
    // declarando a variavel soma e atribuindo o valor 0 para ela
    int soma = 0;

    //loop para popularizar o array
    for(i = 0; i < 5; i++){

        //somando os elementos do array
        soma += vetor[i];

        //printando o resultado da soma dos elementos do array
        printf("Soma: %d \n", soma);
    }

   system("pause");
   return 0; 
}