// Para separar Standard Library Header FIles de C++ de Standard Library Header FIles de C. Os Header Files em C tem o .h e os de C++ não tem .h
#include <iostream>

void Log(const char *message) {

    std::cout << message << std::endl;
}

#include "Log.cpp"

int main(void) {

    // std::cout << "Log One" << std::endl;

    Log("Log One");


    InitLog();


    return 0;
}