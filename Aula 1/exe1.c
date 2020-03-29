#include <stdio.h>

int main(void){

    int conversao = 12;
    int conversao2 = 15;

    /* Essa é uma conversão para Decimal usando o %d ou %i do printf() . O %i também pode intepretar um número como Hexadecimal caso seja precedido com 0x
    ou em octadecimal se for precedido com 0*/

    printf("Essa é uma conversão para Decimal: %d %i %i %i\n", conversao, conversao2, 0xa, 012);

    /* Essa é uma conversão para Hexadecimal usando o %X do printf() */ 

    printf("Essa é uma conversão para Hexadecimal: %X %X\n", conversao, conversao2);


    /* Printando o % na tela */

    printf("Escrevendo o %% na tela\n");

    /* Escrevendo um número real na tela usando o %f */

    printf("Essa é uma conversão para Real: %f %f\n", 4.8, 11.1 );

    /* Escrevendo uma letra na tela usando o %c */

    printf("Essa é uma letra: %c\n", 'B'); 

    /* Escrevendo um texto usando o %s */

    printf("Isso é um texto: %s\n", "Isso é um texto!!!!");

}