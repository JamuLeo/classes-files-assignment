

#pragma once // a preprocessor directive to include the header file once
using namespace std;
 //classes inside a namespace are declared inside a namespace
namespace shapes{

//circle class declaration
class circle{
     private:
     int cradius;

   public:
     //default constructor
     circle();

     //overloaded constructor
     circle(int cr);
     //destructor declaration
     ~circle();

     void setCRadius(int r);
     int  getCRadius();

     float calculateCArea();



    };
};