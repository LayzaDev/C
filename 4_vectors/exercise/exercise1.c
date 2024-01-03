/* 
Read a vector of 10 elements. print thevector elements identifying whether each value read is even or odd. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando variaveis

    int vetor[10];

    // loop para percorrer e popularizar o vetor
    for(int i = 0; i < 10; i++){
        
        // condição para verificar se é par ou impar
        if(i % 2 == 0){

            printf("Par: %d \n", i);

        } else {

            printf("Impar: %d \n", i);

        }
    }

    system("pause");
    return 0;
}
