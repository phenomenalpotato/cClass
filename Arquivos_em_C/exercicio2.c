/* Criar um programa C que:

    - Crie/ abra um arquivo texto de nome "arq.txt";
    - Permita que o usuário entre com diversos caracteres nesse arquivo, até que o usuário entre com o caractere '0' (fim da entrada de 
    dados); 
    - Feche o arquivo e abra novamente o arq.txt; 
    - Lendo-o caractere por caractere, e escrevendo na tela (printf) todos os caracteres armazenados. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    FILE *fl;

    // char *texto = "Texto";

    char text[100];
    char caracter;

    int i, j;

    for(j = 0; j < 100; j++) {

        printf("Escreva uma frase que será gravada no arquivo arq.txt: ");
        scanf("%s", &text[j]);

        if(text[j] == '0') {

            break;

        }



    }

    fl = fopen("arq.txt", "w");

    if(fl == NULL) {

        perror("Error in opening File");
        return (-1);

    }

    for(i = 0; i < strlen(text); i++) {

        // fputc(*(i + texto), fl);

        fputc(text[i], fl);

    }

    fclose(fl);

    fl = fopen("arq.txt", "r");

    do {

        caracter = fgetc(fl);

        if(feof(fl)) {

            break;
        }

        printf("%c", caracter);


    } while(1);

    printf("\n");

    fclose(fl);

    return 0;
}