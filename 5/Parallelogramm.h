#pragma once
#include <iostream>
#include "square.h"
#include "ErrorHandler.h"


class parallelogramm :public square
{
public:
       parallelogramm(std::string str, int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4)
       { 
                 this->figureName = str; 
                 this->sideA = side1; 
                 this->sideC = side3; 
                 this->sideB = side2; 
                 this->sideD = side4; 
  
                 this->angleA = angle1; 
                 this->angleB = angle2; 
                 this->angleC = angle3; 
                 this->angleD = angle4; 
                 this->check();
       }
       bool check() override;
 }; 
  