#pragma once
using namespace std;
#include "square.h"
#include "circle.h"
#include "triangle.h"

namespace shapes{
class Area{

   public:
   static int calculateArea( square& square);
   static float calculateArea( triangle& triangle);
   static float  calculateArea(circle& circle);   
};
};