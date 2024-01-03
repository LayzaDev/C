#include <stdio.h>

long long int fatorial(int n){

    long long int fat = 1;

    for(int i = 1; i <= n; i++){

        fat *= i;

    }

    return fat;
    
}

long long int combinacao(int N, int S){

    long long int comb = (fatorial(N) / (fatorial(S) * (fatorial(N - S))));

    return comb;
}

int main(){

    for(int n = 3; n <= 10; n++){
        for(int s = 2; s <= n; s++){

            long long int cns = combinacao(n, s);
            printf("n: %d, s: %d = C(n, s): %lld \n", n, s, cns);
        }
    }

    return 0;
}