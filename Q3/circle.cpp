/*implementing circle class*/
#include "circle.h" //including the header file we would like to use
#include <iostream>
#include <cmath>
using namespace std;


shapes :: circle:: circle() //constructor
{
	cradius=0;
}
shapes :: circle:: circle(int sl) {
    cradius=sl;
}

//destructor implementation
shapes :: circle::~circle() {
    cout<<"square destructor called"<<endl;
}

 void shapes :: circle::setCRadius(int sl) {
       cradius=sl;
}

int shapes :: circle:: getCRadius(){
 return cradius ;
}
float shapes :: circle::calculateCArea(){
 return M_PI *cradius*cradius;
}
