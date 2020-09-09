/* Faça um programa para calcular a área e o perimetro de um hexágono. O programa deve implementar uma função chamada calc_hexa que calcula a área e o perimetro
de hexágono regular. */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PONTO printf("------------------------------------------------------------\n");

void calc_hexa(float lhexagono) { // Irá calcular a área e o perimetro do hexágono regular.
 
    float perimetro, area;

    int i;

    perimetro = lhexagono * 6;

    area = ((3 * pow(lhexagono, 2)) * sqrt(3)) / 2;

    printf("O perimetro do Hexágono é: %.2f\n",perimetro);

    printf("Essa é a área do Hexágono: %.2fm²\n", area);

}

int main(void) {

    float lhexagono;

    printf("Qual o tamanho de um dos lados do Hexágono: ");
    scanf("%f", &lhexagono);

    if (lhexagono < 0) {

        fprintf(stderr, "O valor do lado digitado foi menor que 0\n");
        exit(1);

    }

    calc_hexa(lhexagono);

    while(lhexagono > 0) {

    PONTO

    printf("Qual o tamanho de um dos lados do Hexágono: ");
    scanf("%f", &lhexagono);


    if (lhexagono < 0) {

        fprintf(stderr, "O valor do lado digitado foi menor que 0!\n");
        exit(1);

    }


    calc_hexa(lhexagono);
    
    }

    return 0;

}