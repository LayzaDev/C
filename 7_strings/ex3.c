#include <stdio.h>
#include <string.h>

int main(){

    char str[20];
    char aux;

    printf("Digite uma palavra ou frase: \n\n");
    gets(str);

    int tam = strlen(str);

    for(int i = 0; i < tam/2; i++){

        aux = str[i];
        str[i] = str[tam - 1 - i];
        str[tam - 1 - i] = aux;
        
    }

    printf("\n%s \n", str);

    return 0;
}