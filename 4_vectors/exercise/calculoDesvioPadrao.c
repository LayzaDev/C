#include <stdio.h>
#include <math.h>

int main(){

    //declarando variaveis
    int n, valor, produto, S = 0;
    double m, d;

    printf("Informe o tamanho do vetor: \n");
    scanf("%d", &n);

    // Criando vetor de tamanho n
    int V[n];

    //Loop para percorrer o vetor para inserir elementos
    for(int i = 1; i <= n; i++){

        
        printf("Digite um numero: \n");
        scanf("%d", &valor);

        // inserindo elementos no vetor
        V[i] = valor;

        printf("O vetor na posicao %d eh %d \n", i, V[i]);
    }

    //Loop para percorrer o vetor para calcular a media
    for(int i = 1; i < n; i++){

        // calculando a media
        m = V[i] / n;

    }

    // Percorrendo o vetor para fazer o somatOrio
    for(int i = 1; i < n; i++){

        // Calculando o somatorio
        S += (V[i] - m) * (V[i] - m);

    }

    // Calculando o produto do somatorio com 1 / n elementos do vetor
    produto = S * (1/n);

    // Elevando o produto ao quadrado para calcular o valor do desvio padrao
    d = pow(produto, 1/2);

    printf("Valor do desvio padrao: %lf \n", d);
    
    return 0;
}
