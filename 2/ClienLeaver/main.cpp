#include <iostream>
#include <Windows.h>
#include "../LeaverProject/DynamicLib/Leaver.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	Leaver L;
	std::string name;
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	std::cout << L.Leave(name);
}