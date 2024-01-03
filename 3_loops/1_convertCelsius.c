// Conversão de Celsius para Fahrenheit e Kelvin (laço for)

#include <stdio.h>

int main(){

   // Declarando as variaveis
   float C, F, K;

   // Loop para percorrer os valores de temperatura em Celsius
   for(int C = -10; C < 100; C++){
      
        // Calculo para conversão de Celsius para Fahrenheit
        F = (9 * C + 160) / 5;

        // Calculo para conversão de Celsius para Kelvin
        K = C + 273.15;

        printf("Valor de F: %2.f Fahrenheit\n", F);

        printf("Valor de K: %2.f  Kelvin \n", K);

   }

   return 0;
}