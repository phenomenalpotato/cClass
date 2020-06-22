#include <stdio.h>
#include <stdlib.h> // Para usar o exit()
#include <stdbool.h> // Para poder usar o booleano

void fatal(char *msg) {

    fprintf(stderr, "Erro: %s\n", msg);

    exit(1);

}

void usage(void) {

    printf("Uso: \n\treadpe <arquivo.exe>\n");
    exit(1);

}

bool ispe(const unsigned char *b) { // Função que irá dizer se o arquivo é um PE ou não 

    return if (b[0] == 'M' && b[1] == 'Z'); // 'M' == 0x4d e o 'Z' 0x5a. Irá retornar True ou False

}

int main(int argc, char *argv[]) {

    FILE *fh;

    unsigned char buffer[32]; 

    if(argc != 2) {

        // fatal("Paramentro necessário faltando!");

        usage();
    }

    fh = fopen(argv[1], "rb"); // fopen é uma função que abre o arquivo. Parametros "rb" da função fopen para abrir um binaŕio 

    if (fh == NULL) {

        fatal("Arquivo não encontrado ou sem permissão de leitura!");
    }

    if (fread(buffer, 32, 1, fh)) { // Função para ler um arquivo

        fatal("Não consegui ler os 32 bytes do arquivo");

    } 

    fclose(fh); // Fecha o arquivo que foi aberto

    // printf("%c\n", buffer[1]);

    if (!ispe(buffer) ) {

    fatal("O arquivo não parece ser um executável PE!");

    }

    return 0;

}