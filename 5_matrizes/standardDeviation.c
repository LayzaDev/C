/*
DESCRIPTION

The program calculates the standard deviation of a vector. It walks through the vector to calculate the mean of its elements, and then calculates the sum of squares of the differences between each element and the mean. Finally, apply the standard deviation formula and print the result on the screen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int vector[10];
    float average, number = 0.0, standardDeviation, sum = 0.0;

    for(int i = 0; i < 10; i++){

        sum += vector[i];

    }

    average = sum / 10;

    for(int i = 1; i <= 10; i++){

        number += (((vector[i - 1] - average) * (vector[i - 1] - average)) / 10 );

    }

    standardDeviation = pow(number, 1/2);

    printf("\nStandard deviation: %.2f \n\n", standardDeviation);

    return 0;
}