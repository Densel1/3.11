#include "square.h"
#include <string>

void square::print_info()
{
	std::cout << figureName << " (стороны " << sideA << ", " << sideB << ", " << sideC << ", " << sideD 
		<< "; углы " << angleA << ", " << angleB << ", " << angleC << ", " << angleD << ")" << std::endl;
}


bool square::check()
{
	bool b = ((sidesCount == 4));
	if (b){}
	else throw ErrorHandler("Количество сторон должно быть 4.");

	b = ((angleA + angleB + angleC + angleD) == 360);
	std::string str = "Сумма углов " + std::to_string(angleA) + " + " + std::to_string(angleB) + " + " + std::to_string(angleC) + " + " + std::to_string(angleD) + " должна равняться 360";
	if (b) return true;
	else throw ErrorHandler( str.c_str() );
	return false;
}
