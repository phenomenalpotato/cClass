#include <iostream>

using namespace std;

// Modificadores de Visibilidade indicam o acesso aos componentes internos de uma classe.

/* 

+ Representa a visibilidade Pública: A Classe atual e todas as outras Classes terão acesso a ela;

- Representa a Visibilidade Privada: Somente a Classe atual terá acesso;

# Representa a Visibilidade Protegida: A Classe atual e todas as suas sub-Classes terão acesso a ela;

*/

class Entity {

protected:

    int carga;

private:

    bool tampada;

    float ponta;

public:

    string modelo;

    string cor;

    Entity() {

        ponta = 0;

        carga = 0;

    }

    void Status(void) {

        cout << "Uma caneta " << cor << endl;

        printf("Ponta: %.2f\n", ponta);

        printf("Carga: %d\n", carga);

        printf("Está Tampada? %d\n", tampada);
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

class Caneta : public Entity {

public:

    void SetCarga(void) {

        carga = 90;

        // printf("Carga da Caneta: %d\n", carga);

    }

    // void SetTampa(void) {

    //     tampada = false;

    // }

};

int main(void) {

    Caneta c1;

    c1.modelo = "BIC Cristal";

    c1.cor = "Azul";

    c1.SetCarga();

    c1.Tampar();

    // c1.SetTampa();

    c1.Status();    

    // c1.Rabiscar();

    return 0;
}