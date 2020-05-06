#include <stdio.h>

/* Uma matriz é um vetor multi dimensional, uma matriz possui linhas e colunas. Enquanto no vetor só possui linhas ou colunas
*/

int main(void) {

    // int vetor[3] = {1, 2, 3};  <- Isso é um Array

    int matriz[3] [3] = { {1, 2, 3},
                          {4, 5, 6},   
                          {7, 8, 9}}; // O primeiro [3] <- significa as linhas, e o segundo as colunas

    // printf("%d\n",matriz[2][2]);

    // int f;

    // printf("Valor da variável f:\n");

    // scanf("%d", &f);

    for(int m = 0; m < 3; ++m) {

        // printf("%d\n", matriz[m][m]);

        for(int i = 0; i < 3; ++i) {

            printf("%d ", matriz[m][i]);

        }

        printf("\n");
    }

    return 0;
}