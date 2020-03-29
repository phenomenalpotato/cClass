#include <stdio.h>

int main(void) {

    float f = 40.334309;

    double d = 1; // Tipo de variável usada para representar números reais de 64 bits

    long double ld = 1; // Pode utilizar 128 bits para representar um tipo real 

    // Usando representação cientifica com o tipo float:
    // float ff = 3e2; 3 * 10^2 

printf("O tamanho de f (float): %zu bytes / %zu bits\n", sizeof f, sizeof f* 8);

printf("O tamanho de d (double): %zu bytes / %zu bits\n", sizeof d, sizeof d * 8);

printf("O tamanho de ld (long double): %zu bytes / %zu bits\n", sizeof ld, sizeof ld * 8);

/* As 6 casas decimais depois do ponto, é o padrão do printf() colocar. Para colocar quantas casas terão depois do ponto, deve fazer/ colocar %.2f  */

printf("O valor de f: %.2f\n", f);

}