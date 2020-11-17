#include <iostream>

// Funções são basicamente blocos de código que são exexutados para fazer uma determinada tarefa. Depois quando estudarmos Classes, esses blocos 
// Serão chamados de Métodos. Mas, quando eu digo funções, eu estou explicitamente falando de algo que não é parte de uma Classe.

int Multiply(int a, int b) {

    return a * b;
}

int main(void) {

    std::cout << Multiply(3, 2) << std::endl;

    return 0;
}