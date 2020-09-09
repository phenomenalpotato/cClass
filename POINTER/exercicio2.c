#include <stdio.h>

/* Fazer um programa que declare uma matriz 10x10 de inteiros. No fim, o programa deve imprimir a matriz. Criar preencher a matriz com os números de
99 a 0*/

void nulo(int *nulloi) { // Irá zerar todos os indices da Matriz

     *nulloi = 0;

}

void preenchimento(int *num) { // Irá preencher os indices da Matriz com números de 99 a 0

    static int con = 99;

    *num = con;

    con--;

}

int main(void) {

    int i, j, nullo;

    int matrix[10][10];

    for(i = 0; i < 10; i++) {

        for(j = 0; j < 10; j++) {

            nulo(&matrix[i][j]);

            printf("Matriz Nula[%d] na posição[%d][%d]\n", matrix[i][j], i, j);

        }

    }

    for(i = 0; i < 10; i++) {

        for(j = 0; j < 10; j++) {

            preenchimento(&matrix[i][j]);

            printf("Matriz Preenchida[%d] na posição[%d][%d]\n", matrix[i][j], i, j);



        }


    }

    return 0;
}