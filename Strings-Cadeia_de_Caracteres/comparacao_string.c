// Comparação de String

// A comparação pode ser efetuada caracter a caracter (como um array) ou através da função strcmp (String Compare).

 // Para isso, usamos os códigos dos caracteres para determinar a precedência:
    //  Se str1 preceder str2 -> será -1;
    //  Se str2 preceder str1 -> será 1;
    //  Se str1 igual a str2 -> será 0;

#include <stdio.h>
#include <string.h>

int compara(char s1[], char s2[]) {

    int i;

    for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) { // Teste do for() fica falso quando uma das strings chegar ao fim, ou pelo return

        if (s1[i] < s2[i]) {

            return -1;
        }
         
        if (s1[i] > s2[i]) {

            return 1;
        }

        // string iguais
        
        else {

             return 0;
        }

    }
}

int main(void) {

    char str1[16] = {'T', 'E', 'S', 'T', 'E', ' ', 'D', 'E', ' ', 'S', 'T', 'R', 'I', 'N', 'G', '\0'};
    char str2[16] = {'S', 'T', 'R', 'I', 'N', 'G', ' ', 'D', 'E', ' ', 'T', 'E', 'S', 'T', 'E', '\0'};
    char str3[16] = {'T', 'E', 'S', 'T', 'E', ' ', 'D', 'E', ' ', 'S', 'T', 'R', 'I', 'N', 'G', '\0'};

    int retorno, i;

    // Comparação Manual

    // retorno = compara(str1, str2);

    retorno = strcmp(str1, str2); // int strcmp(const char *str1, const char *str2) - Compara duas Strings (str1 e str2) e determina a ordem alfabetica das duas.

    printf("retorno = %d\n", retorno);

        if(retorno == 1) {

            printf("str1 > str2\n");
        }

        else if(retorno == -1) {

            printf("str1 < str2\n");
        }

        else {

        printf("retorno = %d\n", retorno);

        }
        

    return 0;
}