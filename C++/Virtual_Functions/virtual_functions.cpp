#include <iostream>

// Virtual Functions, nos permite Sub-escrever Metodos dentro das Sub-Classes. Por exemplo, digamos que tenhamos duas Classes A e B. B é uma Sub-Classe de A.
// Se nós criarmos um Metodo na Classe A e se criarmos um Metodo nela marcarmos ela como Virtual, nós temos a opção de Sub-Escrever esse Método na Classe B
// Para fazer mais alguma coisa.

// Uma VTable, é basicamente um tabela na qual contem um mapeamento para todas as Funções Virtuais dentro da nossa Classe Base. Dessa maneira, nós conseguimos
// mapeaa-las corretamente a função Sub-Escrita em Run Time

// Virtual Functions, tem o seu custo em Run Time. Primeiro, elas precisam de memória adicional para armazenarmos a VTable. E segundo, toda a vez 
// Que chamamos uma Virtual Function, nós temos que percorrer essa VTable para determinarmos qual função mapear realmente.

class A {

public:

    virtual std::string GetName() { // Função/ Metodo que terá um retorno do tipo String. Marcando essa função como Virtual.

        return "Entity";

    }

};

class B : public A {

private:

    std::string m_name; // Variável do tipo string


public:

    B(const std::string& name) : m_name(name) {

    }

    std::string GetName(void) override { // O override não é obrigatorio ao usar uma Virtual Function. Ao usarmos ele, caso erramos o nome da função original
                                        // Nesse caso (GetName), o compilador irá nos falar que não há nenhuma função com esse nome na Classe Pai

        return m_name;
    }

};

int main(void) {

    A* e = new A(); // Pointer do Tipo Entity Class A
    std::cout << e-> GetName() << std::endl;

    B* p = new B("Teste");
    std::cout << p -> GetName() << std::endl;


    return 0;
}