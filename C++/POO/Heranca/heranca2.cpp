#include <iostream>

using namespace std;

// Uma Classe filha pode ser Mãe também. Por exemplo:

/*

A Classe Mãe A tem como Filha AA e essa mesma Classe AA pode ser Mãe de AAA.

    Classe Mãe      Classe Filha de A       Classe Filha de AA

        A       ->          AA          ->          AAA

AA é filha de A e AAA é Descendente de A

*/

// Classe AAA pode herdar os Atributos e Métodos de sua Classe Vó A. Da mesma maneira da Classe AA herda de A

// Quando eu tenho uma Classe que ela não é Sub-Classe de ninguem, ela é considerada a Raiz da minha Árvore Hierarquica.

// E quando tenho Sub-Classes que não tem outras Sub-Classes, ou seja, não tem filhas. Ela é chamada de Folha.

// Para POO quando você percorre a Árvore de Cima para Baixo, você diz que está fazendo uma Especialização. E quando você percorre a Árvore de Baixo para Cima
// Você está fazendo uma Generalização.

/*

Tipos de Herança:

    1 - Herança de Implementação ou Herança Pobre: Seria quando a Classe filha só terá os Métodos e Atributos que herdou de sua Classe Mãe. Essa Classe Filha
        não irá Implementar mais nunhum Método ou Atributo dentro dela mesmo. Uma Herança de Implementação é basicamente para Implementar uma Classe Abstrata.

    2 - Herança Para Diferença: Seria quando as Classes Filhas além de Herdarem os Métodos e Atributos da Classe Mãe, ela também tem implementado os seus
        próprios Métodos e Atributos.

*/

// Eu também posso Sobrescrever Métodos vindos da Minha Classe Mãe e Acenstrais.

// Uma Classe Abstrata não pode ser instanciada. Só pode servir como Progenitora.

// Método Abstrato é declarado, mas não implementado na Progenitora. Só pode ser colocado em uma Classe Abstrata ou uma Interface.

// Classe Final não pode ser herdada por outra Classe. Obrigatoriamente é uma Folha. Ela não pode ter Filhas. 

// Método Final não pode ser Sobrescrito pelas suas Sub-Classes. Obrigatoriamente herdado.

// Em C++ uma Classe é considerada Abstrata se tiver pelo menos 1 Pura Virtual Function.

// Algumas vezes você não quer permitir que uma Classe Derivada Sobrescrever uma Virtual Function da Classe Base. Em C++ existe um Identifier
// Que quando usada ela previne a Sobrescrição dessa Virtual Function na Classe Derivada. Esse Identifier é final. A keyword final também pode ser usada para
// Evitar a Herança de uma Classe. 

class Pessoa {

protected:

    string nome;

    int idade;

    char sexo;

public:

    virtual void FazerAniv() = 0;

    void setNome(string nom) {

        nome = nom;
    }

    string getNome(void) {

        return nome;
    }

    void setIdade(int idad) {

        idade = idad;
    }

    int getIdade(void) {

        return idade;
    }

    void setSexo(char sex) {

        sexo = sex;
    }

    char getSexo(void) {

        return sexo;
    } 

};

class Visitante : public Pessoa {

public:

    void FazerAniv() override {

    }

    void status(void) {

        puts("##### VISITANTE #####");

        cout << "Nome do Visitante: " << getNome() << endl;

        cout << getNome() << " tem " << getIdade() << " anos" << endl;

        printf("E é do sexo: %c\n", getSexo());
        
    }

};

class Aluno : public Pessoa {

private: 

    int matricula;

    string curso;

public:

    virtual void pagarMensalidade(void) {

        cout << "Pagando a Mensalidade do Aluno " << getNome() << endl;

    }

    void setMatriula(int matricul) {

        matricula = matricul;
    }

    int getMatricula(void) {

        return matricula;
    }

    void setCurso(string curs) {

        curso = curs;

    }

    string getCurso(void) {

        return curso;
    }

    void FazerAniv() override {

    }

    void status(void) {

        puts("##### ALUNO #####");

        cout << "Nome do Aluno: " << getNome() << endl;

        cout << getNome() << " tem " << getIdade() << " anos" << endl;

        printf("E é do sexo: %c\n", getSexo());

        printf("Numero da matricula do Aluno: %d\n", getMatricula());

        cout << "Curso que está matriculado: " << getCurso() << endl;
    }


};

class Professor : public Pessoa {

private:

    string especialidade;

    float receberAumento;

    float salario;

public:

    void setEspecialidade(string especialidad) {

        especialidade = especialidad;
    }

    string getEspecialidade(void) {

        return especialidade;
    }

    void setSalario(float salari) {

        salario = salari;
    } 

    float getSalario(void) {

        return salario;
    }

    void ReceberAumento(float aumento) {

        setSalario(getSalario() + aumento);        
    }

    void FazerAniv() override {

    }

    void status(void) {

        puts("##### PROFESSOR #####");

        cout << "Nome do Professor: " << getNome() << endl;

        cout << getNome() << " tem " << getIdade() << " anos" << endl;

        printf("E é do sexo: %c\n", getSexo());

        cout << "Especialidade dele: " << getEspecialidade() << endl;

        printf("Salario do Professor: %.2f\n", getSalario()); 
    }


};

class Bolsista : public Aluno {

private:

    int bolsa;


public:

    void RenovarBolsa(void) {

        puts("Bolsa Renovada");
    }

    void setBolsa(int bols) {

        bolsa = bols;

    }

    int getBolsa(void) {

        return bolsa;
    }

    void pagarMensalidade(void) override {

        cout << "Pagando a mensalidade do Bolsista " << getNome() << endl;
    }

    void status(void) {

        puts("##### BOLSISTA #####");

        cout << "Nome do Bolsista: " << getNome() << endl;

        cout << getNome() << " tem " << getIdade() << " anos" << endl;

        printf("E é do sexo: %c\n", getSexo());

        printf("Numero da matricula do Bolsista: %d\n", getMatricula());

        cout << "Curso que está matriculado: " << getCurso() << endl;

        printf("Valor da Bolsa R$ %d\n", getBolsa());

    }


};

class Tecnico : public Aluno{

private:

    int registrProfissional;

public:

    void setRegistroProfissional(int registro) {

        registrProfissional = registro;

    }

    int getRegistroProfissional(void) {

        return registrProfissional;
    }

    void praticar(void) {

        puts("Praticando");
    }

    void status(void) {

        puts("##### TECNICO #####");

        cout << "Nome do Tecnico: " << getNome() << endl;

        cout << getNome() << " tem " << getIdade() << " anos" << endl;

        printf("E é do sexo: %c\n", getSexo());

        printf("Numero da matricula do Tecnico: %d\n", getMatricula());

        cout << "Curso que está matriculado: " << getCurso() << endl;

        printf("Registro Profissional: %d\n", getRegistroProfissional());

    }


};

int main(void) {

    Visitante v1;

    v1.setNome("Patricia Alves");

    v1.setIdade(48);

    v1.setSexo('F');

    v1.status();

// --------------=====================-------------=====================

    Aluno a1;

    a1.setNome("Jorge dos Nascimentos");

    a1.setIdade(28);

    a1.setSexo('M');

    a1.setMatriula(12345523);

    a1.setCurso("Medicina");

    a1.status();

    a1.pagarMensalidade();

// --------------=====================-------------=====================

    Bolsista b1;

    b1.setNome("Carla das Neves");

    b1.setIdade(20);

    b1.setSexo('F');

    b1.setCurso("Tecnologia");

    b1.setMatriula(4354211);

    b1.setBolsa(500);

    b1.status();

    b1.pagarMensalidade();


// --------------=====================-------------=====================

    Professor prof1;

    prof1.setNome("Mateus Andi");

    prof1.setIdade(68);

    prof1.setSexo('M');

    prof1.setSalario(1400.67);

    prof1.setEspecialidade("Informatica");

    prof1.ReceberAumento(150);

    prof1.status();

// --------------=====================-------------=====================

    Tecnico t1;

    t1.setNome("Vagner Alks");

    t1.setIdade(27);

    t1.setSexo('M');

    t1.setMatriula(467857);

    t1.setCurso("Fotografia");

    t1.setRegistroProfissional(874013143);

    t1.status();

    t1.praticar();

    return 0;
}