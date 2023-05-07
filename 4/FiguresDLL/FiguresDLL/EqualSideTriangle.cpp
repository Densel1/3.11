#include "EqualSideTriangle.h"


bool EqualSideTriangle::check()// override 
{
	triangle::check();
	bool b = (sideA == sideB) && (sideB == sideC) && (angleA == angleB) && (angleB == angleC)&&(angleC == 60);
	if (b)
	{
		return true;
	}
	else throw ErrorHandler("Стороны не равны между собой и/или углы не равны 60 градусам.");
	return false;
}