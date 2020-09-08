/* Faça um Programa que modifique as vogais de uma frase. O programa deve ler uma frase (max. 100 caracteres) e armazena-la num array. Imprimir a frase lida 
trocando as vogais, isto é, trocar 'a' pelo 'u', 'e' pelo 'o', 'i' pelo  'u', 'o' pela 'a' e 'u' pelo 'e'. Só irá fazer a substituição se a letra for 
minuscula. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void procedimento(char *letra){ // Função irá receber uma letra e irá ver se é uma vogal ou não. Se for uma Vogal, irá substituir por outra 'a'
                               // pelo 'u', 'e' pelo 'o', 'i' pelo  'u', 'o' pela 'a' e 'u' pelo 'e'

    switch (*letra) {

        case 'a':

            *letra = 'u';

        break;

        case 'e': 

            *letra = 'o';

        break;

        case 'i':

            *letra = 'u';

        break;

        case 'o':

            *letra = 'a';

        break;

        case 'u':

            *letra = 'e';

        break;
    

    }

    //printf("Espaço de memória: %p\n", letra);

}

int main(void) {

    char frase[101];

    char tamfrase, *letra;

    int i;

    //letra ="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasasasa";

    printf("Escreva uma frase com até no máximo 100 caracteres: ");
    fgets(frase, 101, stdin);

    printf("%ld\n", strlen(frase));

    // tamfrase = strlen(frase);

    // if(tamfrase > 100) {

    //     fprintf(stderr, "Frase digitada tem mais de 100 caracteres!");
    //     exit(1);
    // }

    printf("Frase digitada: %s", frase);

    printf("Frase modificada: ");

    for(i = 0; i < tamfrase; i++) { // frase != '\n'

        procedimento(&frase[i]);

        printf("%c", frase[i]);

    }

    return 0;
}