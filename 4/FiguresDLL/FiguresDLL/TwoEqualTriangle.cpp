#include "TwoEqualTriangle.h"


bool TwoEqualTriangle::check()
{
	triangle::check();
	bool b = (sideA == sideC) && (angleA == angleC);
	if (b)
	{
		return true;
	}
	else throw ErrorHandler("Стороны А и С должны быть равны и/или углы А и С должны быть равны.");
	return false;
}
