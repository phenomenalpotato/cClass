#include <stdio.h>

int trans(int mat) {

    if(mat < 0) {

        mat = mat * -1;

    }

    return mat;

}

int main(void) {

    int matriz[3][3] = {{100, 101, -102}, {-12, -423, 102}, {1, 3, 4}};

    int i, j;

    // printf("%d\n", matriz[1][1]);

     for(i = 0; i < 3; i++) {

        for(j = 0; j < 3; j++) {

            printf("Matriz[%d]\n", trans(matriz[i][j]));

        }

     }

    return 0;
}