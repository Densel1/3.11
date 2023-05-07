#pragma once
#include <iostream>

#ifdef TRIANGLE_EXPORTS
#define TRIANGLE_API __declspec(dllexport)
#else
#define TRIANGLE_API __declspec(dllimport)
#endif // TRIANGLE_EXPORTS

class TRIANGLE_API ErrorHandler : public std::exception
{
	std::string str;
public:
	ErrorHandler(const char* str)
	{
		this->str = std::string(str);
	};
	const char* what() const override
	{
		setlocale(LC_ALL, "Rissian");
		std::cout << "Ошибка создания фигуры. Причина: " << str;
		return str.c_str();
	}
};