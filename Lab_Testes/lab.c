#include <stdio.h>

extern int a;

int main(int argc, char *argv[]) {

    register int a = 10;

    printf("%d\n", a);

    void str(char *msg1, char *msg2, char *msg3);
    str(argv[0], argv[1], argv[2]);

    return 0;
}

void str(char *msg1, char *msg2, char *msg3) {

    printf("%s %s %s\n", msg1, msg2, msg3);


}