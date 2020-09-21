// O comando scanf não lê o caracter ('\0'), portanto em variáveis do tipo char esse caracter é lido no comando scanf seguinte. Logo, em comandos
// de leitura de variáveis do tipo char, coloque a função getchar() ou fflush(stdin) (biblioteca stdlib.h) após o comando scanf, para solucionar o problema.
// A função fflush(stdin) limpa o buffer do teclado.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char array[3];

    int i;

    for(i = 0; i < 3; i++) {

        printf("entra:");

        scanf("%s", &array[i]);
        // fflush(stdin); // Usar essa função ou getchar()
        // fgets(array, 10, stdin);
    }

        // printf("entra:");
        // scanf("%s", &array[0]);

        // printf("entra:");
        // scanf("%s", &array[1]);
        
        // printf("entra:");
        // scanf("%s", &array[2]);

    for(i = 0; i < 3; i++) {

        printf("Qual o nome da nuvem da Amazon: %c\n", array[i]);
     }

    

    return 0;

}