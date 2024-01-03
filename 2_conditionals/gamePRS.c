#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char input1, input2;

    printf("Player1 choose an option: R, P or S \n");
    input1 = getchar();

    setbuf(stdin,NULL);

    printf("INPUT 1 %c =\n", input1);

    printf("Player2 choose an option: R, P or S \n");
    input2 = getchar();

    if(input1 == input2){

        printf("Draw \n");

    } else if(input1 == 'R' && input2 == 'S' || input1 == 'S' && input2 == 'P' || input1 == 'P' && input2 == 'R'){

        printf("Player1 wins!");

    } else if(input2 == 'R' && input1 == 'S' || input2 == 'S' && input1 == 'P' || input2 == 'P' && input1== 'R'){
   
        printf("Player2 wins! \n");
   
    } else {
   
        printf("ERROR! \n");
    }

    return 0;
}