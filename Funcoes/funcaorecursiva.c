#include <stdio.h>

/* Uma função recursiva, nada mais é uma função que chama ela mesma! */

int main(void) {

    int fatorial(int x);

    int numero, resultado;

    printf("Digite um número inteiro: ");

    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial é: %d\n", resultado);

    return 0;
}

int fatorial(int x) {

    int resultado;

    if (x == 0) 

        resultado = 1;

    else {

        resultado = x * fatorial(x - 1); /* A ideia principal de uma função recursiva é que 
                                         "Na memória enquanto ela está sendo executado, essa função recursiva, 
                                         ela congela/ para de executar e começa a executar ela mesma quantas vezes for necessário".
                                         Por exemplo, nesse caso dentro da função fatorial() dentro dela/ durante a execução dela, 
                                         Ela se chama em determinado momento. E quando isso acontece, no caso do resultado = x * fatorial(x - 1);
                                         O que tem que ser primeiro resolvido é a função fatorial() e depois a multiplicação.
                                         Então, nesse caso se x = 3; fatorial() vai ter que parar executar ela; e quando chegar nesse ponto de novo na
                                         "segunda execução" (resultado = x * fatorial(x - 1)); Vai ter que parar novamente e fazer uma "terceira execução";
                                         Até que x == 0; Quando isso acontecer, a última função fatorial() irá retornar/ "sair do loop" 
                                         com valor da variável resultado para as funções que foram executadas anteriormente e que estavam esperando;
                                         */
        
        printf("Valor fatorial agora: %d\n", resultado);
    }

    return resultado;

}