#include <iostream>

using namespace std;

class Animal {

protected:

    float peso;

    int idade;

    int membros;

public:

    void setPeso(float pes) {

        peso = pes;
    }

    float getPeso(void) {

        return peso;
    }

    void setIdade(int idad) {

        idade = idad;
    }

    int getIdade(void) {

        return idade;
    }

    void setMembros(int membro) {

        membros = membro;
    }

    int getMembros(void) {

        return membros;
    }

    virtual void emitirSom(void) = 0;

};

class Mamifero : public Animal {

protected:

    string corPelo;

public:

    void setCorPelo(string corPel) {

        corPelo = corPel;
    }

    string getCorPelo(void) {

        return corPelo;
    }

    void emitirSom(void) override {

        puts("Som de Mamifero");
    }

};

class Lobo : public Mamifero {

public:

    void emitirSom(void) override {

        puts("Auuuuuuuuuuuuu!");
    }

};

class Cachorro : public Lobo {

private:

    bool Comp(string valor1, string valor2) {

        return valor1.compare(valor2);

    }

public:

    Cachorro() {

        setPeso(0);

        setIdade(0);

        setMembros(0);
    }

    void emitirSom(void) override{

        puts("Au! Au! Au!");
    }

    void reagir(string frase, int te) {

        if(Comp("toma comida", frase) == 0 || Comp("Ola", frase) == 0) {

            puts("Abanar e Latir");

        }

        else {

            puts("Rosnar");
        }

    }

    void reagir(float hora) {

        if(hora < 12) {

            puts("Abanar");

        }

        else if(hora >= 18) {

            puts("Ignorar");

        }

        else {

            puts("Abanar e Latir");
        }

    }

    void reagir(bool dono) {

        if(dono == true) {

            puts("Abanar");
        }

        else {

            puts("Rosnar e Latir");
        }
        
    }

    void reagir(int idade, float peso) {

        if(idade < 5) {

            if(peso < 10) {

                puts("Abanar");

            }

            else {

                puts("Latir");
            }

        }

        else {
            
            if(peso < 10) {

                puts("Rosnar");

            }

            else {

                puts("Ignorar");
            }
        }
        

    }

};

int main(void) {

// =========-------------------==================-------------------==========

    puts("#### MAMIFERO ####");

    Mamifero m1;

    m1.emitirSom();

// =========-------------------==================-------------------==========

    puts("#### LOBO ####");

    Lobo l1;

    l1.emitirSom();

// =========-------------------==================-------------------==========

    puts("#### CACHORRO ####");

    Cachorro c1;

    c1.emitirSom();

    c1.reagir("Ola", 0); // Certo

    c1.reagir("vai apanhar", 0); // Certo

    c1.reagir(11.0f); // Certo

    c1.reagir(16.00f); // Certo

    c1.reagir(true); // Certo

    c1.reagir(false); // Certo

    c1.reagir(2, 12.5f); // Certo 

    c1.reagir(17, 4.5f); // Certo


    return 0;
}