/*implementing an area class which takes contains
 static member functions*/

#include "Area.h"
#include "square.cpp"
#include "circle.h"
#include "triangle.h"
#include <iostream>
#include<cmath>
using namespace std;

namespace shapes{

int Area:: calculateArea(square& square){

    return square.getSLength() *square.getSLength();
}


float Area:: calculateArea(circle& circle){

    return circle.getCRadius()*circle.getCRadius() *M_1_PI;
}

float Area:: calculateArea(triangle& triangle){

    return triangle.getTBase()*triangle.getTHeight()*0.5;
}





};