#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *f;     

    // ler o arquivo
    f = fopen("arquivo.txt", "r");

    // condicao de parada
    if(f == NULL){

        printf("Erro na abertura \n");
        system("pause");
        exit(1);
    }

    char c = fgetc(f);

    // forma 1: recomendada apenas para fgetc e fputc
    while(c != EOF){

        printf("%c", c);
        c = fgetc(f);
    }

    // forma 2: recomendada sempre
    while(!feof(f)){

        printf("%c", c);
        c = fgetc(f);
    }

    fclose(f);

    system("pause");
    return 0;
}