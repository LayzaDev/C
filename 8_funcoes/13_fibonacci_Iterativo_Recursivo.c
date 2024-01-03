#include <stdio.h>

// [0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ... ]

int FibonacciIterativo(int n){
    
    int x = 0, y = 1, aux;
    
    for(int i = 0; i < n; i++) {
        
        aux = x + y; 
        x = y; 
        y = aux; 
    
    }
    
    return x;
}


int FibonacciRecursivo(int n){

    if(n == 0){

        return n;

    } else if(n == 1) {
    
        return n;
    
    } else {

        return FibonacciRecursivo(n - 1) + FibonacciRecursivo(n - 2);
    
    }

}

int main(){

    int i;

    for (i = 1; i < 100; i++) {

       printf("\n termo %d: %d \n", i, FibonacciIterativo(i));

    }

    for (i = 1; i < 100; i++) {

        printf("\n termo %d: %d", i, FibonacciRecursivo (i));

    }

    return 0;

}