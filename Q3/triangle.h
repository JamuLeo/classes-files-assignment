
//triangle class declaration 
#pragma once
using namespace std;

namespace shapes{
class triangle{

     private:
     int tbase,theight;

      public:
     //default constructor
     triangle();
     //overloaded constructor
     triangle(int tb,int th);
     ~triangle();// destructor declaration

     void setTBase(int b);
     void setTHeight(int h);

     int  getTBase();
     int  getTHeight();

     float calculateTArea(); 
        
        };
};
   