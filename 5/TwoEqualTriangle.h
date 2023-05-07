#pragma once
#include <iostream>
#include "triangle.h"
#include "ErrorHandler.h"



 // ravnobedreniy treugolnik 
 class TwoEqualTriangle:public triangle
 { 
 public: 
         TwoEqualTriangle() :TwoEqualTriangle(10, 50) {} 
         TwoEqualTriangle(int side, int angle)// :figure("Равнобедренный треугольник", 3) 
         { 
                 this->sideA = side; 
                 this->sideC = side; 
                 this->angleA = angle; 
                 this->angleC = angle; 
         } 
         TwoEqualTriangle(std::string str, int a, int b, int c, 
                 int A, int B, int C)// :figure("Равнобедренный треугольник", 3) 
         { 
                 this->figureName = str; 
                 this->sideA = a; 
                 this->sideB = b; 
                 this->sideC = c; 
  
                 this->angleA = A; 
                 this->angleB = B; 
                 this->angleC = C; 
                 this->check();
         } 
         bool check() override;
 }; 