#include <stdio.h>

int main(){

    float B, b, h, a;

    printf("Valor de B, b e h: \n");
    scanf("%f %f %f", &B, &b, &h);

    a = ((B+b)*h)/2;

    printf("Area do trapezio eh: %.2f \n", a);

    return 0;
}