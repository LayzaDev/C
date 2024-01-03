#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Digite um numero, por favor: \n");
    scanf("%d", &numero);

    if(numero % 2 == 0 && numero > 100){

        printf("Parabens! \n");

    } else if (numero % 2 == 1 && numero < 70){

        printf("Parabens! \n");

    } else {

        printf("Sinto muito! \n");

    }

    return 0;
}