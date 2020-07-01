#include <stdio.h>

int main(int argc, char *argv[]) {

    char s[30] = "fernando";

    for (int i = 0; i < 30; i++) {

        // putchar(s[i]);

        printf("%x ", s[i]); // Isso daqui s[10] é a mesma coisa que *(s + 10) ou *(10 + s). O próprio compilador irá fazer isso, pegar s[10] e mudar para *(s + 10)

    }

    putchar('\n');

    printf("%c\n", *(s + 2)); // Isso só é mais uma maneira de Indexação 

    return 0;

}