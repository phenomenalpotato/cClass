// União (Concatenação) da cadeia de caracteres 

// Concatena (une) caracacteres de duas cadeias de caracteres em uma String.

// Exemplo de concatenação de Strings

#include <stdio.h>
#include <string.h>

int main(void) {

    char str1[22] = {'Q', 'U', 'A', 'L', ' ', 'E', ' ', '\0'};
    char str2[15] = {'A', ' ' , 'M', 'I', 'N', 'H', 'A', ' ', 'S', 'T', 'R', 'I', 'N', 'G', '\0'};

    printf("String 1 = %s \\ String 2 = %s\n", str1, str2);

    strcat(str1, str2); // char *strcat(const char *string1, char *string2) - Concatena os caracteres da String2 na String1

    printf("Nova String = %s\n", str1);

    return 0;
}