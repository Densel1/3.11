#pragma once
#include <iostream>
#include "square.h"
#include "ErrorHandler.h"


 // pryamougolnik 
 class TRIANGLE_API rectangle :public square
 { 
 public: 
     //    rectangle() :rectangle("Прямоугольник", 10, 20,) {} 
         rectangle(std::string str, int side1, int side2, int side3, int side4, int A, int B, int C, int D) 
         { 
                 SetSideCount(4); 
                 this->figureName = str; 
                 this->sideA = side1; 
                 this->sideC = side3; 
                 this->sideB = side2; 
                 this->sideD = side4; 
  
                 this->angleA = A; 
                 this->angleB = B; 
                 this->angleC = C; 
                 this->angleD = D; 
                 this->check();
         } 
         bool check() override;
 };
 