#include <stdio.h>

int main(void) {

    int matriz[13][3] = {1,2,3,4,5,6,7,8,9}; 

    void funcaoPrint(int matriss[][3]);

    funcaoPrint(matriz);

    return 0;

}

void funcaoPrint(int matriss[][3]) { // Quando tiver que passar uma matriz como argumento, deve no minimo, passar com a segunda coluna preenchida.

    int i, j;

    for(i = 0; i < 3; ++i){


        for(j = 0; j < 3; ++j) {
 
            printf("%d ", matriss[i][j]);
        }

        printf("\n");
    }


}

