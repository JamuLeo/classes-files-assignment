//program to implement or define the rectangle header file i.e function definition or implementation

#include "Rectangle.h" //including the header file we would like to use
#include <iostream>
using namespace std;
 
 //implementing default constructor
Rectangle :: Rectangle(){
  length=0.0;
   width=0.0;
}

//implementing overloaded constructor
Rectangle::Rectangle(float l, float w){
    length=l;
    width=w;
}

//destructor implemantation
Rectangle :: ~Rectangle(){
cout<<"This destructor does nothing for now"<<endl;
}

void Rectangle:: setLength(float l){
    length=l;

}
void Rectangle:: setWidth(float w){
    width=w;
}

float Rectangle :: getLength(){
    
    return length;
}

float Rectangle :: getWidth(){

    return width;
}

 //calculating rectangle area using the member variables
float Rectangle :: calculateArea(){
    
 return length*width;

}



