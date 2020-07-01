#include <stdio.h>

int main(void) {

   /*
        =   Atribuição;
        + - Operadores Unarios (a = +10);
        * / Multiplicação e Divisão;
        = - Operadores Binarios (a = 1 + 1);
        %   Resto de Divisão;
        ++  Incremento;
        --  Decremento;  


   */
   
    int a;

    float b; 

    int c;

    int d;

    int e;

    a = 10; // Mesma coisa que fazer a = +10; para falar que o 10 é positivo.

    b = 10 / 3.0f;

    c = 10 / 3;

    d = 10 % 3;

    e = 4 + 2 * 3; // Prioridade dos operadores. Caso queira que a operação de soma ocorra antes da de multiplicação é so colocar os parentese (4 + 2) * 3;

    printf("Valor original de a (int): %d\n", a);

    printf("Multiplicação de a (int): %d\n", a * 9);

    printf("Divisão de b (float): %f\n", ++b);

    c = c + 1; // Ou você pode fazer tambem que vai a mesma coisa para incrementar: c += 1 ou c++ que vai dar na mesma;

    c += 8; // Também pode c *= 10 para multiplicar;

    c++;

    printf("O resultado da divisão e incrementação de c (int) é: %d\n", c);

    printf("O resto da divisão de d (int): %d\n", d);

    printf("O resultado da operação de e (int): %d\n", e);

    return 0;

}