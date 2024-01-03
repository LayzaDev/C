#include <stdio.h>

int main(){

    int n, soma = 0;

    printf("Digite um numero: \n");
    scanf("%d", &n);

   for(int i = 0; i < n; i++){

        if(n / 1 == n && n / n == 1){

            soma += n;

        }

    }
        
    printf("Soma dos numeros primos de 2 a %d: %d \n", n, soma);

    return 0;
}