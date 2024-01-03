#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*   
    Para se escrever um caractere em um arquivo usamos a funcao fputc().

    int fputc(char c, FILE *fp);
*/

int main(){

    // Criando arquivo
    FILE *f;

    // Abrindo arquivo
    f = fopen("arquivo.txt", "w");

    // Condicoes de parada e erro
    if(f == NULL){

        printf("ERRO na abertura \n");
        system("pause");
        exit(1);
    }

    // Criando variavel
    char texto[20] = "Meu programa em C";

    // Percorrendo caracteres da variavel texto
    for(int i = 0; i < strlen(texto); i++){

        // Gravando string, caractere a caractere no arquivo.
        fputc(texto[i], f);
        // Posso modificar string.
        fputc(' ', f);

    }

    // Fechando arquivo*/
    fclose(f);

    system("pause");
    return 0;

}

