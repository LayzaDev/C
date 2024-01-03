#include <stdio.h>

int main(){


    int primo = 0;

    printf("Digite um numero: \n");
    scanf("%d", &primo);

    if(primo > 1 && primo / 1 == primo && primo % primo == 0){

        printf(" %d Eh um numero primo! \n", primo);

    } else {

        printf(" %d Nao eh primo! \n", primo);

    }

    return 0;
}