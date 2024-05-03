//program header file to calculate area of a rectangle
//class declaration for rectangle having private member variable,default constructor and destructor

#pragma once
using namespace std;

class Rectangle{
 //private memeber variables
    private:
    float length,width; 

    //public member functions and our constructor and destructor
    public:
    Rectangle(); //default constructor
    Rectangle(float l, float w); //overloaded constructor
    ~Rectangle(); //destructor

    void setLength(float l);
    void setWidth(float w);

    float getLength();
    float getWidth();

    float calculateArea();
    
};