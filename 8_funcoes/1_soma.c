#include <stdio.h>

int soma(int x, int y){

    return x + y;

}

int main(){

    int X, Y, Z;

    printf("Defina o valor de x e y: ");
    scanf("%d %d", &X, &Y);

    Z = soma(X, Y);

    printf("Soma: %d \n", Z);

    return 0;
}