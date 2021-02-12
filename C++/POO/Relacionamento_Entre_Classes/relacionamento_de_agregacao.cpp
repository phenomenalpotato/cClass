#include <iostream>
#include <random>

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

    // Lutador(string nom, string nacionalidad, int idad, float altur, float pes, int vitoria, int derrota, int empate) {
    
    //     nome = nom;

    //     nacionalidade = nacionalidad;

    //     idade = idad;

    //     altura = altur;

    //     // peso = pes;

    //     setPeso(pes);

    //     vitorias = vitoria;

    //     derrotas = derrota;

    //     empates = empate;

    // }

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

        cout << getNome() << " é um peso " << getCategoria() << endl;

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

// Em Programação Orientada a Objetos, nós podemos criar algo chamado Tipo Abstrato de Dados e transformar as nossa Classes em Tipos.
// Por exemplo, na Classe Luta abaixo os atributos desafiado e desafiante eles não são do tipo caracteres, eles são Lutadores. Eles são Instâncias da Classe
// Lutador 

// O Relacioamento de Agregação ela é conhecida como um Relacionamento TEM UM. Isso é, uma Luta TEM UM ou mais Lutadores. Então, quando você criar uma Relação
// E pensar assim, A Classe B TEM UM atributo que e da Classe A. 

class Luta {

private:

    Lutador desafiado; // Isso se chama Tipo Abstrato de Dados

    Lutador desafiante;

    int rounds;

    bool aprovada;

    bool Comp(string valor1, string valor2) {

        return valor1.compare(valor2);

    }

    int randn(int min, int max) {

        random_device rd; // Obtain a random number from hardware

        mt19937 gen(rd()); // Seed the generator

        uniform_int_distribution <> distr(min, max); // Define the range

        return distr(gen); // Generate numbers

    }

public:

    Luta() {

        setAprovada(0);

        SetRounds(0);
    }

    void setDesafiado(Lutador desafiad) {

        desafiado = desafiad;
    }

    Lutador getDesafiado(void) {

        return desafiado;
    }

    void setDesafiante(Lutador desafiant) {

        desafiante = desafiant;
    }

    Lutador getDesafiante(void) {

        return desafiante;
    }

    void SetRounds(int round) {

        rounds = round;
    }

    int getRounds(void) {

        return rounds;
    }

    void setAprovada(bool aprovad) {

        aprovada = aprovad;
    }

    bool getAprovada(void) {

        return aprovada;
    }

    void marcarLuta(Lutador lu1, Lutador lu2) {

        if(Comp(lu1.getCategoria(), lu2.getCategoria()) && Comp(lu1.getNome(), lu2.getNome())) {

            setAprovada(true);

            setDesafiado(lu1);

            setDesafiante(lu2);

        }

        else {

            setAprovada(false);

            // setDesafiado(NULL);

            // setDesafiante(NULL);
        }

    }

    void lutar(void) {

        if(getAprovada() == true) {

            puts("### DESAFIADO ###");

            desafiado.apresentar();

            puts("### DESAFIANTE ###");

            desafiante.apresentar();
            
            switch (randn(0,2)) {

                case 0:

                    puts("----------============----------==========---------==========------------");

                    puts("Empatou!");

                    desafiado.empatarLuta();

                    desafiante.empatarLuta();

                    puts("----------============----------==========---------==========------------");

                break;

                case 1:

                    puts("----------============----------==========---------==========------------");

                    cout << "O Desafiado " << desafiado.getNome() << " ganhou!" << endl;

                    desafiado.ganharLuta();

                    desafiante.perderLuta();

                    puts("----------============----------==========---------==========------------");

                break;

                case 2:

                    puts("----------============----------==========---------==========------------");

                    cout << "O desafiante " << desafiante.getNome() << " ganhou!" << endl;

                    desafiado.perderLuta();

                    desafiante.ganharLuta();

                    puts("----------============----------==========---------==========------------");

                break;
            }

        }

        else {
            
            puts("Essa luta não pode acontecer!");

        }
        


    }

    void status(void) {

    cout << "Agora o desafiante " << desafiante.getNome() << " Tem: " << "\n" << desafiante.getVitorias() << " vitórias | " << "\n" << desafiante.getDerrotas() << " derrotas | " << "\n" << "e empates " << desafiante.getEmpates() << " |" << endl;

    puts("----------============----------==========---------==========------------");

    cout << "Agora o desafiante " << desafiado.getNome() << " Tem: " << "\n" << desafiado.getVitorias() << " vitórias | " << "\n" << desafiado.getDerrotas() << " derrotas | " << "\n" << "e empates " << desafiado.getEmpates() << " |" << endl;
    
    }


};  

int main(void) {

    // Lutador l1("Pretty Boy", "França", 31, 1.75f, 68.9f, 11, 2, 1);

    Lutador l1;

    l1.setNome("Pretty Boy");

    l1.setNacionalidade("França");

    l1.setIdade(31);

    l1.setAltura(1.75);

    l1.setPeso(68.9);

    // l1.setCategoria("Leve");

    l1.setVitorias(11);

    l1.setDerrotas(2);

    l1.setEmpates(1);

    // l1.status();

// -==========--------=================------------------================

    // Lutador l2("Putscript", "Brasil", 29, 1.68f, 57.8f, 14, 2, 3);

    Lutador l2;

    l2.setNome("Putscript");

    l2.setNacionalidade("Brasil");

    l2.setIdade(29);

    l2.setAltura(1.68);

    l2.setPeso(57.8);

    // l2.setCategoria("Leve");

    l2.setVitorias(14);

    l2.setDerrotas(2);

    l2.setEmpates(3);

// -==========--------=================------------------================

// -==========--------=================------------------================

    // Lutador l3("Snapshadow", "EUA", 35, 1.65f, 80.9f, 12, 2, 1);

    Lutador l3; 

    l3.setNome("Snapshadow");

    l3.setNacionalidade("EUA");

    l3.setIdade(35);

    l3.setAltura(1.65);

    l3.setPeso(80.9);

    // l3.setCategoria("Médio");

    l3.setVitorias(12);

    l3.setDerrotas(2);

    l3.setEmpates(1);

    l3.ganharLuta();

    Luta UEC1;

    UEC1.marcarLuta(l1, l3);

    UEC1.lutar();

// -==========--------=================------------------================

    UEC1.status();

    return 0;
}

/*   

    A forma abaixo é a forma de passar por referencia o endereço dos objetos l1 e l2 da Classe Lutador para o objeto UEC1 que é da Classe Luta.
    Nessa Classe Luta possui dois objetos do tipo Abstratos de Dados Lutador ( Lutador desafiado & Lutador desafiante). Dessa forma,
    o que for mudado nos objetos da Classe Luta serão diretamente alterados nos objetos da Classe Lutador que foram passados 
    como Referencia no Método marcarLuta().  
    
*/

/* 

#include <iostream>
#include <random>

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

        cout << getNome() << " é um peso " << getCategoria() << endl;

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

// Em Programação Orientada a Objetos, nós podemos criar algo chamado Tipo Abstrato de Dados e transformar as nossa Classes em Tipos.
// Por exemplo, na Classe Luta abaixo os atributos desafiado e desafiante eles não são do tipo caracteres, eles são Lutadores. Eles são Instâncias da Classe
// Lutador 

// O Relacioamento de Agregação ela é conhecida como um Relacionamento TEM UM. Isso é, uma Luta TEM UM ou mais Lutadores. Então, quando você criar uma Relação
// E pensar assim, A Classe B TEM UM atributo que e da Classe A. 

class Luta {

private:

    Lutador *desafiado; // Isso se chama Tipo Abstrato de Dados

    Lutador *desafiante;

    int rounds;

    bool aprovada;

    bool Comp(string valor1, string valor2) {

        return valor1.compare(valor2);

    }

    int randn(int min, int max) {

        random_device rd; // Obtain a random number from hardware

        mt19937 gen(rd()); // Seed the generator

        uniform_int_distribution <> distr(min, max); // Define the range

        return distr(gen); // Generate numbers

    }

public:

    Luta() {

        setAprovada(0);

        SetRounds(0);
    }

    void setDesafiado(Lutador *desafiad) {

        desafiado = desafiad;
    }

    Lutador getDesafiado(void) {

        return *desafiado;
    }

    void setDesafiante(Lutador *desafiant) {

        desafiante = desafiant;
    }

    Lutador getDesafiante(void) {

        return *desafiante;
    }

    void SetRounds(int round) {

        rounds = round;
    }

    int getRounds(void) {

        return rounds;
    }

    void setAprovada(bool aprovad) {

        aprovada = aprovad;
    }

    bool getAprovada(void) {

        return aprovada;
    }

    void marcarLuta(Lutador *lu1, Lutador *lu2) {

        if(Comp(lu1 -> getCategoria(), lu2 -> getCategoria()) && Comp(lu1 -> getNome(), lu2 -> getNome())) {

            setAprovada(true);

            setDesafiado(lu1);

            setDesafiante(lu2);

        }

        else {

            setAprovada(false);

            // setDesafiado(NULL);

            // setDesafiante(NULL);
        }

    }

    void lutar(void) {

        if(getAprovada() == true) {

            puts("### DESAFIADO ###");

            desafiado -> apresentar();

            puts("### DESAFIANTE ###");

            desafiante -> apresentar();
            
            switch (randn(0,2)) {

                case 0:

                    puts("----------============----------==========---------==========------------");

                    puts("Empatou!");

                    desafiado -> empatarLuta();

                    desafiante -> empatarLuta();

                    puts("----------============----------==========---------==========------------");

                break;

                case 1:

                    puts("----------============----------==========---------==========------------");

                    cout << "O Desafiado " << desafiado -> getNome() << " ganhou!" << endl;

                    desafiado -> ganharLuta();

                    desafiante -> perderLuta();

                    puts("----------============----------==========---------==========------------");

                break;

                case 2:

                    puts("----------============----------==========---------==========------------");

                    cout << "O desafiante " << desafiante -> getNome() << " ganhou!" << endl;

                    desafiado -> perderLuta();

                    desafiante -> ganharLuta();

                    puts("----------============----------==========---------==========------------");

                break;
            }

        }

        else {
            
            puts("Essa luta não pode acontecer!");

        }
        


    }

    void status(void) {

    cout << "Agora o desafiante " << desafiante -> getNome() << " Tem: " << "\n" << desafiante -> getVitorias() << " vitórias | " << "\n" << desafiante -> getDerrotas() << " derrotas | " << "\n" << "e empates " << desafiante -> getEmpates() << " |" << endl;

    puts("----------============----------==========---------==========------------");

    cout << "Agora o desafiante " << desafiado -> getNome() << " Tem: " << "\n" << desafiado -> getVitorias() << " vitórias | " << "\n" << desafiado -> getDerrotas() << " derrotas | " << "\n" << "e empates " << desafiado -> getEmpates() << " |" << endl;
    
    }


};  

int main(void) {

    Lutador l1("Pretty Boy", "França", 31, 1.75f, 68.9f, 11, 2, 1);

    // Lutador l1;

    // l1.setNome("Pretty Boy");

    // l1.setNacionalidade("França");

    // l1.setIdade(31);

    // l1.setAltura(1.75);

    // l1.setPeso(68.9);

    // // l1.setCategoria("Leve");

    // l1.setVitorias(11);

    // l1.setDerrotas(2);

    // l1.setEmpates(1);

    // l1.status();

// -==========--------=================------------------================

    Lutador l2("Putscript", "Brasil", 29, 1.68f, 57.8f, 14, 2, 3);

    // Lutador l2;

    // l2.setNome("Putscript");

    // l2.setNacionalidade("Brasil");

    // l2.setIdade(29);

    // l2.setAltura(1.68);

    // l2.setPeso(57.8);

    // // l2.setCategoria("Leve");

    // l2.setVitorias(14);

    // l2.setDerrotas(2);

    // l2.setEmpates(3);

// -==========--------=================------------------================

// -==========--------=================------------------================

    Lutador l3("Snapshadow", "EUA", 35, 1.65f, 80.9f, 12, 2, 1);

    // Lutador l3; 

    // l3.setNome("Snapshadow");

    // l3.setNacionalidade("EUA");

    // l3.setIdade(35);

    // l3.setAltura(1.65);

    // l3.setPeso(80.9);

    // // l3.setCategoria("Médio");

    // l3.setVitorias(12);

    // l3.setDerrotas(2);

    // l3.setEmpates(1);

    // l3.ganharLuta();

    Luta UEC1;

    UEC1.marcarLuta(&l1, &l3);

    UEC1.lutar();

// -==========--------=================------------------================

    // UEC1.status();

    l1.status();

    l3.status();

    return 0;
}

*/