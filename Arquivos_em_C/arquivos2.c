// Gravando e lendo cadeias de caracteres em arquivos em C

// Existem funções na linguagem C que permitem escrever fputs() e ler fgets() cadeias de caracteres.

    // int fputs(char *cadeia, FILE *arq);

// Esta função recebe como parâmetro uma cadeia de caracteres (string) e um ponteiro para o arquivo que queremos gravar.

// Exemplo de um trecho de gravação de cadeia de caracteres:

/* 

    FILE *farq;

    char tentrada [51] = {"Teste de gravacao e leitura de dados-arquivo texto"};

    farq = fopen("arqtexto.txt", "w");

    fputs(tentrada, farq);

    fclose(farq);

*/

/* Diferentemente da função de gravação, a função de leitura possui um parâmetro a mais para indicar o tamanho, isto é, o número máximo de caracteres que 
serão lidos */

// Essa função pode retornar a cadeia de caracteres (ponteiro para o primeiro caractere da cadeia) ou NULL em caso de erro ou fim de linha do arquivo.

    // int fgets(char *cadeia, int tamanho, FILE *arq);

// Exemplo de um trecho de leitura de cadeia de caracteres: 

/*

    char tsaida[51];

    farq = fopen("arqtexto.txt", "r");

    fgets(tsaida, tam, farq);

    printf("Foi lida a frase: %s", tsaida);

    fclose(farq);

*/

/* ====================================================================================================================================== */

// Gravando e lendo Blocos de dados em Arquivos C

// Podemos escrever e ler blocos de dados em arquivos C através das funções: fwrite() e fread();

// A função fwrite()

    // unsigned fwrite(void *bloco, int numero_de_bytes, int total, FILE *arq);

/*

    bloco: ponteiro para a região de memória na qual estão os dados;
    numero_de_bytes: tamanho de cada posição de memória a ser escrita;
    total: quantidade de blocos de memória de tamanho "numero_de_bytes" que devem ser escritos;
    arq: ponteiro associado ao arquivo onde os dados serão escritos;

*/

// Exemplo:

/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    FILE *farq;

    int i; 

    char texto[51] = {"Teste de gravacao e leitura de dados-arquivo texto"};

    int vet[4] = {1, 2, 3, 4};

    //texto[50] = '\0';

    farq = fopen("texto.txt", "w");

    fwrite(texto, sizeof(char), strlen(texto), farq); // grava a cadeia texto no arquivo 

    fwrite(vet, sizeof(int), 4, farq); // grava o vetor no arquivo

    fclose(farq);

    return 0;
}

*/

// A função fread() é semelhante a fwrite() para realizar a leitura dos dados.

    // unsigned fread(void *bloco, int numero_de_bytes, int total, FILE *arq);

// Exemplo: 

/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void) {

    FILE *farq;

    int i;

    char textos[51];

    int vets[4];

    char texto[51] = {"Teste de gravacao e leitura de dados-arquivo texto"};

    int vet[4] = {1, 2, 3, 4};

    // Realiza a Criação do Arquivo e Gravação dos Dados

    //texto[50] = '\0';
    farq = fopen("text.txt", "w");
    fwrite(&texto, sizeof(char), strlen(texto), farq); // Grava a cadeia texto no Arquivo 
    fwrite(&vet, sizeof(int), 4, farq); // Grava o vetor vet no arquivo 
    fclose(farq);

    // Realiza a leitura dos dados gravados

    farq = fopen("text.txt", "r"); // Abre o arquivo para leitura

    if(farq == NULL) {

        perror("Erro na abertura do arquivo");
        exit(1);

    }

    fread(&textos, sizeof(char), strlen(texto), farq); // Lê a cadeia de texto no arquivo 
    
    puts("Lendo o Arquivo...");
    sleep(4);

    printf("Texto lido do Arquivo: %s\n", textos);

    fread(&vets, sizeof(int), 4, farq);

    for(i = 0; i < 4; i++) {

        printf("%d\n", vets[i]);
    }

    fclose(farq);

    return 0;
}

*/

// Os acessos aos dados em um arquivo geralmente é sequencial, mas é possível fazer buscas e acessos randômicos através da função fseek();

// Esta função posiciona a leitura ou escrita no arquivo em tantos bytes, a partir de um ponto especificado.

/*

A função fseek() recebe 3 parâmetros:
    - fptr: o ponteiro para o arquivo;
    - numbytes: é o total de bytes a partir do tipo a ser pulado;
    - tipo: determina a partir de onde os numbytes de movimento serão contados;

*/

// Os valores possíveis para tipo estão definidos em stdio.h e são: 

/*
                                                        --------------------------------------------------
                                                        | Nome      | Valor |        Significado         |
                                                        | SEEK_SET  |   0   |      Inicio do Arquivo     |
                                                        | SEEK_CUR  |   1   |  Ponto corrente do arquivo |
                                                        | SEEK_END  |   2   |       Fim do arquivo       |
                                                        --------------------------------------------------
*/

/*

    Portanto, para mover numbytes a partir:
        - Do inicio do arquivo, tipo deve ser SEEK_SET
        - Da posição atual, tipo deve ser SEEK_CUR
        - Do final do arquivo, tipo deve ser SEEK_END

*/

#include <stdio.h>

    struct alunos {

        int matric;
        char nome[10];
        int idade;
    };

int main(void) {

    FILE *farq;

    struct alunos al, alun[4] = {1, "Maria", 20, 2, "Ana", 19, 3, "Carlos", 16, 4, "Celso", 19};

    farq = fopen("arqtexto.txt", "w");

    fwrite(alun, sizeof(struct alunos), 4, farq); // Grava o array de registros de alunos

    fclose(farq);

    farq = fopen("arqtexto.txt", "r");

    fseek(farq, 3*sizeof(struct alunos), SEEK_SET); // Posiciona a leitura no quarto registro

    fread(&al, sizeof(struct alunos), 4, farq); // Lê o quarto registro de aluno

    printf("%d\n%s\n%d\n", al.matric, al.nome, al.idade);

    fclose(farq);

    return 0;
}