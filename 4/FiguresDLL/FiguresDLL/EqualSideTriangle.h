#pragma once
#include <iostream>
#include "triangle.h"
#include "ErrorHandler.h"



 // ravnostoroniy treugolnik 
 class TRIANGLE_API EqualSideTriangle :public triangle
 { 
 public: 
         EqualSideTriangle() :EqualSideTriangle(30, 60) {} 
         EqualSideTriangle(int side, int angle) 
         { 
                 this->sideA = side; 
                 this->sideB = side; 
                 this->sideC = side; 
  
                 this->angleA = angle; 
                 this->angleB = angle; 
                 this->angleC = angle; 
         } 
  
         EqualSideTriangle(std::string str, int a, int b, int c, 
                 int A, int B, int C) //:figure("Равносторонний треугольник", 3) 
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
  