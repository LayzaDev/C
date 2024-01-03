// Exercicio 6

/* 
1. Crie uma estrutura denominada Poligono. 
2. Essa estrutura deverá conter uma lista de um ou mais pontos que definem um polígono. 
3. A lista é definida pela estrutura Ponto, que contém as posições X e Y e um ponteiro chamado Proximo 
   do mesmo tipo da estrutura Ponto. 
4. Faça um programa que declare um Poligono denominado triangulo que contém os pontos {5,3}, {1,1}, {1,5} 
   e um polígono denominado retângulo que contém os pontos {1,1}, {1,3}, {5,1}, {5,3}. 
*/

#include <stdio.h>
#include <stdlib.h>

struct Ponto { int x, y; struct Ponto *Proximo; };
struct Poligono { struct Ponto lista; };

int main(){
    
    struct Poligono triangulo;
    triangulo.lista.x = 5;
    triangulo.lista.y = 3;
    triangulo.lista.Proximo = malloc (sizeof(struct Ponto));
    triangulo.lista.Proximo->x = 1;
    triangulo.lista.Proximo->y = 1;
    triangulo.lista.Proximo->Proximo = malloc (sizeof(struct Ponto));
    triangulo.lista.Proximo->Proximo->x = 1;
    triangulo.lista.Proximo->Proximo->y = 5;

 

    struct Poligono retangulo;
    retangulo.lista.x = 1;
    retangulo.lista.y = 1;
    retangulo.lista.Proximo = malloc (sizeof(struct Ponto));
    retangulo.lista.Proximo->x = 1;
    retangulo.lista.Proximo->y = 3;
    retangulo.lista.Proximo->Proximo = malloc (sizeof(struct Ponto));
    retangulo.lista.Proximo->Proximo->x = 5;
    retangulo.lista.Proximo->Proximo->y = 1;
    retangulo.lista.Proximo->Proximo->Proximo = malloc (sizeof(struct Ponto));
    retangulo.lista.Proximo->Proximo->Proximo->x = 5;
    retangulo.lista.Proximo->Proximo->Proximo->y = 3;
    return 0;
}