
#include <iostream>
#include <windows.h>

#include "../GreeterLibrary/Greeter.h"

#pragma execution_character_set("utf-8")


int main()
{

    SetConsoleOutputCP(65001);
    Gr::Greeter greater;
    std::string name;
    std::cout << "Введите имя латиницей: ";
    
    std::cin >> name;
    
    std::cout << greater.Greet(name);
}
