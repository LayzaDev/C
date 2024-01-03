#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia;
    printf("Digite um numero de 1 a 7: \n");
    scanf("%d", &dia);

    switch (dia){
        case 1: printf("Domingo \n");
        break;

        case 2: printf("Segunda-Feira \n");
        break;

        case 3: printf("Terca-Feira \n");
        break;

        case 4: printf("Quarta-Feira \n");
        break;

        case 5: printf("Quinta-Feira \n");
        break;

        case 6: printf("Sexta-Feira \n");
        break;

        case 7: printf("Sabado-Feira \n");
        break;

        default: printf("Erro! \n");
        break;
    }

    return 0;
}