
#pragma once // a preprocessor directive to include the header file once
using namespace std;
 //classes inside a namespace are declared inside a namespace
namespace shapes{

// square class declaration 
 class square{
   private:
   int slength;

   public:
   square();
   //overloaded constructor
   square(int sl);
   ~square();//destructor declaration

   void setSLength(int sl);
   int  getSLength();

   int calculateSArea();

    };

};