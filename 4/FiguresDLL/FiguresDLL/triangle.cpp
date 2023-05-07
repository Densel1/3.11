#include "triangle.h"



void triangle::print_info()
{
	std::cout << figureName << " (стороны " << sideA << ", " << sideB << ", " << sideC
		<< "; углы " << angleA << ", " << angleB << ", " << angleC << ")" << std::endl;
}

bool triangle::check()
{
	bool c = f;
	if ((sidesCount != 3))
	{
		throw ErrorHandler("Количество сторон не равно 3.");
	}

	if ((angleA + angleB + angleC) == 180)
	{
		c = t;
	}
	else throw ErrorHandler("Сумма углов не равна 180.");

	return c;
}
