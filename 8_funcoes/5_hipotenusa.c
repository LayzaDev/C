// Faça uma função que receba os valores dos cat A e B e calcule o valor da hip C = sqrt(A^2 + B^2)

#include <stdio.h>
#include <math.h>

float hipotenusa(float A, float B){

    float C; 

    C = sqrt((A * A) + (B * B));

    return C;

}

int main(){

    float a, b, c;

    printf("Defina o valor do cateto A e Cateto B: ");
    scanf("%f %f", &a, &b);

    c = hipotenusa(a, b);

    printf("Valor da hipotenusa: %f \n", c);

    return 0;
}