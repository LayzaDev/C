#include <stdio.h>

// criando função volume com parametro R
float volume(float R){

    // calculo de volume
    float V = 4.0/3.0 * 3.1415 * R * R * R; 

    // retorna o valor calculado
    return V;
}

int main(){
    // Faça uma função para o calculo do volume de uma esfera: v = 4/3 * pi * R ^ 3 

    // pegando valor de raio
    float r, v; 
    printf("Digite o valor do raio: ");
    scanf("%f", &r);

    v = volume(r);
    
    printf("Volume calculado: %f \n", v);

    return 0;

}