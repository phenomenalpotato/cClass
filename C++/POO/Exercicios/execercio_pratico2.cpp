#include <iostream>

using namespace std;

class AcoesVideo { // É uma Interface

public:

    virtual void play(void) = 0;

    virtual void pause(void) = 0;

    virtual void like(void) = 0;

};

class Video : public AcoesVideo {

private:

    string titulo;

    int curtidas;

    bool reproduzindo;

    int avaliacao;

    int views;


public:

    Video() {

        setAvaliacao(1);

        setViews(0);

        setCurtidas(0);

        setReproduzindo(false);
    }

    void setTitulo(string titul) {

        titulo = titul;
    }

    string getTitulo(void) {

        return titulo;
    }

    void setAvaliacao(int avaliaca) {
      
        avaliacao = 1;

        int nova = 0;

        nova = (avaliacao + avaliaca) / getViews();

        avaliacao = nova;

    }

    int getAvaliacao(void) {

        return avaliacao;        
    }

    void setViews(int view) {

        views = view;
    }

    int getViews(void) {

        return views;
    }

    void setCurtidas(int curtida) {

        curtidas = curtida;
    }

    int getCurtidas(void) {

        return curtidas;
    }

    void setReproduzindo(bool reproduzind) {

        reproduzindo = reproduzind;
    }

    bool getReproduzindo(void) {

        return reproduzindo;
    }

    void play(void) {

        setViews(getViews() + 1);

        if(getReproduzindo() == false) {

            setReproduzindo(true);

            puts("Video Reproduzindo");

        }

        else {

            puts("Video já está reproduzindo");
        }
    }

    void pause(void) {

        if(getReproduzindo() == true) {

            setReproduzindo(false);

            puts("Video Pausado");

        }

        else {

            puts("Video já está pausado");
        }
    }

    void like(void) {

        setCurtidas(getCurtidas() + 1);

        puts("Video Curtido");
    }

    void status(void) {

        puts("###### VIDEO ######");

        cout << "Titulo do Video: " << getTitulo() << endl;

        cout << getTitulo() << " tem " << getViews() << " views" << endl;

        printf("Quantas curtidas tem: %d\n", getCurtidas());

        printf("E tem %d de avaliações\n", getAvaliacao());

        cout << getTitulo() << " tem " << getViews() << " views" << endl;

    }

};

class Pessoa {

protected:

    string nome;

    int idade;

    char sexo;

    int experiencia;

    virtual void ganharExp(void) = 0;

    // void ganharExp(void) {

    //     setExperiencia(getExperiencia() + 1);

    //     puts("Ganhou XP!");

    // }

public:

    Pessoa() {

        setIdade(0);

        setExperiencia(0);
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

    void setExperiencia(int experienci) {

        experiencia = experienci;
    }

    int getExperiencia(void) {

        return experiencia;
    }

    // void status(void) {

    //     puts("#### PESSOA ####");

    //     cout << "Nome da Pessoa: " << getNome() << endl;

    //     cout << getNome() << " tem " << getIdade() << " anos" << endl;

    //     printf("E é do sexo: %c\n", getSexo());

    //     printf("E tem %d de Experiencia\n", getExperiencia());
    // }

};

class Gafanhoto : public Pessoa {

private:

    string login;

    int totalAssistindo;

public:

    Gafanhoto() {

        setTotalAssistindo(0);
    }

    void setLogin(string logi) {

        login = logi;
    }

    string getLogin(void) {

        return login;
    }

    void setTotalAssistindo(int totalAssistind) {

        totalAssistindo = totalAssistind;
    }

    int getTotalAssistindo(void) {

        return totalAssistindo;
    }

    void viuMaisUm(void) {

        puts("viu mais um video!");

    }

    void ganharExp(void) override {

        setExperiencia(getExperiencia() + 1);

        puts("Ganhou XP!");

    }

    void status(void) {

        puts("###### GAFANHOTO ######");

        cout << "Nome do Gafanhoto: " << getNome() << endl;

        cout << getNome() << " tem " << getIdade() << " anos" << endl;

        printf("E é do sexo: %c\n", getSexo());

        cout << "Login do " << getNome() << " é " << getLogin() << endl;

        printf("E tem %d de Experiencia\n", getExperiencia());

        printf("Total assistido pelo o Gafanhoto: %d\n", getTotalAssistindo());

    }

};

class Visualizacao {

private:

    Gafanhoto *espectador;

    Video *filme;

public:

    void setEspectador(Gafanhoto *espectado) {

        espectador = espectado;
    }

    Gafanhoto getEspectador(void) {

        return *espectador;
    }

    void setFilme(Video *film) {

        filme = film;        
    }

    Video getFilme(void) {

        return *filme;
    }

    string getNomeFilme(void) {

        return filme -> getTitulo();
    }

    string getNomeGafanhoto(void) {

        return espectador -> getNome();
    }

    int getTotalAssistido(void) {

        return espectador -> getTotalAssistindo();
    }

    int getTotViews(void) {

        return filme -> getViews();
    }

    int getAvalicao(void) {

        return filme -> getAvaliacao();
    }

    int add(int view, int tAssistido) {

        espectador -> setTotalAssistindo(tAssistido);

        filme -> setViews(view);

    }

    void avaliar() {

        filme -> setAvaliacao(5);

        printf("É essa é a avaliação do video: %d\n", filme -> getAvaliacao());
    }

    void avaliar(int nota) {

        filme -> setAvaliacao(nota);

        printf("É essa é a avaliação do video: %d\n", filme -> getAvaliacao());
    }

    void avaliar(float porc) {

        int tot = 0;

        if(porc <= 20) {

            tot = 3;
        }

        else if(porc <= 50) {

            tot = 5;

        }

        else if(porc <= 90) {

            tot = 8;
        }

        else {

            tot = 10;
        }

        filme -> setAvaliacao(tot);

        printf("É essa é a avaliação do video: %d\n", filme -> getAvaliacao());
    
    }

};

int main(void) {

    Video v1;

    v1.setTitulo("Curso de POO | Java");

    v1.play();

    v1.pause(); 

    v1.setCurtidas(1000);

    // v1.play();

    v1.status();

// ===============------------------------========================-----------------

    Gafanhoto g1;

    g1.setNome("Julia da Nobrega");

    g1.setIdade(24);

    g1.setSexo('F');

    g1.setLogin("julia.da.nobrega@gma.co.");

    g1.ganharExp();

    g1.setTotalAssistindo(8);

    g1.status();

// ===============------------------------========================-----------------

    puts("###### VISUALIZAÇÃO ######");

    Visualizacao visu1;

    visu1.setEspectador(&g1);

    visu1.setFilme(&v1);    

    visu1.add(visu1.getTotViews() + 1, visu1.getTotalAssistido() + 1);

    cout << visu1.getNomeFilme() << " é o nome do filme que " << visu1.getNomeGafanhoto() << " está vendo agora." << endl;

    cout << visu1.getNomeGafanhoto() << " já tem um total assistido de " << g1.getTotalAssistindo() << endl;

    cout << visu1.getNomeFilme() << " tem um total de " << visu1.getTotViews() << " views" << endl;

    visu1.avaliar(87.2f);

    // cout << "E essa é o total da Avaliação para o filme: " << visu1.getAvalicao() << endl;

    // visu1.avaliar();

// ===============------------------------========================-----------------

    return 0;
}