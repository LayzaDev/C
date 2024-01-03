#include <stdio.h>
#include <math.h>

int somatorioPotencia(int n){

    if(n == 1){

        return pow(n, n);

    } else {

       return (pow(n, n) + somatorioPotencia(n - 1));
    }
}

int main(){

    int n; 

    printf("Digite um numero: \n");
    scanf("%d", &n);

    int x = somatorioPotencia(n);

    printf("S: %d \n", x);
    
    return 0;
}