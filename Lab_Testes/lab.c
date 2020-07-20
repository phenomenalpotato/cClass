#include <stdio.h>

int main(void) {

    char str1[16] = {'T', 'E', 'S', 'T', 'E', ' ', 'D', 'E', ' ', 'S', 'T', 'R', 'I', 'N', 'G', '\0'};
    char str2[16] = {'S', 'T', 'R', 'I', 'N', 'G', ' ', 'D', 'E', ' ', 'T', 'E', 'S', 'T', 'E', '\0'};
    char str3[16] = {'T', 'E', 'S', 'T', 'E', ' ', 'D', 'E', ' ', 'S', 'T', 'R', 'I', 'N', 'G', '\0'};
  
    int i, retorno;

    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) { // Teste do for() fica falso quando uma das strings chegar ao fim, ou pelo return

        if (str1[i] < str2[i]) {

            retorno = -1;
        }
         
        if (str1[i] > str2[i]) {

            retorno = 1;
        }

        // string iguais
        
        else {

            retorno = 0;
        }

    }

    printf("retorno = %d\n", retorno);
    
    return 0;

}