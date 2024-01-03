/*
    Escreva um programa que ordene a seguinte lista de presença
    Utilize a função strcmp para comparar strings.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define QUANTIDADE 21

int main() {
    
    char temp[12];
    char lista[QUANTIDADE][12] = 
    {   "Vinicius", "Guilherme", "Vitor", "Lucas", 
        "Igor", "Joao", "Pedro", "Abel", "Luiz", 
        "Wemerson", "Rafael", "Pablo", "Saint", 
        "Thais", "Matheus", "Douglas", "Gabriel",
        "Viviane", "Reginaldo", "Jose", "Leonardo" 
    };

    printf("Antes de ordenar:\n=====================\n");

    for (int i = 0; i < QUANTIDADE; i++){

        printf("%s\n",lista[i]);
    }

    for(int i = 0; i < QUANTIDADE; i++){
        for(int j = 0; j < QUANTIDADE; j++){
            do
            {
                strcmp(lista[i], lista[j]);

                if(lista[i] > lista[j]){
                    temp[i] = lista[i];
                    lista[i][0] = lista[j];
                    lista[j][0] = temp[i];
                }
            } while (lista[i] != NULL);
        }

    }

    printf("\n\nApos ordenar:\n=====================\n");

    for (int i = 0; i < QUANTIDADE; i++)

    printf("%s\n",lista[i]);

    return 0;
}

