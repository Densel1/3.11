
#include <iostream>
#include "figure.h"
#include "ErrorHandler.h"
#pragma once


class triangle :public figure
{
protected:
	int sideA;
	int sideB;
	int sideC;
	int angleA;
	int angleB;
	int angleC;
public:
	triangle() :triangle("Треугольник: ", 10, 20, 30, 50, 60, 70)
	{
		SetSideCount(3);
	}
	triangle(std::string str, int sideA, int sideB, int sideC,
		int angleA, int angleB, int angleC)
	{

		SetSideCount(3);
		this->figureName = str;
		this->sideA = sideA;
		this->sideB = sideB;
		this->sideC = sideC;

		this->angleA = angleA;
		this->angleB = angleB;
		this->angleC = angleC;
		this->check();
	}

	void print_info() override;

	bool check() override;

};
