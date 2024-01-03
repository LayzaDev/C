/*
    Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
    S = 13+ 23+ ... + n3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somaCubos(int n){

    if(n == 0){
        return 0;
    } else {

        n + somaCubos(pow(n,3));
    }

    return 0;
}

int main(){

    int n; 

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    somaCubos(n);

    printf("soma: %d \n", somaCubos(n));


    return 0;
}