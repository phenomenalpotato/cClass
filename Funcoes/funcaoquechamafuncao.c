#include <stdio.h>

int main(void) {

    float soma(float num1, float num2);

    float a, b;

    printf("Digite o primeiro números: ");

    scanf("%f", &a); // Função para pegar o Input do User e colocando o Dado na Variável a (float)

    printf("Digite o segundo número: ");

    scanf("%f", &b);

    soma(a, b);

    return 0;
}

float soma(float num1, float num2) {

    // float resultado = num1 + num2;

    float valorAbsoluto(float x);

    /*

    if (resultado < 0) {

        valorAbsoluto(resultado);

        printf("A soma dos dois valores é o resultado absoluto: %.1f\n", resultado);
    }

    else 

        printf("A soma dos dois valores é o resultado absoluto: %.1f\n", resultado);
    */

    if (num1 < 0) 

        num1 = valorAbsoluto(num1);

    if (num2 < 0)

        num2 = valorAbsoluto(num2);        
    

    float resultado = num1 + num2;

    printf("A soma dos dois valores é o resultado absoluto: %.1f\n", resultado);
}

float valorAbsoluto(float x) {

    return x * -1;

}