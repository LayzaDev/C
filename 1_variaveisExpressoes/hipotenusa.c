#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float cat1, cat2, hip;

    printf("Cateto1: \n");
    scanf("%f", &cat1);

    printf("Cateto2: \n");
    scanf("%f", &cat2);

    hip = sqrt(cat1 * cat1 + cat2 * cat2);

    printf("Hipotenusa: %.2f \n", hip);

    return 0;
}
