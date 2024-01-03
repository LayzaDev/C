/*
DESCRIPTION

The program traverses a matrix and searches for its largest number.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declaring Variables and Arrays
    int matrix[3][3] = {{3, 4, 2},{7, 5, 9}, {6, 1, 20}};

    int higherNumber = matrix[0][0];

    // Loop to traverse and populate all elements of rows and columns of the matrix
    for(int i = 1; i < 3; i++){
        for(int j = 1; j < 3; j++){

            //condition to find the largest value of the array
            if(higherNumber < matrix[i][j]){
                higherNumber = matrix[i][j];
            }
        }
    }

    printf("Highest number in the matrix: %d \n", higherNumber);


    return 0;
}