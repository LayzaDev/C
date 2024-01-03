// Faça um programa que crie um arquivo binário contendo 100 números inteiros e feche o arquivo.
// Em seguida, abra-o novamente, leia os números, e apresente a soma.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

 //----------------------- Parte 1 ---------------------------

    // criando arquivo binario
    FILE *arq = fopen("arquivo.bin", "w");

    if(arq == NULL){ 

        printf("SINTO MUITO! \n"); 

        return 0; 
    }

    // criando variavel auxiliar e loop para percorrer os valores da variavel valor
    int valor = 0;

    for(int i = 0; i < 100; i++){

        // gravando valores no arq binario
        fwrite(&valor, sizeof(int), 1, arq);

        // Salvar os numeros
        valor += 1;

    }

    // fechando arquivo
    fclose(arq);

 //----------------------- Parte 2 ---------------------------

    // abrindo arquivo novamente
    arq = fopen("arquivo.bin", "r");

    if(arq == NULL){

        printf("SINTO MUITO \n");

        return 0;
    }

    // variavel para somar os inteiros
    int soma = 0;


    // loop para percorrer os valores gravados
    for(int i = 0; i < 100; i++){

        // lendo valores gravados
        fread(&valor, sizeof(int), 1, arq);
        printf("valor eh %d ", valor);

        // calculo para somar os valores
        soma += valor;
    }

    printf("\n");

    printf("SOMA: %d \n", soma);

    fclose(arq);
}