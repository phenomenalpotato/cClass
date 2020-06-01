#include <stdio.h>

#define TAM 2 // Definindo uma macro

enum pedras {CAVALO = 2, BISPO = 3, TORRE, RAINHA};

int main(int argc, char *argv[]){

int tabu[TAM][TAM] = { 0 }; 

int i, j;

tabu[0][0] = CAVALO; // Colocando um valor na posição linha 0 e coluna 0
tabu[0][1] = BISPO;
tabu[1][0] = TORRE;
*(*(tabu+1) + 1) = RAINHA;


    for (i = 0 ; i < TAM ; i++) {

        for (j = 0; j < TAM; j++) {

            printf("[%d] [%d] = %d ", i, j, tabu[i][j]);

            if (j == TAM - 1){

                putchar('\n');
            }
        }

    }

    return 0;
}   