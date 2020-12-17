#include <iostream>

using namespace std;

class Lutador {

private:

    string nome;

    string nacionalidade;

    int idade;

    float altura;

    float peso;

    string categoria;

    int vitorias;

    int derrotas;

    int empates;

    void setCategoria(void) {

        if (getPeso() <= 52.2) {

            categoria = "Invalido";

        }

        else if (getPeso() <= 70.3) {

            categoria = "Leve";

        }

        else if (getPeso() <= 83.9) {

            categoria = "Médio";
            
        }

        else if (getPeso() <= 120.2) {

            categoria = "Pesado";

        }

        else {

            categoria = "Invalido";

        }

    }

public:

    Lutador(string nom, string nacionalidad, int idad, float altur, float pes, int vitoria, int derrota, int empate) {
    
        nome = nom;

        nacionalidade = nacionalidad;

        idade = idad;

        altura = altur;

        // peso = pes;

        setPeso(pes);

        vitorias = vitoria;

        derrotas = derrota;

        empates = empate;

    }

    void setNome(string nom) {

        nome = nom;
    }

    string getNome(void) {

        return nome;
    }

    void setNacionalidade(string nacionali) {

        nacionalidade = nacionali;
    }

    string getNacionalidade(void) {

        return nacionalidade;
    }

    void setIdade(int idad) {

        idade = idad;
    }

    int getIdade(void) {

        return idade;
    }

    void setAltura(float altur) {

        altura = altur;
    }

    float getAltura(void) {

        return altura;
    }

    void setPeso(float pes) {

        peso = pes;

        setCategoria();

    }

    float getPeso(void) {

        return peso;
    }

    string getCategoria(void) {

        return categoria;
    }

    void setVitorias(int vitoria) {

        vitorias = vitoria;
    }

    int getVitorias(void) {

        return vitorias;
    }

    void setDerrotas(int derrota) {

        derrotas = derrota;
    }

    int getDerrotas(void) {

        return derrotas;
    }

    void setEmpates(int empate) {

        empates = empate;
    }

    int getEmpates(void) {

        return empates;
    }

    void apresentar(void) {

        puts("-------=============--------------==============");

        cout << "CHEGOU A HORA! Apresentamos o Lutador: " << getNome() << endl;

        cout << "Diretamente de: " << getNacionalidade() << endl;
    
        printf("Com: %d anos\n", getIdade());

        printf("Altura do Lutador: %.2f\n", getAltura());

        printf("Pesando: %.2f\n", getPeso());

        printf("Com: %d Vitórias\n", getVitorias());

        printf("Com: %d Derrotas\n", getDerrotas());

        printf("Com: %d Empates\n", getEmpates());

    }

    void status(void) {

        puts("-------=============--------------==============");

        cout << getNome() << "é um peso " << getCategoria() << endl;

        // cout << "Nacionalidade do Lutador: " << getNacionalidade() << endl;

        // printf("Idade do Lutador: %d\n", getIdade());

        // printf("Altura do Lutador: %.2f\n", getAltura());

        // printf("Peso do Lutador: %.2f\n", getPeso());

        printf("Número de Vitórias do Lutador: %d\n", getVitorias());

        printf("Números de Derrotas do Lutador: %d\n", getDerrotas());

        printf("Números de Empates do Lutador: %d\n", getEmpates());

    }

    void ganharLuta(void) {

        setVitorias(getVitorias() + 1);

    }

    void perderLuta(void) {

        setDerrotas(getDerrotas() + 1);

    }

    void empatarLuta(void) {

        setEmpates(getEmpates() + 1);

    }


};

int main(void) {

    Lutador l1("Pretty Boy", "França", 31, 1.75f, 68.9f, 11, 2, 1);

    // l1.setNome("Pretty Boy");

    // l1.setNacionalidade("França");

    // l1.setIdade(31);

    // l1.setAltura(1.75);

    // l1.setPeso(68.9);

    // l1.setCategoria("Leve");

    // l1.setVitorias(11);

    // l1.setDerrotas(2);

    // l1.setEmpates(1);

    // l1.status();

    l1.apresentar();

// -==========--------=================------------------================

    Lutador l2("Putscript", "Brasil", 29, 1.68f, 57.8f, 14, 2, 3);

    // l2.setNome("Putscript");

    // l2.setNacionalidade("Brasil");

    // l2.setIdade(29);

    // l2.setAltura(1.68);

    // l2.setPeso(57.8);

    // l2.setCategoria("Leve");

    // l2.setVitorias(14);

    // l2.setDerrotas(2);

    // l2.setEmpates(3);

    l2.status();

// -==========--------=================------------------================

    Lutador l3("Snapshadow", "EUA", 35, 1.65f, 80.9f, 12, 2, 1);

    // l3.setNome("Snapshadow");

    // l3.setNacionalidade("EUA");

    // l3.setIdade(35);

    // l3.setAltura(1.65);

    // l3.setPeso(80.9);

    // l3.setCategoria("Médio");

    // l3.setVitorias(12);

    // l3.setDerrotas(2);

    // l3.setEmpates(1);

    l3.ganharLuta();

    l3.apresentar();

// -==========--------=================------------------================

    Lutador l4("Dead Code", "Austrália", 28, 1.93f, 81.6f, 13, 0, 2);

    // l4.setNome("Dead Code");

    // l4.setNacionalidade("Austrália");

    // l4.setIdade(28);

    // l4.setAltura(1.93);

    // l4.setPeso(81.6);

    // l4.setCategoria("Médio");

    // l4.setVitorias(13);

    // l4.setDerrotas(0);

    // l4.perderLuta();

    // l4.setEmpates(2);

    l4.perderLuta();

    l4.status();

// -==========--------=================------------------================

    Lutador l5("Ufocobol", "Brasil", 37, 1.70f, 119.3f, 5, 4, 3);

    // l5.setNome("Ufocobol");

    // l5.setNacionalidade("Brasil");

    // l5.setIdade(37);

    // l5.setAltura(1.70);

    // l5.setPeso(119.3);

    // l5.setCategoria("Pesado");

    // l5.setVitorias(5);

    // l5.setDerrotas(4);

    // l5.setEmpates(3);

    l5.status();

// -==========--------=================------------------================

    Lutador l6("Nerdard", "EUA", 30, 1.81f, 105.7f, 12, 2, 4);

    // l6.setNome("Nerdard");

    // l6.setNacionalidade("EUA");

    // l6.setIdade(30);

    // l6.setAltura(1.81);

    // l6.setPeso(105.7);

    // l6.setCategoria("Pesado");

    // l6.setVitorias(12);

    // l6.setDerrotas(2);

    // l6.setEmpates(4);

    l6.empatarLuta();

    l6.status();

    return 0;
}