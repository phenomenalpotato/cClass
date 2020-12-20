// #include <iostream>

// int main(void) {

//     static int s_Variable = 5; // Usando s_ que é uma convenção quando for definir algo que será Static. Ao definir essa variável como Static, ela será somente 
//                               // Visivel/ Linked dentro desse Object File

//     return 0;
// }

int s_Variable = 5;

// static int s_Variable = 5; // Se eu declarar essa variável como Static seria como um decalarar uma variável como Private dentro de uma Classe.  
// O linker, nesse caso não verá essa variável no escopo Global. E caso, eu esteja fazendo uma referencia a essa variável com extern em outro Object File, 
// Irá dar erro, pois essa variável só está visivel para esse Object File.

int teste = 20;

void Function(void) {

    //int teste_interno = 11;

}