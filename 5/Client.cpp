
#include<iostream> 

#include "figure.h"
#include "triangle.h"
#include "square.h"
#include "StrengthTriangle.h"
#include "TwoEqualTriangle.h"
#include "EqualSideTriangle.h"
#include "rectangle.h"
#include "equalSideRectangle.h"
#include "parallelogramm.h"
#include "romb.h"
#include "ErrorHandler.h"


using namespace std;


void print(figure& f)
{
	f.print_info();
}

int main()
{

	setlocale(LC_ALL, "Russian");
	try {
		cout << endl;

		triangle    Triangle;
		print(Triangle);


		StrengthTriangle Tr1("Прямоугольный треугольник", 10, 20, 30, 50, 40, 90);
		print(Tr1);

		TwoEqualTriangle Tr2("Равнобедренный треугольник", 10, 20, 10, 50, 80, 50);
		print(Tr2);

		EqualSideTriangle Tr3("Равносторониий треугольник", 30, 30, 30, 60, 60, 60);
		print(Tr3);

		square      Square("Четырехугольник", 25, 25, 25, 25, 90, 90, 90, 90);
		print(Square);

		rectangle Square1("Прямоугольник", 10, 20, 10, 20, 90, 90, 90, 90);
		print(Square1);

		equalSideRectangle Square2("Квадрат", 20, 20, 20, 20, 90, 90, 90, 90);
		print(Square2);

		parallelogramm Square3("Параллелограмм", 20, 30, 20, 30, 90, 90, 90, 90);
		print(Square3);

		romb Square4("Ромб", 30, 30, 30, 30, 80, 100, 80, 100);
		print(Square4);
	}
	catch (const ErrorHandler& e) { e.what(); }
	catch (...) { std::cout << "Unknown error"; }
	return 0;
}