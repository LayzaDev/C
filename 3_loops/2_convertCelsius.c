// Conversão de Celsius para Fahrenheit e Kelvin (loop While)

#include <stdio.h>

int main(){

    float C, F, K;

    while (C > 0 && F < 200)
    {
        F = C * 1.8 + 32;

        K = C + 273.15;

        printf("C: %.2f k: %.2f F: %.2f", C, K, F);
    }
    
    return 0;
}