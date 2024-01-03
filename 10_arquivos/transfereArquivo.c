#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

 //------------------------- Arquivo 1 ---------------------------

    // Peguei o nome do arquivo 1
    char nome1[100]; printf("Arquivo 1: "); gets(nome1);

    // Abri e li o arquivo 1
    FILE *a1 = fopen("arquivo1.txt", "r");

    // Condições de erros
    if(a1 == NULL){ printf("Erro para abrir %s", nome1); return 0; }

 //------------------------- Arquivo 2 ---------------------------
    
    // Peguei o nome do arquivo 1
    char nome2[100]; printf("Arquivo 2: "); gets(nome2);

    // Abri e li o arquivo 1
    FILE *a2 = fopen("arquivo2.txt", "r");

    // Condições de erros
    if(a2 == NULL){ printf("Erro para abrir %s", nome2); return 0; }

  //------------------------- Arquivo 3 ---------------------------

    FILE *a3 = fopen("destino.txt", "w");

    if(a3 == NULL){ printf("Não criou o arquivo destino.txt"); return 0; }

    char buffer[1024];
    
    // copiando a1 para a3
    while(!feof(a1)){

        fgets(buffer, 1024, a1);
        fputs(buffer, a3);
    }

    // copiando a2 para a3
    while(!feof(a2)){

        fgets(buffer, 1024, a2); // lendo conteudo de arquivo inserindo em buffer
        fputs(buffer, a3); // Escrevendo conteudo do buffer no arquivo 3    
    }

    // Fechando arquivos
    fclose(a1), fclose(a2), fclose(a3);

    return 0;
}