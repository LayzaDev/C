#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, x1, x2;

    printf("Digite um valor para a, b e c da equacao ax**2 + bx + c: \n");
    scanf("%f %f %f", &a, &b, &c);

    float delta = (b * b) - 4 * a * c;

    if(a == 0){

        printf("Não é equacao do segundo grau! \n");

    } else if( delta < 0){

        printf("Não existe raiz!");

    } else if(delta == 0){

        x1 = ((-b + sqrt(delta)) / 2 * a);

        printf("Raiz unica com valor de: %.2f \n", x1);
        
    } else {

        x1 = ((-b + sqrt(delta)) / 2 * a);

        x2 = ((-b - sqrt(delta)) / 2 * a);

        printf("Raiz 1:  %.2f \n raiz 2: %.2f \n", x1, x2);

    }
    return 0;
}