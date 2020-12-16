#include <iostream>

using namespace std;

/*

    Também terá que ser feito os Métodos Especiais Getters e Setters para cada atributo dessa Classe. E um Método Construtor, que sempre que uma nova Conta for 
    criada a var status será definida como falsa, isso é, a conta está fechada ainda e a var saldo como 0.

    tipo_conta = Só recebe as informações de Conta Corrente (cc) ou Conta Poupança (cp)

    Quando eu abro a conta, eu mudo a var status para verdadeiro. Se a conta não está aberta, a var status é falsa

    Na hora que abro a conta, tenho que dizer que tipo ela é: cc ou cp

    Se o cara abre uma Conta Corrente ele já ganha R$ 50 na conta. Já se for uma Conta Poupança ele começa com R$ 150

    No caso do Método depositar(), para eu fazer um depósito na conta ela tem que estar aberta. Então a var status tem que estar verdadeira

    No caso do Método sacar(), preciso ter uma conta aberta. Então a var status tem que estar verdadeira. E também tenho que ter saldo para fazer esse saque

    No caso do Método pagarMensalidade(). no momento que chamar esse Método, essa mensalidade será cobrada diretamente da var saldo. Toda vez que o Método
    pagarMensalidade() for chamado, um cliente que tenha uma Conta Corrente pagará R$ 12 e um que tem uma Conta Poupança pagará R$ 20.

    No caso do Método fecharConta() ele não pode ter nenhum débito com o Banco ou ter dinheiro nessa conta

*/

class Conta {

protected:

    string tipo_conta;

private:

    float saldo;

    bool status; 

    string dono;

public:

    int num_conta;

    virtual void abrirConta(string tipo) {



    }

    virtual void fecharConta(void) {



    }

    virtual void depositar(float valor) {



    }

    virtual void sacar(float valor) {



    }

    virtual void pagarMensal(void) {



    }

    void setSaldoConta(float csaldo) {

        saldo = csaldo;

    }

    float getSaldoConta(void) {


        return saldo;
    } 

    void setStatusConta(bool cstatus) {

        status = cstatus;
    }

    bool getStatusConta(void) {

        return status;
    }

    void setDonoConta(string cdono) {

        dono = cdono;
    }

    string getDonoConta(void) {

        return dono;
    }

};

class Entity : public Conta {

private:

    float valor_deposito;

    float valor_sacado;

    bool Comp(string valor) {

        string comp = getTipoConta();

        return comp.compare(valor);

    }

public:

    Entity(void) {

        setStatusConta(false);

        setSaldoConta(0);

    }

    void setTipoConta(string tconta) {

        tipo_conta = tconta;

    }

    string getTipoConta(void) {

        return tipo_conta;
    }

    void setSaldoEntity(float esaldo) {

        setSaldoConta(esaldo);
        
    }


    void setStatusEntity(bool estatus) {

        setStatusConta(estatus);

    }

    void setDonoEntity(string edono) {

        setDonoConta(edono);
    }

    void setNumContaEntity(int e_num) {

        num_conta = e_num;
    }

    int getNumContaEntity(void) {

        return num_conta;
    }

    void abrirConta(string tipo) override {

        setTipoConta(tipo);

        setStatusEntity(true);

            if (Comp("cc") != 0) {

                setSaldoEntity(150);

            }
            else { 

                setSaldoEntity(50);
            }

    }

    void depositar(float valor) override{

        if(getStatusConta() == true) {

            setSaldoConta(valor + getSaldoConta());

            valor_deposito = valor;

        }

        else {

            puts("Conta não está aberta!");

        }

    }    

    void sacar(float valor) override{

        if (getStatusConta() == true && valor <= getSaldoConta()) {

            setSaldoConta(getSaldoConta() - valor);

            valor_sacado = valor;

        }

        else {

            puts("Não foi possível sacar o valor pedido, pois a conta não está aberta ou o valor requisitado é maior do que o valor disponivel na conta!");
        }
    }

    void pagarMensal(void) override{

        if (Comp("cp") == 0 && getStatusConta() == true && getSaldoConta() > 20) {

            setSaldoConta(getSaldoConta() - 20);

        }
        else if(Comp("cc") == 0 && getStatusConta() == true && getSaldoConta() > 12) {

            setSaldoConta(getSaldoConta() - 12);
        }

        else {

            puts("A conta ainda não está aberta ou não há saldo o sufuciente para pagar a mensalidade!");

        }

    }

    void fecharConta(void) override {

        if (getSaldoConta() != 0 || getStatusConta() == false) {

            puts("--------========------------===========---------========-------=======");

            puts("Você ainda nao pode fechar a sua conta, pois, ainda tem algum debito com o Banco, ou tem ainda algum dinheiro na conta ou a conta já está fechada!");

            puts("--------========------------===========---------========-------=======");

        }

        else {

            puts("--------========------------===========---------========-------=======");

            printf("A conta %d foi fechada!\n", getNumContaEntity());

            setStatusEntity(false);

            puts("--------========------------===========---------========-------=======");

        }

    }

    void status(void) {

        cout << "Tipo dessa conta: " << getTipoConta() << endl;

        printf("A conta está aberta? %d\n", getStatusConta());

        cout << "Nome do dono da Conta: " << getDonoConta() << endl;

        printf("Número da conta: %d\n", getNumContaEntity());

        printf("Foi depositado na conta: %.2f\n", valor_deposito);

        printf("Foi sacado da Conta: %.2f\n", valor_sacado);

        printf("Saldo atual da conta: %.2f\n", getSaldoConta());

    }


};

int main(void) {

    Entity pf;

    // pf.setTipoConta("cp");

    pf.abrirConta("cp");

    // pf.setSaldoEntity(501);

    pf.setDonoEntity("Fulano");

    pf.setNumContaEntity(128730790);
   
    pf.depositar(100);

    pf.sacar(50);

    pf.pagarMensal();

    // pf.sacar(88);

    // pf.fecharConta();

    // pf.sacar(175);

    // pf.pagarMensal();

    pf.status();

    pf.fecharConta();

    return 0;
}