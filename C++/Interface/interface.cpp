#include <iostream>

// Interface é basicamente uma Classe que somente consiste em de Metodos não implementados e age como um Template. E desde de que essa Classe Interface 
// Realmente não contem implementações de metodos, não é possível para nós instanciar esse Classe.

class A {

public:

    virtual std::string GetName() = 0; // Pure Virtual Function

};

class B : public A {

private:

    std::string m_name; 


public:

    B(const std::string& name): m_name(name)   {


    }

    std::string GetName(void) override { // Você só pode instanciar essa Classe filho se tiver a Vitual Function Implementada

        return m_name;
    }

};

int main(void) {

    A* e = new B("Oie"); 
    std::cout << e-> GetName() << std::endl;

    B* p = new B("Teste");
    std::cout << p -> GetName() << std::endl;


    return 0;
}