#include <iostream>

using namespace std;

// Herança é permitir basear uma classe na definição de uma outra classe previamente existente. Basicamente, é você já ter uma Classe já criada e eu preciso criar
// Uma Classe nova, eu não vou precisar criar ela do 0. Se essa Classe nova puder ser baseada em uma Classe anterior, é melhor ainda. Eu não preciso recriar 
// Essa nova Classe. Eu faço ela baseada na primeira.

// A Herança será aplicada tanto para Caracteristicas quanto para os Comportamentos.

class Pessoa {

private:
    
    string nome;

    int idade;

    char sexo;

public:

    Pessoa() {

        setIdade(0);
    }

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

    int fazerAniversario(void) {

        setIdade(getIdade() + 1);

    }

    void status(void) {

        puts("##### PESSOA #####");

        cout << "Nome da Pessoa: " << getNome() << endl; 
        
        cout << getNome() << " tem " << getIdade() << " anos" << endl;

        printf("E é do sexo: %c\n", getSexo());

    }

};

class Aluno : public Pessoa {

private:

    bool matr;

    string curso;

public:

    Aluno(bool mat, string curs) {

        setMatr(mat);

        setCurso(curs);

    }

    void setMatr(bool mat) {

        matr = mat;
    }

    bool getMatr(void) {

        return matr;
    }

    void setCurso(string curs) {

        curso = curs;
    }

    string getCurso(void) {

        return curso;
    }

    void cancelarMatr(void) {

        setMatr(false);
    }

    void status(void) {

        puts("##### ALUNO #####");
 
        cout << "Nome do Aluno: " << getNome() << endl;

        cout << getNome() << " tem " << getIdade() << " anos" << endl;

        printf("É do sexo: %c\n", getSexo());

        printf("Está com a Matricula ativa? %d\n", getMatr());

        cout << "E está fazendo o curso de " << getCurso() << endl;
    }


};

class Professor : public Pessoa {

private:

    string especialidade;

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

    void receberAumento(float aumento) {

        setSalario(getSalario() + aumento);
    }

    void status(void) {

        puts("##### PROFESSOR #####");

        cout << "Nome do Professor: " << getNome() << endl;

        cout << getNome() << " tem " << getIdade() << " anos" << endl;

        printf("E é do sexo: %c\n", getSexo());

        cout << "Esse professor da Aula de " << getEspecialidade() << endl;

        printf("E recebe de salário: %.2f\n", getSalario());

    }

};

class Funcionario : public Pessoa {

private:

    string setor;

    bool trabalhando;

public:

    void setSetor(string seto) {

        setor = seto;
    }

    string getSetor(void) {

        return setor;
    }

    void setTrabalhando(bool trabalhand) {

        trabalhando = trabalhand;
    }

    bool getTrabalhando(void) {

        return trabalhando;
    }

    void mudarTrabalho(string trabalho) {

        setSetor(trabalho);

    }

    void status(void) {

        puts("##### FUNCIONARIO #####");

        cout << "Nome do Funcionario: " << getNome() << endl;

        cout << getNome() << " tem " << getIdade() << " anos" << endl;

        printf("E é do sexo: %c\n", getSexo());

        cout << "E trabalha no setor de " << getSetor() << endl;

        printf("Ainda está trabalhando? %d\n", getTrabalhando()); 

    }

};

int main(void) {


    Pessoa p1;

    p1.setNome("Pedro Luiz");

    p1.setIdade(44);

    p1.setSexo('M');

    p1.fazerAniversario();

    p1.status();

// -------------=======================------------------==============

    Aluno a1(true, "Informática");

    a1.setNome("Maria Patricia");

    a1.setIdade(19);

    a1.setMatr(true);

    a1.setSexo('F');

    a1.cancelarMatr();

    a1.status();

// -------------=======================------------------==============

    Professor prof1;

    prof1.setNome("Cláudio da Silva");

    prof1.setIdade(32);

    prof1.setSexo('M');
    
    prof1.setSalario(2500.75f);

    prof1.setEspecialidade("Tecnologia");

    prof1.receberAumento(500);

    prof1.status();

// -------------=======================------------------==============

    Funcionario func1;

    func1.setNome("Fabiana Marina");

    func1.setIdade(22);

    func1.setSexo('F');

    func1.setSetor("Estoque");

    func1.setTrabalhando(false);

    func1.mudarTrabalho("Coordenação");

    func1.status();

    return 0;
}