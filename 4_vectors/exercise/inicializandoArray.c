#include <stdio.h>
#include <stdlib.h>

int main(){

    // inicializando um vetor
    float vet[5] = {1.1, 4, 2.5, 9, 10.0};

    //INICIALIZAÇÃO SEM TAMANHO

    //declara um array com 10 posições
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    system ("pause");
    return 0;
}

//Inicializando com um unico valor para cada posição
int main(){

    // Criando um array de tamanho 5 e uma variavel i
    int vet[5], i;

    // Loop para popular o array
    for(i = 0; i < 5; i++){

        //zerando as posições do array
        vet[i] = 0;

        //printando o array zerad0
        printf("%d \n", vet[i]);
    }

    system("pause");
    return 0;
}

// Inicializando com um valor diferente para cada posição

int main(){

    //modo inteligente
    int vet[5] = {4, 3, 9, 2, 6};
    
    // modo burro de atribuir valores
    vet[0] = 3;
    vet[1] = 2;
    vet[2] = 5;
    vet[3] = 8;
    vet[4] = 1;

    printf("%d \n", vet[4]);
    
    system("pause");
    return 0;
}



