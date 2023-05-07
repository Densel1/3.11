#include "rectangle.h"

bool rectangle::check()
{ 
    square::check();
    bool b = (sideA == sideC) && (sideB == sideD) && (angleA == angleB) && (angleB == angleC) && (angleC == angleD) && (angleD == 90); 
    if (b)
    {
        return true;
    }
    else throw ErrorHandler("стороны a,c и b,d должны быть попарно равны, все углы равны 90");
    return false;
}

