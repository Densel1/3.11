#include "parallelogramm.h"

bool parallelogramm::check()// override 
{
	square::check();
	bool b = (sideA  == sideC) && (sideB  == sideD) && (angleA  == angleC) && (angleB  == angleD);
	if (b) return true;
	else throw ErrorHandler("стороны a,c и b,d должны быть попарно равны, углы A,C и B,D попарно равны");
	return false;
}