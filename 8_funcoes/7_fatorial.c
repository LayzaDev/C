#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    int i, f = 1;
    
    for(i = 1; i < n; i++){

        f = f * i;

    }

    return f;
}

int main(){

    int x, y;

    printf("Digite o valor de n: \n");
    scanf("%d", &x);

    y = fatorial(x);

    printf("Fatorial de %d: %d \n", x, y);

    system("pause");
    return 0;
}