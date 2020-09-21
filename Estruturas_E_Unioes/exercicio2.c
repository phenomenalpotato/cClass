/* Esse programa irá receber uma frase e uma letra qualquer. O mesmo irá verificar quantas vezes essa mesma letra aparece no programa.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função que vai receber um caracter e retornar ele em Maiusculo
char uppercase(char up) {

    if(up >= 'a' && up <= 'z') {

        up = up - 32;

    }

    return up;
}

int main(void) {

    //char frase[100]; //= "Cacareco no marreco";
    char *frase;

    char letra, lmaiuscula, fmaiuscula;

    int cont = 0, frasemax;

    printf("Digite uma frase de até 100 caracteres: ");
    fgets(frase, 100, stdin); /*The C library function char *fgets(char *str, int n, FILE *stream) reads a line from the specified stream and stores it into the string pointed to by str. 
                                It stops when either (n-1) characters are read, the newline character is read, or the end-of-file is reached, whichever comes first.*/

    frasemax = strlen(frase);

    if (frasemax > 100) {

        puts("A frase digitada contêm mais de 100 caracteres!");
        exit(1);
    }

    printf("Digite uma letra: \n");
    scanf("%s", &letra);

    // Chamando a função uppercase() para transformar o caracter provido pelo o usuário em maisculo
    lmaiuscula = uppercase(letra);;

    //printf("Letra: %c\n", letra);

    for (int i = 0; frase[i] != '\0'; i++) {

    // Chamando a função uppercase() para transformar a frase provida pelo o usuário em maisculo de 1 elemento por vez no Array frase
    fmaiuscula = uppercase(frase[i]);

    // printf("%c", fmaiuscula);

    if (fmaiuscula == lmaiuscula) {

        cont = cont + 1;

    }

    }

    printf("Essas foram a quantidade de vezes que a letra [%c] apareceu: %d\n", letra, cont);

    return 0;
}