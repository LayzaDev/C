#include <stdio.h>
#include <math.h>

int main(){

    int n, valor;
    float soma;

    printf("Digite um valor para n(tamanho do vetor): \n");
    scanf("%d", &n);

    // criando o vetor v de tamanho n
    int v[n]; 

    //Percorrendo o vetor
    for(int i = 0; i < n; i++){

        printf("Defina os valores do vetor: \n");
        scanf("%d", &valor);

        //inserindo valores no vetor
        v[i] = valor;

    }
    
    // Fazendo somatorio
    for(int i = 1; i <= n; i++){

        //vetor = [2, 5, 7, 8, 4] 

        if(i == 1){

            soma = ((v[i - 1])/(i * i));

        } else if(i > 1){

            soma += ((v[i-1])/(i*i));
        }
    }

    //Calculando a raiz cubica do somatório
    float S = pow(soma, 1/3);

    printf("Somatorio: %f \n", S);

    return 0;
}
