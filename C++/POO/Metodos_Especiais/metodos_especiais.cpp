#include <iostream>

using namespace std;

// Método Acessores são Métodos que dão acesso a uma determinada coisa. Também conhecido como Getters é o método que você pega/ acessa alguma coisa. 

// Métodos Modificadores são Métodos que vão modificar uma determinada coisa. Também conhcido como Setters irão modificar coisas que estão dentro do objeto.

// Método Construtor são Métodos que já irão se executados sem que você os chame. Toda vez que instancio/ crio um novo objeto, esse método Construtor será executado.

class Caneta {

private:

    float ponta;
    
    string modelo;

    string cor;

    bool tampada;

public:

    Caneta(string mod, string co, float pon) { // Este é o Método Construtor. Tem que ter o mesmo nome da Classe.

        Tampar();

        setModelo(mod);

        setCor(co);

        setPonta(pon);

    }

    string getModelo(void) {

        return modelo;
    }

    void setModelo(string mod) {

        modelo = mod;

    }

    float getPonta(void) {

        return ponta;

    }

    void setPonta(float pon) {

        ponta = pon;

    }

    bool getTampada(void) {

        return tampada;
    }

    string getCor(void) {

        return cor;
    }

    void setCor(string co) {

        cor = co;
    }

    void Status(void) {

        puts("Sobre a Caneta: ");

        // cout << "Modelo: " << modelo << endl;

        cout << "Modelo: " << getModelo() << endl;

        // printf("Ponta: %.2f\n", ponta); 

        printf("Ponta: %.2f\n", getPonta());

        printf("A Caneta está tampada? %d\n", getTampada());

        cout << "Essa é a cor da Caneta: " << getCor() << endl;

    }

    void Tampar(void) {

        tampada = true;

    }

    void Destampar(void) {

        tampada = false;
    }

};

int main(void) {

    Caneta c1("BIC", "Vermelha", 0.5f);

    // c1.setModelo("BIC");

    // c1.setPonta(0.5f);

    Caneta c2("NIC", "Amarela", 0.3f);

    c1.Status();

    c2.Status();

    return 0;
}