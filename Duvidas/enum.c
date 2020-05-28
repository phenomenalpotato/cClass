// Um Enumerated Type é um tipo definido pelo o usuário na qual é usado para designar nomes a CONSTANTES INTEIRAS, pq nomes são mais faceis de lidar em programas.
// Somente valores inteiros que serão válidos para um enum, não pode ser algo como 3.129

#include <stdio.h>

#define BEGIN {
#define END }

enum Bool BEGIN False, True END; // False e True são os nomes para as Constantes Inteiras. Se não designarmos valores para os enum,o compilador irá fazer isso
                                // Automaticamente apartir do valor 0. Ou seja, se não tiver valor designado o primeiro elemento será 0, o segundo 1 
                                // E assim por diante

// Todos os nomes que não tiverem um valor assinalado a ele, receberá o valor do número anterior + 1. Ou seja, se o número anterior foi
// 12 ele será 13. 

// Todos os nomes em um enum devem ser únicos em um escopo. Vc não pode ter no mesmo escopo dois nomes x, por exemplo.
// enum po1 {x=32, y=13, z=56};
// enum po2 {x=52, p=40, t=09};

int main() BEGIN

    enum Bool var; // Aqui nós declaramos a variavel var do tipo Bool. Isso significa que essa variável só pode armazenar False ou True.
    var = True;
    printf("%d\n", var);
    
    return 0;

END