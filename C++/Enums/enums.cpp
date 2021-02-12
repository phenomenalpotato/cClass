#include <iostream>

// Enums/ Enumaration é um conjunto de valores inteiros e Constantes. Basicamente, é uma maneira de dar nomes a Valores. É muito útil quando você quer representar
// Certos estados com inteiros ou certos valores, e assim você dar um nome para um valor e tornar o seu código mais legivel.

enum Example : unsigned char {A, B, C}; // Especificando o tipo de int que essa enum será. Nesse caso, com o unsigned char o cada int da Enum terá 1 byte. 
                                       // E com isso, a Enum pegará menos memória

int a = 0;

int b = 1;

int c = 2;

int main(void) {

    int value = B;

    // Example value = B;

    if (value == B) {

        printf("%d\n", value);

    }

    return 0;
}