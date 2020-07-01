#include <stdio.h>

int main(void) {

    int caso;

    printf("Escreva um número de 1 a 3: ");
    scanf("%d", &caso);

    switch(caso) {

        case 1:
            printf("Conteúdo da variável caso: %d\n", caso);
            // puts("Oloco");
        break;

        case 2:
            printf("Conteúdo da variável caso: %d\n", caso);
        break;

        case 3:
            printf("Conteúdo da variável caso: %d\n", caso);
        break;

    }

    return 0;
}