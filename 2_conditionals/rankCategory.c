#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7){

        printf("Categoria do nadador: Infantil A \n");

    } else if(idade >= 8 && idade <=10){

        printf("Categoria do nadador: Infantil B \n");

    } else if(idade >= 11 && idade <= 13){

        printf("Categoria do nadador: Juvenil A \n");

    } else if(idade >= 14 && idade <= 17){

        printf("Categoria do nadador: Juvenil B \n");

    } else if (idade >= 18){

        printf("Categoria do nadador: Sênior \n");

    } else {

        printf("ERRO!");

    }

    return 0;
}