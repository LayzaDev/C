#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    /*  problema:
        1. Ler um arquivo contendo um texto em minusculo
        2. Criar outro arquivo com o texto em maiusculo.
    */

    FILE *f1, *f2;     

    // ler o arquivo
    f1 = fopen("minusculo.txt", "r");

    // gravar arquivo
    f2 = fopen("maiusculo.txt", "w");

    // condicao de parada
    if(f1 == NULL || f2 == NULL){

        printf("Erro na abertura");
        system("pause");
        exit(1);
    }

    char c = fgetc(f1);

    // Fazendo leitura
    while(c != EOF){

        c = fgetc(f1);
    }

    // gravando caracteres maiusculos
    while(c != EOF){

        fputc(toupper(c), f2);
        c = fgetc(f1);
    }

    // fechando arquivos
    fclose(f1);
    fclose(f2);

    system("pause");    
    return 0;
}