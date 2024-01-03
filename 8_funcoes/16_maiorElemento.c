#include <stdio.h>

float maior(float n1, float n2){

    if(n1 > n2){

        return n1;

    } else {

        return n2;
    }
}

int main(){

    float a = 10.0, b = 5.0;

    printf("O maior entre %.2f e %.2f eh %.2f \n", a, b, maior(a, b));

    a = 20.0;
    b = 50.0;

    printf("O maior entre %.2f e %.2f eh %.2f \n", a, b, maior(a, b));

    return 0;
}