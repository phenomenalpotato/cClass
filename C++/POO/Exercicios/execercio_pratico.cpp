#include <iostream>

using namespace std;

class Pessoa {

private:

    string nome;

    int idade;

    char sexo;

public:

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

        return idade;


    }

};

class Publicacao {

public:

    virtual void abrir(void) = 0;

    virtual void fechar(void) = 0;

    virtual void folhear(int pagAnt, int proxPag) = 0;

    virtual void avancarPag(int proxPag) = 0;

    virtual void voltarPag(int pagAnte) = 0;

};

class Livro : public Publicacao {

private:

    string titulo;

    string autor;

    int totPaginas;

    int pagAtual;

    bool aberto;

    Pessoa leitor;

public:

    Livro() {

        totPaginas = 0;

        pagAtual = 0;

        aberto = 0;
    }

    void setTitulo(string titul) {

        titulo = titul;
    }

    string getTitulo(void) {

        return titulo;
    }

    void setAutor(string aut) {

        autor = aut;
    }

    string getAutor(void) {

        return autor;
    }

    void setPaginas(int tpag) {

        totPaginas = tpag;
    }

    int getPaginas(void) {

        return totPaginas;
    }

    void setPagAtual(int apag) {

        if((getPagAtual() + apag) > getPaginas() || apag < 0) {

            puts("O livro não tem mais Páginas!");

            // printf("PAG: %d E PAG ATUAL: %d\n", getPaginas(), getPagAtual());

        }

        else {

            pagAtual = apag;
            

        }


    }

    int getPagAtual(void) {

        return pagAtual;
    }

    void setAberto(bool abert) {

        aberto = abert;
    }

    bool getAberto(void) {

        return aberto;
    }

    void setLeitor(Pessoa leito) {

        leitor = leito;
    }

    Pessoa getLeitor(void) {

        return leitor;
    }

    void detalhes(void) {

        puts("### CADASTRO ###");

        cout << "Autor do Livro: " << getAutor() << endl;

        cout << "Titulo do Livro: " << getTitulo() << endl;

        printf("Quantidade de Páginas do Livro: %d\n", getPaginas());

        printf("O livro está sendo lido? %d\n", getAberto());

        cout << "O nome da pessoa que está com o livro: " << leitor.getNome() << endl;

        cout << "Essa pessoa tem " << leitor.getIdade() << " anos" << endl;

        printf("E é do Sexo: %c\n", leitor.getSexo());    

        puts("---------=============-----------================");    

    }

    void abrir(void) override {

        setAberto(true);

        puts("Livro Aberto");

    }

    void fechar(void) override {

        setAberto(false);

        puts("Livro Fechado");


    }

    void avancarPag(int proxPag) override {

        if(getAberto()) {

            setPagAtual(getPagAtual() + proxPag);

            // printf("Página Atual: %d\n", getPagAtual());

        }

        else {

            puts("Livro Fechado");
        }


    }

    void voltarPag(int pagAnte) override {

        if(getAberto()) {

            setPagAtual(getPagAtual() - pagAnte);

            // printf("Página Atual: %d\n", getPagAtual());

        }

        else {

            puts("Livro fechado");
        }


    }

    void folhear(int pagAnt, int proxPag) override {

        if(getAberto()) {

            voltarPag(pagAnt);

            avancarPag(proxPag);

        }

        else {

            puts("Livro Fechado");
        }


    }

    void status(void) {

        printf("Página Atual que o livro está: %d\n", getPagAtual());

        puts("---------=============-----------================");

    }

};

int main(void) {

    Pessoa p1;

    p1.setNome("Carlos Cesar");

    p1.setIdade(34);

    p1.setSexo('M');

// -----------===============--------------===============

    Livro l1;

    l1.setLeitor(p1);

    l1.setAutor("Stephen King");

    l1.setTitulo("À Espera de um Milagre (1996)");

    l1.setAberto(true);

    l1.setPaginas(443);

    l1.detalhes();

    l1.avancarPag(5);

    l1.voltarPag(1);

    l1.status();

    l1.folhear(2, 5);

    l1.status();

    // l1.setPagAtual(500);

    // l1.status();

// -----------===============--------------===============

    Pessoa p2;

    p2.setNome("Caterine da Silva");

    p2.setIdade(25);

    p2.setSexo('F');

// -----------===============--------------===============

    Pessoa p3;

    p3.setNome("Job Carl");

    p3.setIdade(19);

    p3.setSexo('M');


// -----------===============--------------===============
 
    Livro l2;

    l2.setLeitor(p3);

    l2.setAutor("Masashi Kishimoto");

    l2.setTitulo("Naruto vol.10");

    l2.setAberto(true);

    l2.setPaginas(158);

    // p3.fazerAniversario();

    // printf("Essa pessoa está fazendo aniversário!");

    l2.detalhes();

    l2.setPagAtual(25);

    l2.status();

    return 0;
}