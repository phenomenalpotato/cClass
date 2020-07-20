// Informa a quantidade de caracteres (tamanho) em uma cadeia de caracteres, executando o caracter de fim da String('\0');

// Exemplo de tamanho de String:

#include <stdio.h>
#include <string.h>

int main(void) {

    char str1[] = {'Q', 'U', 'A', 'L', ' ', 'O', ' ', 'M', 'E', 'U', ' ', 'T', 'A', 'N', 'H', 'O', '\0'};
    char str2[] = {'E', ' ', 'A', ' ', 'M', 'I', 'N', 'H', 'A', ' ', 'S', 'T', 'R', 'I', 'N', 'G', '\0'};
    char str3[] = {'T', 'E', 'S', 'T', 'E', ' ', 'D', 'E', 'S', 'T', 'R', 'I', 'N', 'G', '\0'};

    int tam1, tam2, tam3;

    tam1 = strlen(str1); // int strlen(const char *string) - Retorna o tamanho de uma string.
        printf("Tamanho da String 1 = %d\n", tam1);

    tam2 = strlen(str2); // int strlen(const char *string) - Retorna o tamanho de uma string.
        printf("Tamanho da String 2 = %d\n", tam2);

    tam3 = strlen(str3); // int strlen(const char *string) - Retorna o tamanho de uma string.
        printf("Tamanho da String 3 = %d\n", tam3);

    return 0;
}