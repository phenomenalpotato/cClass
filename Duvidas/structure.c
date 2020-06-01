#include <stdio.h>

struct Pessoa{

    int idade;
    int salario;

};

int main(void) {

    struct Pessoa funcionario;

    funcionario.idade = 32;
    funcionario.salario = 12000;

    struct Pessoa funcionario2;

    funcionario2.idade = 22;
    funcionario2.salario = 11000;

    printf("A idade do funcionario1 e 2 é respectivamente: %d e %d\n", funcionario.idade, funcionario2.idade);

    printf("O salario do funcionario1 e 2 é respectivamente: %d e %d\n", funcionario.salario, funcionario2.salario);
 
    return 0;
}