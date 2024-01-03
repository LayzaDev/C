#include <stdio.h>


int main (){

    do {
        // declarando variaveis
        char jogador1, jogador2, R, P, S;

        // comando para pegar o valor digitado pelos jogadores
        printf("Jogador1 escolha entre R, P, S: \n");
        jogador1 = getchar();
        setbuf(stdin, NULL);

        printf("Jogador2 escolha entre R, P, S: \n");
        jogador2 = getchar();
        setbuf(stdin, NULL);

        if(jogador1 == jogador2){

            printf("Empate! \n");

        } 
        else if (jogador1 == R && jogador2 == S || jogador1 == S && jogador2 == P || jogador1 == P && jogador2 == R ) {

            printf("jogador1 ganhou! \n");

        } 
        else if(jogador2 == R && jogador1 == S || jogador2 == S && jogador1 == P || jogador2 == P && jogador1 == R ){

            printf("Jogador2 ganhou! \n ");

        } 
        else{

            printf("Erro! \n");
            
        }
       
    } while (1);
    

    return 0;
}