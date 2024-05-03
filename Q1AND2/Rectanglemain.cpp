    //#include "Rectangle.h"
    #include <iostream>
    #include "Rectangle.cpp"
    using namespace std;

    int main(){

    float length,width;

    //instatiating our class Rectangle object
    Rectangle rectangle1=Rectangle();
    Rectangle rectangle2=Rectangle(length,width);

    //prompting for user to enter  length 
    cout<<"Enter length for rectangle1 in decimals:";
    cin>>length; 
    rectangle1.setLength(length);

    //using overloaded constructor instance to setLength
    rectangle2.setLength(length);

    //prompting for user to enter width
    cout<<"\n Enter width for rectangle1 in decimals:";
    cin>>width;
    
    rectangle1.setWidth(width);
    rectangle2.setWidth(width);

    cout<<"\nThe area of a rectangle of length "<<length
    <<" and width  "<<width <<" is "<<rectangle1.calculateArea()<<endl;

    cout<<"\nThe area of a rectangle of length "<<length
    <<" and width  "<<width <<" is "<<rectangle2.calculateArea()<<endl;



        return 0;
    }