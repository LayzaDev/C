/*
Faca um programa que leia um arquivo com os nomes, quantidades, e preços de diversos produtos, um por linha, e calcule o total da compra.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char nomeprod[30];
    float qtd, valor, total = 0.0;

    FILE *f = fopen("compras.txt", "r");

    if(f == NULL){

        printf("Erro na abertura \n");
        system("pause");
        exit(1);
    }

    while(!feof(f)){

        fscanf(f, "%s %f %f", nomeprod, &qtd, &valor);
        total += qtd * valor;

    }

    printf("Total = %.2f \n", total);

    fclose(f);

    system("pause");
    return 0;
}
