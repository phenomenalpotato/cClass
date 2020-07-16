// A movimementação de valores de/ para as cadeias de caracteres nã pode ser efetuadas diretamente pelo comando de atribuição, ou pode ser efetuada pela
// movimentação caracter a caracter como em vetores ou através de funções de manipulação de caracteres. Essas funções estão no header file <string.h>

// Mover caracteres para uma variável string
// A movimentação pode ser efetuada caracter a caracter (como em um array) ou através strcpy (String Copy).

// Exemplo de movimentação manual e através da função strcpy

#include <stdio.h>
#include <string.h>

int main(void) {

    char origem[13] = {'T', 'E', 'S', 'T', 'E', ' ', 'S', 'T', 'R', 'I', 'N', 'G', '\0'};
    
    char destino[13];

    char origin[13] = {'T', 'E', 'S', 'T', ' ', 'S', 'T', 'R', 'I', 'N', 'G', '2', '\0'};

    char destiny[13];

    int i;

    // Movimentação Manual

    for (i = 0; i < 13; i++) {

        destiny[i] = origin[i];

    }

    printf("Array De Origem: %s\nArray De Destino: %s\n", origin, destiny);

    printf("\n");

    // Movimentação com o Strcpy

    strcpy(destino, origem); // Copia uma string de source para destination. char *strcpy(const char *dest, const char *src)
    printf("Com a função strcpy:\nOrigin = %s\nDestiny = %s\n", origem, destino);

    // Comparação de String

    return 0;
}