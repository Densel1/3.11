#include "figure.h"


void figure::SetSideCount(int sideCount)
{
	this->sidesCount = sideCount;
};
 
void figure::print_info()
{
};

bool figure::check()
{
	bool c = f;
	if((sidesCount == 0) && (figureName == "Фигура")) c = t;
	return c;
};