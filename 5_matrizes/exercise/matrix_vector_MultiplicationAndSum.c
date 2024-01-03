/*
DESCRIPTION

The program performs the multiplication element by element between a 3x4 matrix and a vector of size 3. Afterwards, it adds the elements of each line resulting from the multiplication and stores the result in a new vector. Finally, it prints the new vector.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int matrix[3][4] = {{4, 2, 5, 7},{9, 1, 6, 8 },{2, 5, 10, 51}};

    int vector[3] = {4, 2, 5};

    int newVector[3]; 

    for(int line = 0; line < 3; line++){
        for(int column = 0; column < 4; column++){

            matrix[line][column] *= vector[line];

        }
    }

    for(int line = 0; line < 3; line++){
        for(int column = 0; column < 4;column++){

           newVector[line] += matrix[line][column];

        }
    }

    for(int line = 0; line < 3; line++){   

        printf("\nResult: %d \n\n", newVector[line]);

    }

    return 0;
}