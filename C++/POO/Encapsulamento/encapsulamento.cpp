#include <iostream>

// Encapsulamento é ocultar partes independentes da implementação, permitindo construir partes invisíveis ao mundo exterior. Um software Encapsulado tem o mesmo padrão, 
// ele protege o Usuário do Código e o Código do Usuário. E o Usuário no caso é o programador. 
// Um Código Encapsulado não irá deixar o Código fazer besteira. Um Código Encapsulado utiliza Interfaces, utiliza Moldes Padrão. E esses Moldes Padrão
// Eles fazem com que Código que tá lá dentro não importe, o que importa é que o resultado seja sempre o mesmo. 

// Interface é uma lista de serviços fornecidos por um componente. É o contato com o mundo Exterior, que define o que pode ser feito com um objeto dessa classe.
// Uma Interface é representada parecida com uma Classe só que ela não tem Atributos. Uma interface só tem Métodos. 
// Na minha Interface, os Métodos que eu coloco nela, eu chamo de Métodos Abstratos. Métodos Abstratos são Métodos que não vão ser desenvolvidos na Interface.
// Eu não vou escrever o Código do Método na Interface, eu só vou dizer na Interface que vai existir um Método de Abrir ou um Método de Aumentar Volume.
// Não estou dizendo o que vai acontecer para aumentar o volume, só estou esperando a reação. Por exemplo, quando você aperta o botão de aumentar o volume 
// No controle da TV, você espera que aumente o volume da TV não que aumente o Volume do DVD. A forma/ ação de apertar o botão de aumento do Som para os dois
// Dispositivos são os mesmo, a Interface é a mesma. Só que o funcionamento, a implementação é diferente. Então eu digo 
// "Existe um botão de aumentar volume ai. Agora como é a Implementação dele eu não sei.". Um método abstrato é previsto mas não é implementado.
// Todos os Métodos de uma Interface geralmente são públicos!

/*

3 vantagens de Encapsulamento:

    1 - Tornar Mudanças Invisiveis;

    2 - Facilitar a reutilização do Código;

    3 - Reduzir os Efeitos Colaterais; 

*/

// Quando você Encapsula, a primeira coisa a se fazer é tornar todos os atributos privados, até protegidos, mas nunca Públicos.

class Controlador { // Será a minha Interface para a minha Classe ControleReomoto

public:

    virtual void ligar() = 0;
    virtual void desligar() = 0;
    virtual void abrirMenu() = 0;
    virtual void fecharMenu() = 0;
    virtual void maisVolume() = 0;
    virtual void menosVolume() = 0;
    virtual void ligarMudo() = 0;
    virtual void desligarMudo() = 0;
    virtual void play() = 0;
    virtual void pause() = 0;

};

class ControleRemoto : public Controlador {

private:

    int volume;

    bool ligado;

    bool tocando;

    int getVolume(void) {

        return volume;
    }

    void setVolume(int vol) {

        volume = vol;
    }

    bool getLigado(void) {

        return ligado;
    }

    void setLigado(bool lig) {

        ligado = lig;
    }

    bool getTocando(void) {

        return tocando;
    }

    void setTocando(bool toc) {

        tocando = toc;
    }


public:

    ControleRemoto(void) {

        volume = 50;

        ligado = false;

        tocando = false;

    }

    void ligar(void) override {

        setLigado(true);
    }

    void desligar(void) override {

        setLigado(false);
    }

    void abrirMenu(void) override {

        if(getLigado()) {

            puts("------MENU-------");

            printf("Está ligado? %d\n", getLigado());

            printf("Está tocando? %d\n", getTocando());

            printf("Volume: %d ", getVolume());

            for(int i = 0; i < getVolume(); i += 10) {

                printf("|");

            }

            printf("\n");

        }

        else {

            puts("TV não está ligada!");
        }

    }

    void fecharMenu(void) override {

        puts("Fechando Menu... ");
    }

    void maisVolume(void) override {

        if(getLigado()) {

            setVolume(getVolume() + 5);
        }

        else {

            puts("Impossivel aumentar o volume com a TV desligada!");
        }

    }

    void menosVolume(void) override {

        if(getLigado()) {
            
            setVolume(getVolume() - 5);
        }

        else {

            puts("Impossivel diminnuir o volume com a TV desligada!");
        }
        

    }

    void ligarMudo(void) override {

        if(getLigado() && getVolume() > 0) {

            setVolume(0);
        }

    }

    void desligarMudo(void) override {

        if(getLigado() && getVolume() == 0) {

            setVolume(50);
        }

    }

    void play(void) override {

        if(getLigado() && getTocando() == false) {

            setTocando(true);
        }

        else {

            puts("Não consegui reproduzir! Pq já está reproduzindo!");
        }
    }

    void pause(void) override {

        if(getLigado() && getTocando()) {

            setTocando(false);
        }
            
        else {

        puts("Não consegui pausar! Pq já está pausado!");
        
        }

    }

};

int main(void) {

    ControleRemoto c;

    c.ligar();

    c.maisVolume();

    c.pause();

    c.abrirMenu();

    // c.fecharMenu();

    return 0;
}