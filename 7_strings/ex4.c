#include <stdio.h>
#include <string.h>

int main(){
    
    char str[40];

    printf("Digite uma palavra: \n");
    fgets(str, 39, stdin);

    int tam = strlen(str);

    for(int i = 0; str[i] != '\0'; i++){

        if(strcmp(str[i], str[tam - 1 - i]) == 0){

            printf("A palvra %s é um palindromo \n", str);

        } else{

            printf("A palvra %s nao eh palindromo \n", str);
        } 
    }

    return 0;
}