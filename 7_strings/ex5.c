#include <stdio.h>
#include <string.h>

int main(){

    char M[20] = "Joao Paulo";
    char N[20] = "Bento";
    char R[20] = "Francisco";

    for(int i = 0; i < 19; i++){

        if(strcmp(M[i], N[i]) < 0 || strcmp(M[i], R[i]) < 0) {

            printf("%c \n", M[i]);
        
        } else if(strcmp(N[i], M[i]) < 0 || strcmp(N[i], R[i]) < 0){

            printf("%c \n", N[i]);

        } else{

            printf("%c \n", R[i]);

        }
    }
    return 0;
}