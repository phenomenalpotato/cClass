#include <iostream>

// References não são uma nova variável. Eles não ocupam espaço em memória. References são basicamente SugarSyntax. Não há nada que você possa fazer com 
// References que você não possa fazer com Pointers

void Increment(int *value) {

    //*value = *value + 1;
    (*value)++; // Aqui nós estamos dereferenciando primeiro com o parenteses e depois estamos incrementando o valor por mais 1 com o ++
}

void RefIncrement(int& refvalue) {

    refvalue++;

}


int main(void) {

    int a = 5;

    int& ref = a; // Isso daqui é basicamente um "Alias". Essa "variável" só existe no nosso Source Code, se vc compilar esse código agora, você não terá 
                 // 2 variáveis a e ref, você só terá a variável int a

    // Uma vez que você declara uma Reference, você precisa atribuir a algo 

    ref = 2; // O que podemos fazer agora é usar ref como se fosse a variável int a

    /*
    
        int b = 10;

        int& ref = a;
 
        ref = b; // Uma fez que você declara uma Reference você não pode mudar o que Referencia.

        // O que acontecerá se fizer o bloco de código acima, é que o valor de b será o valor de a. Ou seja:

        b é 10;

        E a será 10; <- Valor da variável b
    
    */

    printf("%d\n", ref); // Para qualquer propósito, ref é int a. Nós só criamos um "Alias". Com um "Alias" é algo que nós criamos no nosso Código Fonte para fazer
                        // A nossa vida mais fácil caso nós queiramos ter um "Alias" para uma variável já existente.

    // Increment(&a);

    RefIncrement(a);

    printf("%d\n", a);

    return 0;
}