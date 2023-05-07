#pragma once
#include <iostream>
#include "triangle.h"
#include "ErrorHandler.h"


class square :public triangle
{
protected:
	int sideD;
	int angleD;

public:
	square() :square("Четырехугольник: ", 40,40,40,40, 90,90,90,90)
	{
		SetSideCount(4);
	}

	square(std::string str, int a, int b, int c, int d, int A, int B, int C, int D)
	{
		SetSideCount(4);
		this->figureName = str;

		this->sideA = a;
		this->sideB = b;
		this->sideC = c;
		this->sideD = d;

		this->angleA = A;
		this->angleB = B;
		this->angleC = C;
		this->angleD = D;

		this->check();
	}

	void print_info() override;

	bool check() override;
};
