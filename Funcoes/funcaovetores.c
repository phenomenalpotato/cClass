#include <stdio.h>

int main(void) {

    int array[10] = {5,8,6,2,7,1,4,9,8,3}; 

    int i;

    void ordemCrescente(int array[], int n);

    // printf("Porra: %d\n", array[0]);


    ordemCrescente(array, 10);

    // printf("%d", ordemCrescente);

    for(i = 0; i < 10; ++i) {

        printf("%d\n", array[i]);

    }

    // printf("Porra: %d\n", array[1]);


    return 0;

}

void ordemCrescente(int array[], int n) {

    int i, j, temporaria;

    for(i = 0; i < n; ++i){


        for(j = i + 1; j < n; ++j) {
 
            if (array[i] > array[j]) {

                temporaria = array[i];

                array[i] = array[j];

                array [j] = temporaria;
            }

        }
    }

}