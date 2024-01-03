#include <stdio.h>
#include <stdlib.h>

/*
    Para ler um caractere de um arquivo usamos a funcao fgetc().

    int fgetc(FILE *fp);
*/

int main(){

    FILE *f;

    f = fopen("arquivo.txt", "r");

    if(f == NULL){

        printf("Erro na abertura do arquivo \n");
        system("pause");
        exit(1);

    }

    char c;

    // Ira ler apenas 10 caracteres
    for(int i = 0; i < 10; i++){

        c = fgetc(f);
        printf("%c", c);

    }

    char C = fgetc(f);

    while(c != EOF){

        printf("%c", c);
        c = fgetc(f);

    }

    printf("\nFIM\n");

    fclose(f);

    system("pause");
    return 0;
}

