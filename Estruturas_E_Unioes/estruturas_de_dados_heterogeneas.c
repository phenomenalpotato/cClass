// As estruturas de dados (Homogêneas e Heterogêneas) possibilitam a construção de estruturas mais complexas que os tipos de dados primitivos (int, char, ...);
// Diferentemente dos tipos homogêneos, essas estruturas permitem a manipulação de um conjunto de informações de tipos de dados primitivos diferentes, mas que
// possuem um relacionamento lógico entre si;

// Exemplo de um registro de Funcionário:
                                                // -----------------------------------------------
                                                // ||        Registro de Funcionário:           ||
                                                // ||                                           ||
                                                // || Matricula - Tipo inteiro                  ||
                                                // || Nome - Tipo cadeia de caracteres          ||
                                                // || Data Nascimento - Tipo Data               ||
                                                // || Cargo - Tipo cadeia de caracteres         ||
                                                // || Salario - Tipo Real                       ||
                                                // -----------------------------------------------

// O registro acima possui um conjunto de informações relacionadas a um funcionário, logo poderiam ser vistas agrupadas em um único nome (como as Matrizes).
// A linguagem C possui uma estrutura denominada struct que permite agrupar um conjunto de informações de tipos diferentes sob um mesmo nome.

// Declaração: 
    // Struct {

        // tipo_de_dado1 <nome das variaveis1>;
        // tipo_de_dado2 <nome das variaveis2>;
        // tipo_de_dadoN <nome das variaveisN>;
    // } Nome_da_variavel_struct;

    // Exemplo: 
        // struct{
            // int matricula;
            // char nome[30];
            // char dataNasc[9];
            // char cargo[20];
            // float salario;

        // } func;

// A variável func é do tipo registro (struct) e, para individualizar cada dado (nesse caso é denominado de campo), basta colocar o nome da variável seguido de 
// um ponto seguido com o nome do campo. Ex: func.matricula
