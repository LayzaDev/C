/*
    1) Crie uma estrutura que represente um atleta. ok!
    2) A estrutura deve conter o nome do atleta, seu esporte, idade, peso e altura. ok!
    3) Escreva um programa que leia os dados de cinco atletas em um vetor. ok!
    4) Calcule e exiba os nomes do atleta mais alto e do atleta mais velho. ok!
    5) Escreva uma função fazer a leitura da estrutura.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Atleta
{
    char nome[30];
    char esporte[20];
    int idade;
    float peso, altura;
};

typedef struct Atleta atleta;

void leitura(atleta *B){

    printf("\nNome: "); fgets(B -> nome, 30, stdin);

    printf("\nEsporte: "); fgets(B -> esporte, 20, stdin);

    printf("\nIdade: "); scanf("%d", &B -> idade);

    printf("\nPeso: "); scanf("%f", &B -> peso);

    printf("\nAltura: "); scanf("%f", &B -> altura);

    setbuf(stdin, NULL);
}

int main(){

    atleta A[5];

    for(int i = 0; i < 5; i++){

        leitura(&A[i]);

    }

    //procurar o mais alto
    atleta maiorAltura = A[0];
    for(int i = 0; i < 5; i++){
        if(maiorAltura.altura < A[i].altura){

            maiorAltura = A[i];
            
        }
    }

    printf("Mais alto: %s", maiorAltura.nome);   

    // procurar mais velho
    atleta maisVelho = A[0];
    for(int i = 0; i < 5; i++){

        if(maisVelho.idade < A[i].idade){
            maisVelho = A[i];
        }
    }

    printf("Mais velho: %s", maisVelho.nome); 

    return 0;
}