
#include "equalSideRectangle.h"
bool equalSideRectangle::check()
{ 
    square::check();
    bool b = (sideA == sideB) && (sideB == sideC) && (sideC == sideD) && (angleA == angleB) && (angleB == angleC) && (angleC == angleD) && (angleD == 90); 
    if (b) return true;
    else throw ErrorHandler("Все стороны должны быть равны между собой, все углы должны равняться 90 градусов");
    return false; 
}
