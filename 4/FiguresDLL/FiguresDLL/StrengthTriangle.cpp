#include "StrengthTriangle.h"

bool StrengthTriangle::check(){ 
       triangle::check();  
       if ((angleC == 90))
       {
           return true;
       }
       else throw ErrorHandler("”гол не равен 90 градусов"); 
       return false; 
} 
