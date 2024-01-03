# STRUCT

## INTRODUÇÃO A ESTRUTURAS

**FORMA GERAL**

struct nome_struct{

    tipo1 nome1;
    tipo2 nome2;
    ...
    tipoN nomeN;
}; _ponto virgula é necessário para  fechar_

**COMO UTILIZAR**

_definindo estruturas_

struct pessoa {

    char nome[50], rua[50];
    int idade, numero;
}; 

int main(){

 _declarações de variaveis - trabalhoso_
    char nome[50], rua[50];
    int idade, numero; 

 _declarações de uma variavel struct - pratico_
    struct pessoa p; _p = nome, rua, idade, nmr_
}

**COMO ACESSAR CONTEUDO**

_Cada variavel da struct pode ser acessada usando o operador "."_

_definindo estruturas_
struct pessoa {

    char nome[50], rua[50];
    int idade, numero;
}; 

int main(){

    struct pessoa p;

_comando de atribuição_
    p.idade = 31;

_comando de atribuição_
    scanf("%d", &p.idade);
    gets(p.nome);

_expressão_
    p.numero  = p.numero + p.idade - 100;
}

**SEM STRUCT x COM STRUCT**

_definindo estruturas_
struct pessoa {

    char nome[50], rua[50];
    int idade, numero;
}; 

int main(){

  _SEM_
    char nome1, nome2, nome3..;
    int idade1, idade2, idade3...;
    ...

  _COM_
    struct pessoa p1, p2, p3 ...;
}

**Estrutura de pontos diferentes**

struct ponto2D {

    int x, y;
};

struct ponto 3D{
    
    int x, y, z;
}

int main(){

 _estruturas diferentes podem ter campos com o mesmo nome._

    struct ponto2D p2;
    struct ponto3D p3;

    printf(%d %d \n, p2.x, p3.x);
}

## TRABALHANDO COM ESTRUTURAS

**Inicializando Estruturas - trabalhoso**

struct pessoa {

    char nome[50], rua[50];
    int idade, numero;
}; 

int main(){

    struct pessoa p;

    strcpy(p.nome, "Ricardo");
    strcpy(p.rua, "Rua 1");
    p.idade = 10;
    p.numero = 101;
}

**Inicializando Estruturas - Pratica**

struct pessoa {

    char nome[50], rua[50];
    int idade, numero;
}; 

int main(){

  *Podemos definir uma lista de valores para colocar na estrutura(como nos arrays)*

    struct pessoa p = { "Ricardo", "Rua 1", 31, 101};

  *Campos não definidos são inicializados com zero ou com uma string vazia ("")*

    struct pessoa p = { "Ricardo", "Rua 1", 31};
}

**ATRIBUIÇÃO DE ESTRUTURAS - TRABALHOSA**

struct pessoa {

    char nome[50], rua[50];
    int idade, numero;
}; 

int main(){

    struct pessoa p = { "Ricardo", "Rua 1", 31, 101};
    struct pessoa p2;

    strcpy(p2.nome, p.nome);
    strcpy(p2.rua, p.rua);
    p2.idade = p.idade;
    p2.numero = p.numero;
}

**ATRIBUIÇÃO DE ESTRUTURAS - PRATICA**

struct pessoa {

    char nome[50], rua[50];
    int idade, numero;
}; 

int main(){

    struct pessoa p = { "Ricardo", "Rua 1", 31, 101};
    struct pessoa p2;

   *Estruturas suportam atribuição, desde que sejam do mesmo tipo*
    
    p2 = p;
}

**Estrutura de pontos diferentes**

struct ponto {

    int x, y;
};

struct novo_ponto{
    
    int x, y;
}

int main(){

   _estruturas diferentes podem ter campos com o mesmo nome._

    struct ponto p1,p2 = {1, 2};
    struct novo_ponto p3 = {3, 4};

   *CORRETA*
    
    p1 = p2;
    printf(p1: %d e %d \n, p1.x, p1.y);

   *ERRO - ESTRUTURA NÃO É A MESMA!*
    
    P1 = P3;
    printf(p1: %d e %d \n, p1.x, p1.y);
}

## ARRAY DE STRUCTS

struct pessoa {

    char nome[50], rua[50];
    int idade, numero;
}; 

int main(){

   *Com struct*
    struct pessoa p1, p2, p3, p4;

   *A struct é um tipo de dado, e portanto a linguagem C suporta a declaração de um array de estruturas*
    
   *Com struct e com array* 
    struct pessoa p[4];
}

**ACESSO AOS CAMPOS DO ARRAY DE STRUCT - TRABALHOSA**

struct pessoa {

    char nome[50], rua[50];
    int idade, numero;
}; 

int main(){

   *Em um array de estruturas, o operador de ponto (.) vem depois dos colchetes [] do indice do array*

    struct pessoa p[4];
    p[0].idade = 31;
    strcpy(p[i].nome, "Ricardo");
    p[2].numero = p[0].numero - 1; 
}

**ACESSO AOS CAMPOS DO ARRAY DE STRUCT - PRATICA**

struct pessoa {

    char nome[50], rua[50];
    int idade, numero;
}; 

int main(){

   *A combinação de arrays e estruturas permite que se manipule de modo muito mais pratico várias variáveis de estrutura*

    struct pessoa p[4];
    
    for(int i = 0; i < 4; i++){
        gets(p[i].nome)
        scanf("%d", &p[i].idade);
        gets(p[i].rua);
        scanf("%d", &p[i].numero);
    }
}

## ANINHAMENTO DE STRUCT

*Uma estrutura também é um tipo de dado. Logo, uma estrutura pode possuir uma variavel do tipo de outra estrutura previamente definada.*

**EXEMPLO 1**

struct endereco {

    char rua[50];
    int numero;
}; 

struct pessoa {

    char nome[50]
    int idade
    struct endereco ender;
}; 

int main {

    struct pessoa p;
    p.idade = 31;
    p.ender.numero = 101;
}; 

**EXEMPLO 2**

struct endereco {

    char rua[50];
    int numero;
}; 

struct pessoa {

    char nome[50]
    int idade
    struct endereco ender;
}; 

int main {

    struct pessoa p;

   *LENDO UMA ESTRUTURA ANINHADA DO TECLADO*

    gets(p.nome);
    scanf("%d", &p.idade);
    gets(p.ender.rua);
    scanf("%d", &p.ender.numero);
}; 

## UNIONS


