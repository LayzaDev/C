/*
   Faça uma função que receba uma temperatura em graus celsius e converta em graus Fahrenheit.
   Fórmula de conversão: F - C * (9.0 / 5.0) + 32.0
*/

#include <stdio.h>

float converte(float C){

    float F;
    F = C * (9.0 / 5.0) + 32.0;

    return F;
}

int main(){

    float f, c;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = converte(c);

    printf("Resultado da conversão: %f fahrenheit\n", f);

    return 0;
}