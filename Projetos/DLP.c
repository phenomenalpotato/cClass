/* Esse programa irá receber uma frase ou palavra e um arquivo qualquer. O mesmo irá verificar quantas vezes essa mesma frase ou palavra aparece no arquivo.
O programa deve receber um arquivo e devolver se nesse arquivo tem a palavra digitada pelo o Usuário */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Função que vai receber um caracter e retornar ele em Maiusculo
char uppercase(char up) {

    if(up >= 'a' && up <= 'z') {

        up = up - 32;

    }

    return up;
}

int main(int argc, char *argv[]) {

    FILE *fh;

    char frase[100]; //= "Cacareco no marreco";
    char *palaUser = NULL;
    
    char letra, lmaiuscula, fmaiuscula;

    int cont = 0, tamanhoFrase;

    fh = fopen(argv[1], "r"); // fopen é uma função que abre o arquivo. Parametros "r" da função fopen para abrir um arquivo para ler

    if (fh == NULL) {

        puts("Arquivo não encontrado ou sem permissão de leitura!");
        exit(1);
    }

    if (fgets(frase, 100, fh) != NULL) {

        puts(frase); // writing content to stdout

    }

    // if (fread(buffer, 32, 1, fh)) { // Função para ler um arquivo

    //     // fatal("Não consegui ler os 32 bytes do arquivo");

    // } 

    fclose(fh); // Fecha o arquivo que foi aberto

    return 0;
}