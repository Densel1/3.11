#include <iostream>
#include <Windows.h>
#include "Leaver.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	Leaver L;
	std::string name;
	std::cout << "������� ���: ";
	std::cin >> name;
	std::cout << L.Leave(name);
}