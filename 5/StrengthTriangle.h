#pragma once
#include <iostream>
#include "triangle.h"
#include "ErrorHandler.h"


// prymougolniy treugolnik 
class StrengthTriangle :public triangle
{
public:
	StrengthTriangle() :StrengthTriangle(90) {}
	StrengthTriangle(int angleC) 
	{
		this->angleC = angleC;
	}
	StrengthTriangle(std::string str, int sideA, int sideB, int sideC,
		int angleA, int angleB, int angleC) 
	{

		this->figureName = str;
		this->sideA = sideA;
		this->sideB = sideB;
		this->sideC = sideC;

		this->angleA = angleA;
		this->angleB = angleB;
		this->angleC = angleC;
		this->check();
	}

	bool check() override;
};