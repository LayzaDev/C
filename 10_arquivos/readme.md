# **ARQUIVOS**

## **Biblioteca**

- *stdio.h*

## **ABERTURA E FECHAMENTO DE ARQUIVOS**

### **Funcao _fopen()_**

- Permite abrir um arquivo em um determinado modo de leitura ou escrita.

**_FILE *fopen(char *nome, char *modo)_**

- Se a função fopen() não conseguir abrir o arquivo, ela irá retornar NUUL

FILE *f;

f = fopen("arquivo.txt", "w");

if(f == NULL){

    printf("Erro na abertura! \n");  

    system("pause");

    exit(1) // Abortar o programa
}

### **CAMINHOS PARA NOMES DE ARQUIVOS**

FILE *f;

_**Caminho Absoluto:**_ Endereço completo.

_f = fopen("C: \\Projetos\\arq.txt", "w");_

_**Caminho Relativo:**_ Relativo a pasta do programa.

_f = fopen("arquivo.txt", "w");_

_f = fopen("..\\Novo\\arq2.txt", "w");_

### **MODO DE ABERTURA**

FILE *f;

_**Leitura de arquivo texto**_

f = fopen("arquivo.txt", "r");

_**Escrita de arquivo texto**_

f = fopen("arquivo.txt", "w");

_**Leitura de arquivo binario**_

f = fopen("arquivo.txt", "rb");

_**Escrita de arquivo binario**_

f = fopen("arquivo.txt", "wb");

### **MODO DE FECHAMENTO**

- Sempre que terminamos de usar um arquivo, devemos fecha-lo.

- Fechar o arquivo garante que todos os dados foram realmente gravados.

_**int fclose(FILE *f);**_

- fclose():  retorna ZERO no caso de sucesso no fechamento do arquivo.

FILE *f;

f = fopen("arquivo.txt", "w");

if(f == NULL){

    printf("Erro na abertura! \n");  

    system("pause");

    exit(1) // Abortar o programa
}

fclose(f);

## **FPUTC()**







