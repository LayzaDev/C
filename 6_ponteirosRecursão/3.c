#include <stdio.h>

int main(){

    float A, *B, **C, ***D;

    printf("Digite uma valor para A: \n");
    scanf("%f", &A);

    B = &A; // *B aponta para var A
    C = &B; // **C aponta para *B que aponta para var A
    D = &C; // ***D aponta para **C que aponta para *B que aponta para var A

    printf("Dobro de %.1f eh: %.1f \n", A, 2 * *B);
    printf("Triplo de %.1f eh: %.1f \n", A, 3 * **C);
    printf("Quadruplo de %.1f eh: %.1f \n", A, 4 * ***D);

    return 0;
}