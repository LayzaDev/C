#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float salarioAtual, salarioReajustado;
    float auxilio = 100;

    printf("Insira o valor do seu salario atual: \n");
    scanf("%f", &salarioAtual);

    if(salarioAtual <= 1200){
        
        salarioReajustado = salarioAtual + auxilio + 0.075 * salarioAtual;
        printf("Salario com Reajuste: %.2f \n", salarioReajustado);

    } else {

        salarioReajustado = salarioAtual + 0.075 * salarioAtual;
        printf("Salario com reajuste: %.2f \n", salarioReajustado);
    }

    return 0;
}