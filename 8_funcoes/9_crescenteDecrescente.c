#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int crescente(int N){

    if(N < 0){

        return 0;

    } else {

        crescente(N - 1);
        printf("%d ", N);
    }
    
}

int decrescente(int N){

    if(N < 0){

        return 0;

    } else {

        printf("%d ", N);
        decrescente(N - 1);

        return 0;
    }
}

int main(){
    
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("\nCrescente: \n\n");
    crescente(n);

    printf("\n\nDecrescente: \n\n");
    decrescente(n);
    printf("\n\n");

    return 0;
}