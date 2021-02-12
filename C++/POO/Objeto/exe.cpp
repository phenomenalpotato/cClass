#include <iostream>

using namespace std;

class Caneta{

public:

    string modelo;

    string cor;

    float ponta;

    int carga;

    bool tampada;

    Caneta() {

        ponta = 0;

        carga = 0;

    }

    void Status(void) { // Metodo para mostrar o Estado do Objeto

        cout << "Uma caneta " << cor << endl;

        printf("Ponta: %.2f\n", ponta);

        printf("Carga: %d\n", carga);

        printf("Está tampada? %d\n", tampada);

    }

    void Rabiscar(void) {

        if(tampada == true) {

            puts("ERRO! Não posso rabiscar!");

        }

        else {

            puts("Estou rabiscando!");
        }

    }

    void Tampar(void) {

        tampada = true;

    }

    void Destampar(void) {

        tampada = false;

    }
    
};

int main(void) {

    Caneta c1;

    c1.cor = "Azul";

    c1.ponta = 0.5f;

    // c1.tampada = false;

    // c1.Tampar();

    c1.Tampar();

    c1.Status();

    c1.Rabiscar();

    Caneta c2;

    c2.modelo = "BIC";

    c2.cor = "Vermelha";
    
    c2.Destampar();

    c2.Status();

    c2.Rabiscar();

    return 0;
}