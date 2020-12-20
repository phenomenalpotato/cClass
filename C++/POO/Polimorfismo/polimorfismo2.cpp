#include <iostream>

using namespace std;

class Animal {

private:

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

        return peso;
    }

    void setMembros(int membro) {

        membros = membro;
    }

    int getMembros(void) {

        return membros;
    }

    virtual void locomover(void) = 0;
    
    virtual void alimentar(void) = 0;

    virtual void emitirSom(void) = 0;

};

class Mamifero : public Animal {

private:

    string corPelo;

public:

    void setCorPelo(string corPel) {

        corPelo = corPel;
    }

    string getCorPelo(void) {

        return corPelo;
    }

    void locomover(void) override {

        puts("Correndo");
    }

    void alimentar(void) override {

        puts("Mamando");
    }

    void emitirSom(void) override {

        puts("Som de Mamifero");
    }

};

class Reptil : public Animal {

private:

    string corEscama;

public:

    void setCorEscama(string corEscam) {

        corEscama = corEscama;
    }

    string getCorEscama(void) {

        return corEscama;
    }

    void locomover(void) override {

        puts("Rastejando");
    }

    void alimentar(void) override {

        puts("Comendo vegetais");
    }

    void emitirSom(void) override {

        puts("Som de Reptil");
    }

};

class Peixe : public Animal{

private:

    string corEscama;

public:

    void setCorEscama(string corEscam) {

        corEscama = corEscam;
    }

    string getCorEscama(void) {

        return corEscama;
    }

    void locomover(void) override {

        puts("Nadando");
    }

    void alimentar(void) override {

        puts("Comendo Substancias");
    }

    void emitirSom(void) override {

        puts("Peixe não faz barulho");
    }

    void soltarBolha(void) {

        puts("Soltando bolha");
    }


};

class Ave : public Animal {

private:

    string corPena;

public:

    void setCorPena(string corPen) {

        corPena = corPen;
    }

    string getCorPena(void) {

        return corPena;
    }

    void locomover(void) override {

        puts("Voando");
    }

    void alimentar(void) override {

        puts("Comendo frutas");
    }

    void emitirSom(void) override {

        puts("Som de Ave");
    }    

};

class Canguru : public Mamifero {

public:

    void usarBolsa(void) {

        puts("Usando a bolsa");

    }

    void locomover(void) override {

        puts("Pulando");

    }

};

class Tartaruga : public Reptil {

public:

    void locomover(void) override {

        puts("Andando beeeeeem devagar");
    }

};

class GoldFish : public Peixe{



};

class Arara : public Ave{


};

int main(void) {

    puts("#### MAMIFEROS ####");
    
    Mamifero m1;

    m1.setPeso(85.3);

    m1.setIdade(2);

    m1.setMembros(4);

    m1.locomover();

    m1.alimentar();

    m1.emitirSom();

// -------------------===============================------------------------

    puts("#### REPTIL ####");

    Reptil r1;

    r1.locomover();

    r1.alimentar();

    r1.emitirSom();

// -------------------===============================------------------------

    puts("#### PEIXE ####");

    Peixe p1;

    p1.setPeso(0.35);

    p1.setIdade(1);

    p1.setMembros(0);

    p1.locomover();

    p1.alimentar();

    p1.emitirSom();

// -------------------===============================------------------------

    puts("#### AVE ####");

    Ave a1;

    a1.setPeso(0.89);

    a1.setIdade(2);

    a1.setMembros(2);

    a1.locomover();

    a1.alimentar();

    a1.emitirSom();

// -------------------===============================------------------------

    puts("#### CANGURU ####");

    Canguru c1;

    c1.setPeso(30.34);

    c1.setIdade(5);

    c1.setMembros(2);

    c1.locomover();

    c1.alimentar();

    c1.emitirSom();

// -------------------===============================------------------------

    puts("#### TARTARUGA ####");

    Tartaruga t1;

    t1.setPeso(17);

    t1.setIdade(60);

    t1.setMembros(4);

    t1.locomover();

    t1.alimentar();

    t1.emitirSom();

// -------------------===============================------------------------

    puts("#### GOLDFISH ####");

    GoldFish g1;

    g1.locomover();

    g1.alimentar();

    g1.emitirSom();

// -------------------===============================------------------------

    puts("#### ARARA ####");

    Arara ar1;

    ar1.locomover();

    ar1.alimentar();

    ar1.emitirSom();

    return 0;
}