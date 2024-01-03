#include <stdio.h>

int main(){

    int n, divisores;

    printf("Defina o valor de n: \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

       if(i % 2 == 0){

        divisores = n * i;
        divisores++;

       }

    }

    printf("Divisores de %d eh %d \n", n, divisores);

    return 0;
}