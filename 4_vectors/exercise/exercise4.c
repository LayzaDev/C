/*
The sorting of values ​​in a vector can be performed by comparing each element with all the others that have not yet been sorted by performing exchange when the element
under analysis is greater than the other element.

1) Write an algorithm to sort a vector.
2) Compare the vector element with its successor.
3) If the current element is greater than the successor
element, then the successor element will be smaller;
2) For each element already sorted, print the element.
3) Run in debug mode to evaluate the algorithm.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Declarando vetor de tamanho 9
    int vetor[9]= {4, 2, 5, 1, 3, 6, 9, 0, 12};

    // Loop para percorrer o vetor
    for(int i = 0; i <= 8; i++){
        
        // variavel auxiliar
        int aux;

        //Loop para comparar o numero atual com o seu sucessor
        for(int next = i + 1 ; next <= 8; next++ ){

            // Condição para verificar qual é o maior numero
            if(vetor[i] > vetor[next]){

                aux = vetor[next]; // Aux vai guardar o valor do vetor[next]

                vetor[next] = vetor[i]; // Vetor[next] vai receber o valor do vetor[i]
                
                vetor[i] = aux; // vetor[i] vai receber o valor de aux

            }
        }

        printf("%d \n", vetor[i]);
    }

    return 0;
}
