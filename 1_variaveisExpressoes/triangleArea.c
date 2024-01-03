#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float b, h;
    
    printf("Valor da base e altura do triangula: \n");
    scanf("%f %f", &b, &h);

    float a = (b*h)/2;

    printf("A area do triangulo eh: %.2f \n", a);

    system("pause");
    return 0;
}