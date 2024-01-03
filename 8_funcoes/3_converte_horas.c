// Faça uma função que receba 3 números inteiros como parâmetro, representando horas, min e seg e os converta em seg

#include <stdio.h>

int converte(int h, int m, int s){

    // variavel total de segundos
    int ts;

    // convertendo valores em segundos e caculando o total
    ts = s + m*60 + h*3600;

    // retornando o valor de ts
    return ts;

}

int main(){

    // variaveis para teste
    int H, M, S, T;

    // Pegando valores do teclado
    printf("Digite o valor de Hora, Min e Seg: ");
    scanf("%d%d%d", &H, &M, &S);

    // chamando a função converte
    T = converte(H, M, S);
    
    printf("Total de segundos: %d \n", T);

    return 0;
}