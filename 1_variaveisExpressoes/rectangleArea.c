#include <stdio.h>
#include <stdlib.h>

int main(){

    int b, h, a;

    printf("Insira o valor da base e altura do retangulo: \n");
    scanf("%d %d", &b, &h);

    a = b * h;

    printf("A area do retangulo eh: %d \n", a);

    return 0;
}