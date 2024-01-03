#include <stdio.h>

float imc(float M, float H){

    float calculoIMC = M / (H * H);

    printf("Seu IMC eh: %.2f \n", calculoIMC);

    return 0;

}

int main(){

    float m, h;

    printf("Informe seu peso: \n");
    scanf("%f", &m);

    printf("Informe sua altura: \n");
    scanf("%f", &h);

    imc(m, h);

    return 0;
}