#include "log.cpp"

// void log(const char *message) {

//     std::cout << message << std::endl;

// }

int main(void) {

    // O que nós estamos fazendo aqui é basicamente empurrando a string "Hello World" para cout o que faz a String ser impressa na console e também estamos 
    // empurrando uma nova linha com std::endl
    std::cout << "Hello World!!" << std::endl;
    // << Isso é basicamente um overloader operator (que basicamente são operadores diferentes tem implementações diferentes, dependendo de seus argumentos) 
    

    // Você tem que pensar nele como uma função. Nesse caso seria a mesma coisa que:
    //std::cout.print("Hello World!").print(std::endl);

    // std::printf("Hello World!!\n");

    log("Hello World!");

    // Essa função espera que nós cliquemos no ENTER
    std::cin.get();

    return 0;

}