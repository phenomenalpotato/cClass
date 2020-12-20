#include <iostream>

int main(void) {

    /*
        char = 1 byte
        short = 2 byte
        int = 4 byte
        long = Dependendo do compilador normalmente são 4 bytes
        long long = Dependendo do compilador normalmente são 8 bytes
        float = Para numeros decimais que tem 4 bytes  |    O principal ponto a se notar para definir um valor float é colocar um f ou F ao final da expressão. 
        double = Para números decimais que tem 8 bytes |    Exemplo: float var = 3.3f; ou float var = 3.3F;
        bool = True (Verdadeiro) = 1/ qualquer outro numero não sendo 0 ou False (Falso) = 0. Ocupa 1 byte
    
    */
    
    int variable = 8; // Pode ter um número de até -2 bilhões -> 2 bilhões 

    // std::cout << "Hi!!" << std::endl;

    printf("%d\n", variable);

    variable = 20;

    std::cout << variable << std::endl;

    char letra = 65; // "A"

    std::cout << letra << std::endl; // Se eu passar um char para o cout irá trata-lo como um caractere não como um número

    short num = 65;

    std::cout << num << std::endl; // Diferente do que acontece acima, ao passar um short int para cout ele irá trata-lo como um número

    float var = 5.5F;

    std::cout << var << std::endl;

    bool falso = false;

    std::cout << falso << std::endl;

    return 0;
}