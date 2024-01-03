/*
função fgets()

- Lê uma string de um arquivo, até encontrar um (\n)
  ou "tamanho - 1" caracteres.

    char* fgets(char *str, int tam, FILE *fp);

Retorna: 

- Em cao de erro: NULL
- Em caso de sucesso =. um ponteiro para o primeiro caractere
de str.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[20];
    FILE *arq;

    arq = fopen("arquivo.txt", "r");

    if(arq == NULL){

        printf("Erro na abertura \n");
        system("pause");
        exit(1);
    }

    char *result = fgets(str, 12, arq); // lê 11

    if(result == NULL){
        
        printf("Erro na leitura \n");

    } else {

        printf("%s", str);

    }

    printf("\n");
    fclose(arq);

    system("pause");
    return 0;
}