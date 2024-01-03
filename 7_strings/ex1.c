#include <stdio.h>
#include <string.h>

int main(){

    char string[40];

    printf("Digite algo: \n");
    fgets(string, 39, stdin);

    for(int i = 0; string[i] != '\0'; i++){

        if(string[i] >= 97 && string[i] <= 122){

            string[i] -= 32;
        }
    }

    printf("%s \n", string);

    return 0;
}