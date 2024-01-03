#include <stdio.h>

int main(){

    float d, a;

    printf("Diametro: \n");
    scanf("%f", &d);

    a = (3.14 * (d/2 * d/2));

    printf("Area do circulo eh: %.2f \n", a);
    
    return 0;
}