/*
1) Escreva um programa que mostre o tamanho em bytes que cada tipo de dados ocupa em memória (utilize a função sizeof()). 
2) Responda: Os diferentes níveis de apontamento e tipo de dados dos ponteiros apresentam tamanhos diferentes? 
3) Explique.

 char
 int
 float
 double
 long double

 char ***, char **, char *
 int ***, int **, int *
 float ***, float **, float *
 double ***, double **, double *
 long double ***, long double **, long double * 

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("char = %zu bytes \n", sizeof(char));
    printf("int = %zu bytes \n", sizeof(int));
    printf("float = %zu bytes \n", sizeof(float));
    printf("double = %zu bytes \n", sizeof(double));
    printf("long double = %ld bytes \n", sizeof(long double));

    printf("\n");
    printf("------------------------------------------------ \n");
    printf("\n");

    printf("char *** = %zu bytes \n", sizeof(char ***));
    printf("char ** = %zu bytes \n", sizeof(char **));
    printf("char * = %zu bytes \n", sizeof(char *));

    printf("\n");
    printf("------------------------------------------------ \n");
    printf("\n");

    printf("int *** = %zu bytes \n", sizeof(int ***));
    printf("int ** = %zu bytes \n", sizeof(int **));
    printf("int * = %zu bytes \n", sizeof(int *));

    printf("\n");
    printf("------------------------------------------------ \n");
    printf("\n");

    printf("float *** = %zu bytes \n", sizeof(float ***));
    printf("float ** = %zu bytes \n", sizeof(float **));
    printf("float * = %zu bytes \n", sizeof(float *));

    printf("\n");
    printf("------------------------------------------------ \n");
    printf("\n");

    printf("double *** = %zu bytes \n", sizeof(double ***));
    printf("double ** = %zu bytes \n", sizeof(double **));
    printf("double * = %zu bytes \n", sizeof(double *));

    printf("\n");
    printf("------------------------------------------------ \n");
    printf("\n");

    printf(" long double *** = %zu bytes \n", sizeof(long double ***));
    printf(" long double ** = %zu bytes \n", sizeof(long double **));
    printf(" long double * = %zu bytes \n", sizeof(long double *));

    return 0;
}

