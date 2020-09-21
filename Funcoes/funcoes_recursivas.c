/* A recursão é uma técnica que define um problema em termos de uma ou mais versões menores deste mesmo problema.
A recursão pode ser utilizada sempre que for possível expressar a solução de um problema em função do próprio problema.
Uma função é dita recursiva quando dentro do seu código existe uma chamada para si mesma. Por exemplo: Calcular o fatorial de um número 
N inteiro qualquer. Se formos analisar a forma de cálculo temos:

                                                        --- 1, se n = 0 (solução trivial)
                                                fat(n) =  
                                                        --- n x fat(n-1), se n > 0 (solução recursiva) */

// Logo, temos que:

/* 
   fat(5) = 5 x fat(4)
   fat(4) = 4 x fat(3)
   fat(3) = 3 x fat(2)
   fat(2) = 2 x fat(1)
   fat(0) = 1 
*/

// A seguir, um exemplo da função come sem recursão:

#include <stdio.h>

int fatorialrec(int num) {

    if(num == 0) {

        return 1;
    }

    else {

        return num * fatorialrec(num - 1);
    }

}

int fatorialsemrec(int num) {

    int f, i;

    if(num == 0) {


        return 1;
    }

    else {

        f = 1;

        for(i = num; i > 1; i--) {

            f = f * i;

        }
    }
}

int main(void) {

    int num;

    num = 3;

    printf("FatR(%d) = %d\n", num, fatorialrec(num));

    printf("FatS(%d) = %d\n", num, fatorialsemrec(num));

    return 0;
}