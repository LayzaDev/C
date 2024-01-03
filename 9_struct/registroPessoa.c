#include <stdio.h>
#include <stdlib.h>

/*Crie uma instância estática e uma instância dinâmica
dessa estrutura, fazendo a leitura dos dados do
teclado. Após a leitura, imprima os dados lidos.*/

// estrutura é um tipo de dado
struct pessoa {
    char nome[20];
    int idade;
    char endereco[20];
};

typedef struct pessoa Pessoa;

int main(){

    struct pessoa p1; // estrutura estatica

    gets(p1.nome); 
    gets(p1.endereco);
    scanf(" %d ", &p1.idade);
    printf("\n %s %s %d \n", p1.nome, p1.endereco, p1.idade);

    // c++ == struct pessoa *p2 = new struct pessoa;
    struct pessoa *p2 = malloc(sizeof(struct pessoa)); // estrutura dinamica

    gets(p2 -> nome);
    gets(p2 -> endereco);
    scanf("%d", &p2 -> idade);
    printf("\n %s %s %d", p2 -> nome, p2 -> endereco, p2 -> idade);

    free(p2);

}