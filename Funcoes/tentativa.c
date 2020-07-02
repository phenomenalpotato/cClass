#include <stdio.h>

 void linhaPontilhada(void) {


     puts("----------------------------------------------------------"); 
 }

int main(void) {

    // int ab;

   linhaPontilhada();

   void funcaoTeste(void); // Declarando uma função 

   funcaoTeste(); // Chamando a função funcaoTeste()

   float calculo(float x, float y, int z); // Declarando uma função 

   calculo(10.0, 20.0, 15); // Chamando uma função e passando os parametros para ela. Nesse caso, números float

   linhaPontilhada();

    return 0;
}

void funcaoTeste(void) {

    puts("Testando a função funcaoTeste(). Fazendo ela printar uma menssagem!!");

}

/* void ponteiros(int r) { // Ao invés de declarar a função, você pode colocar ela antes/ no começo

    int *ponte;

    ponte = &r;

    int vponte = *ponte;

    printf("%p %d\n", ponte, vponte);


} */

float calculo(float x, float y, int z) {

    float area = x * y + z;

    linhaPontilhada();

    printf("Valor da variável z (int) é: %d. Este valor atual dessa variável z foi passada como um argumento na função calculo().\n", z);

    linhaPontilhada();

    z = 16;

    float area2 = x * y + z;
    
    printf("Agora, é este valor da variável z (int): %d. O valor agora mudou, pois, eu alterei o valor de z. Dessa vez dentro da função calculo()\n", z);

    void ponteiros(int r); // Declarando a função 

    linhaPontilhada();

    ponteiros(12); // Chamando a função passando um valor inteiro, pois é isso que o argumento na função espera

    return 0;

}

 void ponteiros(int r) { // (void)

     // int r = 12;

     int *ponte; // Declarando um ponteiro

     ponte = &r; // Atribuindo o endereço de memória da variável r para o ponteiro ponte;

     int vponte = *ponte; // Atribuindo o valor que está na variável r para a variável vponte;

     printf("Endereço de memória da variável r: %p\n", ponte);

     linhaPontilhada();

     printf("Recuperando/ lendo o valor/ dado que está no endereço de memória onde o ponteiro está apontando: %d\n", vponte);

    


 }