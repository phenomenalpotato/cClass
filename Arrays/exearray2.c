#include <stdio.h>
#include <math.h>

int main(void) {

    int arrayA[5];
    int arrayB[5];
    int i;

    for(i = 0; i < 5; i++) {

        printf("Digite um número: ");
        scanf("%d", &arrayA[i]);

        arrayB[i] = pow(arrayA[i], 2);

        printf("Valor do ArrayA: %d\n", arrayA[i]);
        printf("Valor do ArrayB: %d\n", arrayB[i]);

    }

    return 0;
} 