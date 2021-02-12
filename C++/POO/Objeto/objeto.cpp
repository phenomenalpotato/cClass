/*

    Um objeto é uma coisa material ou abstrata que pode ser percebida pelos sentidos e descrita por meio das suas caracteristicas, comportamentos e estado atual.

    Sempre para um Objeto, você tem que responder 3 perguntas:

        - Coisas que eu tenho? = Atributos
        - Coisas que eu faço? = Métodos
        - Como eu estou agora? = Estado

        Todo o objeto tem:

            - Atributos;
            - Métodos;
            - Estado;

        Todo o Objeto tem que vir de uma Classe!

        Uma Classe seria igual a um Protótipo que o Objeto vai virar.

        Exemplo de uma Classe:

        Atributos:

            Literal Modelo;
            Literal Cor;
            Real Ponta;
            Inteiro Carga;
            Loigico Tampada;

        Métodos:

            Escrever();
            Rabiscar();
            Pintar();
            Tampar();
            Destampar();

        Exemplo de um Objeto:

        Atributos:

            Modelo BIC Cristal;
            Cor Azul;
            Ponta 0.5;
            Carga 90;
            Tampada falso;

        Método:

            Escrever();
            Rabiscar();
            Pintar();
            Tampar();
            Destampar();
        
        Estado: <- É qualquer caracteristica que você possa identificar através do seus atributos

            Destampada;
            Azul;
            90% de carga;

Quando tenho uma Classe e quero transformar ela em um objeto, isso tem um nome: Instanciamento/ Instanciar. Instanciar, é quando eu pego uma Classe e consigo 
gerar um Objeto apartir dela. Eu não transformo uma Classe em Objeto. Eu gero um Objeto apartir de uma Classe.

    Classe objeto;

    caneta c1; // Instanciando um Objeto chamado c1

    c1.Cor = "Azul"; // Atributo Cor do Objeto c1 recebe Azul

    c1.Rabiscar();

    caneta c2; // Instanciando um novo Objeto chamado c2

    c2.Cor = "Vermelho"; // Isso não irá mexer com o Atributo Cor de c1.

    c2.Tampar();

Uma Classe Define os Atributos e Métodos comuns que serão compartilhados por um Objeto.

Objeto é a Istância de uma Classe. Quando eu Instancio uma Classe, eu crio um Objeto.

*/

#include <iostream>

using namespace std;

class Trabalhar {

private:

    float c_horario;

    float t_horario;

public:

    string notebook;

    bool ferias; // True or False

    void Comecar_Trab(float e_hora) {

        c_horario = e_hora;

        printf("%.2f\n", c_horario);

    }

    void Terminar_Trab(float s_hora) {

        t_horario = s_hora;

        printf("%.2f\n", t_horario);
    }

};

class Almocar {

private:

    float salario;

public:

    string restaurante;

    float horario;

    bool encomenda;

    bool sozinho;

    void Sair(float e_hora) {

        printf("%.2f\n", e_hora);

    }

    void Voltar(float v_hora) {

        printf("%.2f\n", v_hora);

    }

    void PagarConta(float conta) {

        salario = 3000;

        salario -= conta;

        printf("%.2f\n", salario);

    }

};

class Mesa {

public:

    string material;

    int gavetas;

    float comprimento;

    float largura;

    void AbrirGaveta(void) {

        printf("Gaveta Aberta!\n");

    }

    void FecharGaveta(void) {

        printf("Fechar gaveta!\n");

    }

};

class Calaculadora {

public:

    int botao;

    string nome_marca;

    bool carregada; 

    void Ligar(void) {

        printf("Calculadora Ligada!\n");

    }

    float CalcularAdicao(float a, float b) {

        return a + b;

    }

    float CalcularSubtracao(float c, float d) {

        return c - d;

    }

};

int main(void) {

    Trabalhar ms; // Instanciando um Objeto

    ms.Comecar_Trab(8.30);

    ms.Terminar_Trab(17.30);

    ms.ferias = false;

    // ms.c_horario;

    Almocar mc;

    mc.encomenda = false;

    mc.PagarConta(45);

    mc.restaurante = "MC Donalds";

    cout << mc.restaurante << endl;

    mc.Voltar(1.30);

    Mesa m_quarto;

    m_quarto.gavetas = 3;

    m_quarto.AbrirGaveta();

    m_quarto.FecharGaveta();

    Calaculadora pessoal;

    pessoal.Ligar();

    cout << pessoal.CalcularAdicao(5, 10) << endl;

    cout << pessoal.CalcularSubtracao(10, 5) << endl;

    return 0;
}