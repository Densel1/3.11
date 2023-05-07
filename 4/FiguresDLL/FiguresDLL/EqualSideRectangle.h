#pragma once
#include <iostream>
#include "square.h"
#include "ErrorHandler.h"


 // kvadrat 
 class TRIANGLE_API equalSideRectangle :public square
 {
 public: 
  //       equalSideRectangle() :equalSideRectangle("Квадрат", 20) {} 
         equalSideRectangle(std::string str, int side1, int side2, int side3, int side4, int A, int B, int C, int D) 
         { 
                 this->figureName = str; 
                 this->sideA = side1; 
                 this->sideC = side2; 
                 this->sideB = side3; 
                 this->sideD = side4; 
  
                 this->angleA = A; 
                 this->angleB = B; 
                 this->angleC = C; 
                 this->angleD = D;
                 this->check();
         } 
  
         bool check() override;
 }; 
  