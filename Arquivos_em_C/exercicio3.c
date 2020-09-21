/* Faça um programa em C que lê 5 frases de, no máximo, 50 caracteres cada uma e armazene-as em um arquivo. 
Mas, antes de gravar cada frase no arquivo, é necessário converter todas as suas letras para maiúsculas. 
Os nome do arquivo será fornecido, via teclado, pelo usuário. A função que converte minúscula para maiuscula é o toupper(). 
A seguir, feche o arquivo e reabra para leitura exibindo todas as frases convertidas. 
*/

#include <stdio.h>
#include <ctype.h> // Header para usar a função touper();
#include <string.h>
#include <stdlib.h> // Header para usar a função exit() && malloc() && free();

int main(void) {

    char efrase1[50]; // Array que irá armazenar o input do usuário
    char tfrase1[50]; // Array que irá armazenar cada caractere em maiusculo após a conversão 
   
    char efrase2[50];
    char tfrase2[50];

    char efrase3[50];
    char tfrase3[50];

    char efrase4[50];
    char tfrase4[50];

    char efrase5[50];
    char tfrase5[50];

    char sfrase[250]; // Array para armazenar os caracteres que serão lidos no arquivo


    FILE *fe; // Ponteiro do tipo FILE que irá armazenar o endereço do Arquivo

    int i;

    char *pnome = malloc(35); // Alocando 35 bytes de memória para o ponteiro *pnome

    printf("Escreva a primeira frase que será gravada no Arquivo: "); // Fazendo que o usuário digite a frase que quer
    fgets(efrase1, 50, stdin); // Com a função fgets() é possível que o usuário escreva frases com espaço. Diferente do que acontece com o scanf();

    printf("Escreva a segunda frase que será gravada no Arquivo: ");
    fgets(efrase2, 50, stdin);

    printf("Escreva a terceira frase que será gravada no Arquivo: ");
    fgets(efrase3, 50, stdin);

    printf("Escreva a quarta frase que será gravada no Arquivo: ");
    fgets(efrase4, 50, stdin);

    printf("Escreva a quinta frase que será gravada no Arquivo: ");
    fgets(efrase5, 50, stdin);

    printf("Qual o nome do arquivo: "); // pedindo que o usuário escreva o nome do arquivo
    scanf("%s", pnome); // Armazenando o input do usuário no ponteiro *pnome

    fe = fopen(pnome, "w"); // Abrindo o arquivo com o nome que o usuario passou

    for(i = 0; i < 50; i++) { // convertendo as frases em maiusculo

        tfrase1[i] = toupper(efrase1[i]);

        tfrase2[i] = toupper(efrase2[i]);

        tfrase3[i] = toupper(efrase3[i]);

        tfrase4[i] = toupper(efrase4[i]);

        tfrase5[i] = toupper(efrase5[i]);


    }

    fputs(tfrase1, fe); // Escrevendo as frase no arquivo
    fputs(tfrase2, fe);
    fputs(tfrase3, fe);
    fputs(tfrase4, fe);
    fputs(tfrase5, fe);

    fclose(fe); // Fechando o arquivo 

    fe = fopen(pnome, "r"); // Abrindo o arquivo com o nome que o usuário passou

    if(fe == NULL) { // Caso o ponteiro seja igual a NULL é pq deu algum erro na abertura do arquivo

        perror("Error in opening file");
        exit(1);

    }

    fread(&sfrase, sizeof(char), 250, fe); // Função para ler o bloco de texto do Arquivo

    printf("Frase no arquivo [%s]: %s\n", pnome, sfrase);

    free(pnome); // Liberando o espaço em memória alocada para o o ponteiro

    return 0;
} 