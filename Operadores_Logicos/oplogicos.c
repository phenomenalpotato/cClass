#include <stdio.h>

/*
    Conjunção (E, AND)
    0 0 - 0 (FALSO)
    0 1 - 0 (FALSO)
    1 0 - 0 (FALSO)
    1 1 - 1 (VERDADEIRO) 
*/

/*
    Disjunção (OU, OR)
    0 0 - 0 (FALSO)
    0 1 - 1 (VERDADEIRO)
    1 0 - 1 (VERDADEIRO)
    1 1 - 1 (VERDADEIRO)

*/


int main(void) {

    int a = 8;
    int b = 8;

    printf("Verdadeiro (1) ou Falso (0)? %d\n", a == b && b < 4 && a < 90000); // == <- Operador de igualdade, && <- Simbolo de Conjunção

    /* Pode, caso queira, priorizar com parenteses. Por exemplo, (b < 4) */

    printf("Verdadeiro ou Falso? %d\n", a == b || b < 4 && a > 1); // || <- Operador de Disjunção

    printf("Verdadeiro ou Falso? %d\n", !(a == b) && b > 9); // !(a == b) <- Operador de Negação Lógica

    return 0;

}