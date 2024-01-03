/*
EXERCÍCIO 5
Escreva um programa que leia o nome de um arquivo texto e uma palavra.
O programa deve informar o número de vezes que a palavra aparece no arquivo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){

    // DEFINIR VARIAVEIS
    char nome[100], busca[100], buffer[1024];

    // CRIAR ARQUIVO AUXILIAR
    FILE *arq;

    // ABRIR ARQUIVO PARA LEITURA
    arq = fopen("arq5.txt", "rt");

    if(arq == NULL){
        printf("Erro na abertura \n");
        return 0;
    }

    // LER NOME DO ARQUIVO;
    printf("Nome do arquivo: ");
    gets(nome);

    // LER PALAVRA PARA BUSCA
    printf("Busca: ");
    gets(busca);
    
    // CONDIÇÕES DE BUSCA
    int contagem = 0;

    while(!feof(arq)){  
        fgets(buffer, 1024, arq);

        char *ocorrencia = buffer;

        while(ocorrencia != NULL){
            
            ocorrencia = strstr(ocorrencia, busca);

            if(ocorrencia != NULL){
                contagem++;
                printf("Palavra: %s \n", ocorrencia);
                ocorrencia++;
            }
        }
    }

    printf("A palavra %s foi encontrada %d vezes no arquivo texto.", busca, contagem);
    printf("\n");

    return 0;
}