#include <stdio.h>

int main(void) {

int i, j, numAnterior = 0, somaMatrizA = 0, numAnterior2 = 0, somaMatrizB = 0, numAnterior3 = 0, numAnterior4 = 0;
float somaMatriz2B = 0, somaMatriz2A = 0;

int matrizA[4][4] = {{1, 2, 3, 4}, {12, 34, 12, 145}, {32, 1, 0, 45}, {9, 43, 19, 2}};
int matrizB[4][4] = {{76, 34, 11, 7}, {8, 89, 98, 100}, {65, 10, 87, 1}, {32, 87, 70, 71}};

    for(i = 0; i < 4; i++) {

        for(j = 1; j < 4; j += 2) {

            // printf("MatrizA[%d][%d] = [%d]\n", i, j, matrizA[i][j]);
            
            numAnterior = matrizA[i][j];
            somaMatrizA = somaMatrizA + numAnterior; 

            numAnterior2 = matrizB[i][j];
            somaMatrizB = somaMatrizB + numAnterior2;         

        }

    }

    printf("Soma da coluna impar da matrizeA: %d\n", somaMatrizA);
    printf("Soma da coluna impar da matrizeA: %d\n", somaMatrizB);

    for(i = 0; i < 4; i++) {

        for(j = 0; j < 4; j+=2) {

            // printf("MatrizB[%d][%d] = [%d]\n", i, j, matrizB[i][j]);

            numAnterior3 = matrizA[i][j];
            somaMatriz2A = somaMatriz2A + numAnterior3;

            numAnterior4 = matrizB[i][j];
            somaMatriz2B = somaMatriz2B + numAnterior4;

        }

    }

    printf("A media aritmetica das colunas pares da matrizA: %.2f\n", somaMatriz2A / 4);
    printf("A media aritmetica das colunas pares da matrizB: %.2f\n", somaMatriz2B / 4);

    return 0;
}