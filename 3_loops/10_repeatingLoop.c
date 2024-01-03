#include <stdio.h>
// 1 - Crie um laço que vá de 1 até 1000, e imprima apenas os números pares.
// 2 - Comente seu código

int main (){

    // criando laço de repetição que vai de 1 até 1000 

    for (int i = 1; i <= 1000; i++ )
    {   
        //criando condição para printar somente numeros pares
        if(i % 2 == 0){
            printf("%d \n", i); //printando os numeros pares de i
        }
    }
    

    return 0;
}