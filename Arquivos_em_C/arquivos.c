// Arquivo é um conjunto de dados nomeados, armazenados e organizados em um meio de armazenamento de dados;

/* 
    Por que usar arquivos?
    - Permitem armazenar grande quantidade de informação;
    - Dados não são perdidos (persistência dos dados);
    - Acesso aos dados poder ser não sequencial;
    - Acesso concorrente aos dados (mais de um programa pode usar os dados ao mesmo tempo);
*/

/* 
    Basicamente, a linguagem C trabalha com dois tipos de arquivos: de texto e binários;
    - Arquivo texto: Armazenam caracteres que podem ser mostrados diretamente na tela ou modificados por um editor de textos simples como Bloco de Notas.
    - Arquivo binário: Armazena uma sequência de bits que está sujeita as convenções dos programas que o gerou. Ex: arquivos executáveis, arquivos compactados, 
    arquivos de registro etc;
*/

/* ====================================================================================================================================== */

// Manipulando arquivos em C

// Os protótipos dos comandos de manipulação de arquivos em C encontram-se definidos na header padrão stdio.h

/* 
    Para se trabalhar com arquivos é necessário declarar uma variável ponteiro do tipo FILE

        FILE *farq;

*/

/* 
    Para manipular um arquivo em C é necessário abri-lo. Para tanto, a linguagem C possui o comando fopen.

        farq = fopen(char *nome_do_arquivo, char *modo_de_abertura);
*/

/* O primeiro parâmetros é o nome do arquivo. Pode-se trabalhar com caminhos absolutos ou relativos. 

    > Caminho absoluto: Descrição de um caminho desde o diretório raiz.
    C:\minhapasta\arquivo.txt
    
    > Caminho relativo: Descrição de um caminho desde o diretório corrente (onde o programa está salvo)
    arquivo.txt ou ..\dados.txt
*/

// O segundo parâmetro define-se o modo de abertura:

/*  
                                       ----------------------------------------------------------------------------------------------------
                                       | Modo | Arquivo | Função                                                                          | 
                                       |  "r" |  Texto  | Leitura. Arquivo deve existir.                                                  |
                                       |  "w" |  Texto  | Escrita. Cria arquivo se não houver. Apaga o anterior se ele existir.           |
                                       |  "a" |  Texto  | Escrita. Os dados serão adicionados no fim do arquivo("append").                |
                                       | "rb" | Binário | Leitura. Arquivo deve existir.                                                  |
                                       | "wb" | Binário | Escrita. Cria arquivo se não houver. Apaga o anterior se ele existir            |
                                       | "ab" | Binário | Escrita. Os dados serão adicionados no fim do arquivo("append")                 |
                                       | "r+" |  Texto  | Leitura/ Escrita. O arquivo deve existir e pode ser modificado.                 |
                                       | "w+" |  Texto  | Leitura/ Escrita. Cria arquivo se não houver. Apaga o anterior se ele existir.  |
                                       | "a+" |  Texto  | Leitura/ Escrita. Os dados serão adicionados no fim do arquivo("append").       |
                                       | "r+b"| Binário | Leitura/ Escrita. O arquivo deve existir e pode ser modificado.                 |
                                       | "w+b"| Binário | Leitura/ Escrita. Cria arquivo se não houver. Apaga o anterior se ele existir.  |
                                       | "a+b"| Binário | Leitura/ Escrita. Os dados serão adicionados no fim do arquivo ("append").      |
                                       ----------------------------------------------------------------------------------------------------             
*/

// Ao terminar de usar o arquivo é necessário fechá-lo. Para isso usamos a função fclose(FILE *farq).

// O ponteiro *farq indica que arquivo deve ser fechado. Após o seu fechamento o arquivo não pode ser manipulado.

/* ====================================================================================================================================== */

// Gravando e lendo caracteres em Arquivos C

// Após a abertura do arquivo é possível Ler e ou gravar dados nele.

// A função fputc() possibilita a gravação de dados caracter a caracter.

    // int fputc(int ch, FILE *arq);

// A função fgetc() possibilita a leitura de dados do arquivo caracter a caracter.

    // int fgetc(FILE *arq);

/* Quando não houver mais dados a serem lidos no arquivo, a fgetc() devolve a constante EOF (End Of Life), que está definida no Header stdio.h, 
indica o fim de um arquivo. Isso indica que chegamos ao fim do arquivo e não se pode realizar a leitura dos dados. Em geral, o valor de EOF é -1. */

// Aṕos a abertura do arquivo é necessário realizar o teste de fim de arquivo (o arquivo pode estar vazio):

/* 

    if((fp = fopen("arquivo.txt", "r")) == NULL) {

        printf("Erro na abertura do arquivo");
        exit(1);

}   

*/

/* 

O exemplo a seguir exibe a gravação e leitura de dados caracter a caracter:
    - No comando fopen será criado o arquivo arqtexto.txt na pasta corrente;
    - A string tentrada será gravada no arquivo caracter a caracter;
    - O arquivo será fechado e posteriormente aberto para leitura;
    - Utilizamos a função fgetc() para ler esses dados do arquivo caracter a caracter; 
    
*/



#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void) {

    FILE *farq;

    int i;

    char tentrada[50] = {"Teste de gravacao e leitura de dados-arquivo texto"};

    char tsaida[50], car;

    if((farq = fopen("arqtexto.txt", "w")) == NULL) {

        printf("Erro na abertura do arquivo");
        exit(1);

    }

    for(i = 0; i < strlen(tentrada); i++) {

        fputc(tentrada[i], farq);

    }

    fclose(farq);
    
    farq = fopen("arqtexto.txt", "r");

    if(farq == NULL) { // Pode-se fazer o teste dessa forma

        printf("Erro na abertura do arquivo");
        exit(1);

    } 

    printf("Vou ler e mostrar o texto gravado... \n");
    sleep(4); // O processo iŕa dormir por 4 segundos

    i = 0;

    car = fgetc(farq); // Irá ler o Arquivo caracter por caracter

/*
    tsaida[0] = car;

    printf("%c\n", tsaida[0]);
    car = fgetc(farq);
    tsaida[1] = car;
    printf("%c\n", tsaida[1]);
*/
    while(car!= EOF) {

        tsaida[i] = car;

        printf("%c", tsaida[i]);

        i++;

        car = fgetc(farq);
    }

    fclose(farq);

    printf("\n");

    return 0;
}

/* A constante EOF pode ser substituida pela a função feof() que realiza o teste de fim de arquivo. int feof(FILE *arq) */

// O teste do while do exemplo acima poderia ficar assim: while (!feof(farq));

/*

int main(void) {

    FILE *fp;

    int c;

    fp = fopen("file.txt", "r");

    if(fp == NULL) {

        perror("Error in opening file");
        return(-1);

    }

    do {

        c = fgetc(fp);

            if (feof(fp)) {
                break;
            }
            
        printf("%c", c);

    } while(1);

    fclose(fp);

    printf("\n");

    return 0;
}

*/