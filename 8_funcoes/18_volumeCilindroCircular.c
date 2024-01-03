#include <stdio.h>

int volumeCilindroCircular(float H, float R){

    float V = 3.14 * (R * R) * H;

    printf("Volume do cilindro circular: %.2f \n", V);

    return V;

}

int main(){

    float h, r;

    printf("Defina a altura do cilindro: \n");
    scanf("%f", &h);

    printf("Defina o raio do cilindro: \n");
    scanf("%f", &r);

    volumeCilindroCircular(h, r);

    return 0;
}