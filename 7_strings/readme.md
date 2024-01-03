# STRINGS

## CONCEITOS BASICOS

- Strings são um array de caracteres

*_ char nomeString[tamanhoDaString] _*

### SCANF x GETS

**SCANF:** 

- Lê a palavra até encontrar o primeiro espaço ou enter, portando, não consegue ler uma frase.

**GETS:** 

- O gets só termina a leitura após o usuario clicar na tecla enter, portando, consegue ler uma frase inteira.

### INICIALIZAÇÃO DE STRINGS

**FORMA CONVENCIONAL**

char nome1[20] = {'J', 'o', 'a', 'o', '\0'};

*-- '\0' indica o fim da palavra ou frase e sua função é desconsiderar as posições restantes da string.*

**FORMA ESPECIAL**

char nome2[20] = "Joao";

## BIBLIOTECA STRING.H

### COMO COPIAR O CONTEUDO DE UMA STRING PARA OUTRA

**FORMA TRABALHOSA - USO DE LOOPS**

int main(){

    char str1[20] = "Hello World";
    char str2[20];

    for(int i = 0; str1[i] != '\0'; i++){

        str2[i] = str1[i];

        str2 = '\0';
    }

    return 0;
}

**FORMA PRATICA - USO DE FUNÇÕES**

_strlen_ Tamanho da String

int main(){

    char palavra[20] = "Linguagem C";
    int tamanho = strlen(palavra);

    printf("Tamanho da string: %d \n", tamanho); // 11

    return 0;
}

_strcpy_ Copiar uma string

int main(){

    char palavra[20] = "Linguagem C";
    char novaPalavra[30];

    strcpy(novaPalavra, palavra);

    printf("Copia: %s \n", novaPalavra); // "Linguagem C"

    return 0;
}

_strcat_ Concatenar duas strings

int main(){

    char palavra1[20] = "Bom ";
    char palavra2[30] = "dia";

    strcat(palavra1, palavra2);

    printf("Palavra: %s \n", palavra1); 

    return 0;
}

_strcmp_ Comparar duas strings

int main(){

    char palavra1[20] = "Linguagem C";
    char palavra2[30] = "LINGUAGEM C";

    if(strcmp(palavra1, palavra2) == 0)

        printf("Strings iguais \n");

    else

        printf("Strings diferentes \n"); 
        
    // Resposta: diferentes

    return 0;
}

## INVERTENDO STRINGS

**FORMA BASICA**

int main(){

    char string[20] = "Linguagem C";

    for(int i = strlen(string) - 1; i >= 0; i--){

        printf("%c", string[i]);
    }

    printf("\n");

    return 0;
}

**INVERTENDO STRING USANDO VARIAVEL AUX**

int main(){

    char str1[20] = "Linguagem C";
    char str2[20];

    int i, j = 0;

    for(i = strlen(str1) - 1; i >= 0; i--){

        str2[j] = str1[i];
        j++;
    }

    str2[j] = '\0';

    printf("str2: %s \n", str2);

    return 0;
}

**INVERTENDO STRING DENTRO DA STRING ORIGINAL**

int main(){

    char str[20] = "Linguagem C";
    char c;

    int i, tam = strlen(str);

    for(i = 0; i < tam/2; i++){

        c = str[i];
        str[i] = str[tam - 1 - i];
        str[tam - 1 - i] = c;

    }

    printf("str: %s \n", str);

    return 0;
}

## CONTANDO OS CARACTERES DE UMA STRING

**FORMA TRABALHOSA**

int main(){

    char str[20] = "Linguagem C";
    int i, total = 0;

    int tam = strlen(str);

    for(i = 0; i < tam; i++){

        if(str[i] == 'a' || str[i] == 'e' || ...)

        total++;

    }

    printf("Nmr de vogais: %d \n", total);

    return 0;
}

**FORMA PRATICA**

int main(){

    char str[20] = "Linguagem C";
    char vogais[11] = "aeiouAEIOU; // conta com o '\0'

    int i,j, total = 0;

    int tam1 = strlen(str);
    int tam2 = strlen(vogais);

    for(i = 0; i < tam1; i++){
        for(j = 0; j <tam2; j++){

            if(str[i] == vogais[j]){

                total++;
                break;
            }
        }
    }

    printf("Nmr de vogais: %d \n", total);

    return 0;
}

## LIMPEZA DO BUFFER DO TECLADO

- Ao usar a função scanf(), ela recupera a informação do buffer. Porém pode deixar sujeira no buffer, comprometendo leituras futuras.

**SUGESTÃO DE COMANDO PARA LIMPAR O BUFFER**

setbuf(stdin, NULL); //coloca NULL no buffer do teclado

**NÃO UTILIZE O COMANDO**

fflush(stdin);

- Essa função serve para limpar o buffer, mas tem comportamento indefinido para o buffer do teclado.
- É recomendado para limpar buffer de saída, não de entrada.

**EXEMPLO**

int main(){

    char ch;

    for(int i = 0; i < 5; i++){
        
        printf("Digite o %do caracter: \n", i+1);
        scanf("%c", &ch);
        setbuf(stdin, NULL);
    }

    return 0;
}

## GETS() x FGETS()

_gets()_

- Ao digitar uma quantidade de caracteres ou numeros maior do que o estabelecido em uma variavel, esses caracteres vão invadir a região de memória de outras variáveis e modifica-las sem nosso conhecimento.

_fgets()_

- O fgets evita que ocorra a invasão de memória de outras variáveis, não permitindo modificar o valor delas sem nosso conhecimento.

**EXEMPLO**

int main(){

    char senha[10];
    int flag = 0;

    printf("Digite a senha: \n");
    
    fgets(senha, 10, stdin);

    if(strcmp(senha, "1234") == 0)
        flag = 1;

    if(flag)
        printf("Acesso APROVADO \n");
    else
        printf("Acesso REPROVADO \n");

    return 0;
}

