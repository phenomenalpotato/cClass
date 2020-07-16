#include <stdio.h>
#include <stdlib.h>

float financiamento(float fin, int par) {

    float resultado;

    resultado = fin / par;

    return resultado;
}

void msgError(char *msg) {

    fprintf(stderr, "ERROR: %s\n", msg);
    exit(1);
}

int main(void) {

    float finan, resul, resulFinal;

    int parcelas;

    printf("Qual será o número de parcelas: ");
    scanf("%d", &parcelas);

    printf("Qual será o valor do financiamento: ");
    scanf("%f", &finan);

    resul = financiamento(finan, parcelas);

    if(parcelas <= 0) {

        msgError("O número de parcelas digitado foi menor ou igual a 0");

    }

    switch(parcelas) {

        case 6:
            resulFinal = ((finan * 0.07) / 12 ) + resul;
            printf("Esse será o valor mensal do que deverá ser pago em [%d] parcelas de R$%.2f\n", parcelas, resulFinal);
        break;

        case 12:
            resulFinal = ((finan * 0.10) / 12 ) + resul;
            printf("Esse será o valor mensal do que deverá ser pago em [%d] parcelas de R$%.2f\n", parcelas, resulFinal);
        break;

        case 18:
            resulFinal = ((finan * 0.12) / 12 ) + resul;
            printf("Esse será o valor mensal do que deverá ser pago em [%d] parcelas de R$%.2f\n", parcelas, resulFinal);
        break;

        case 24:
            resulFinal = ((finan * 0.15) / 12 ) + resul;
            printf("Esse será o valor mensal do que deverá ser pago em [%d] parcelas de R$%.2f\n", parcelas, resulFinal);
        break;

        case 36:
            resulFinal = ((finan * 0.18) / 12 ) + resul;
            printf("Esse será o valor mensal do que deverá ser pago em [%d] parcelas de R$%.2f\n", parcelas, resulFinal);
        break;

    }
    // else if(parcelas <= 6) {

    //     printf(" 6 Esse será o valor do que deverá ser pago em %d parcelas de R$%.2f\n", parcelas, resul);

    // }

    // else if(parcelas <= 12) {

    //     printf(" 12 Esse será o valor do que deverá ser pago em %d parcelas de R$%.2f\n", parcelas, resul);
    
    // }

    // else if(parcelas <= 18) {

    //     printf(" 18 Esse será o valor do que deverá ser pago em %d parcelas de R$%.2f\n", parcelas, resul);

    // }

    // else if(parcelas <= 24) {

    //     printf(" 24 Esse será o valor do que deverá ser pago em %d parcelas de R$%.2f\n", parcelas, resul);

    // }

    // else if(parcelas <= 36) {

    //     printf(" 36 Esse será o valor do que deverá ser pago em %d parcelas de R$%.2f\n", parcelas, resul);

    // }

    return 0;
}