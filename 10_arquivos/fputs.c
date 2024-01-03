/*
Função fputs()

- Escreve uma string em um arquivo.

    int fputs(char *str, FILE *fp);

Retorna:

- Em caso de erro: EOF
- Em caso de sucesso: um valor diferente de ZERO.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *f;

    f = fopen("arquivo.txt", "w");

    if(f == NULL){
        printf("Erro na abertura \n");
        system("pause");
        exit(1);
    }

    char texto[40] = "Meu programa em C \nIncrivel \n";

    int retorno = fputs(texto, f);

    if(retorno == EOF){

        printf("Erro na gravação \n");
    
    }

    /*Como separar strings*/
    fputs("Hello \n", f);
    fputs("World \n", f);

    fputs("Hello", f);
    fputc("\n", f);
    fputs("World", f);

    fputs("Hello ", f);
    fputs("world", f);

    fclose(f);

    system("pause");
    return 0;
}