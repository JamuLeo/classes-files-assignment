 //including the header files implementation for all our classes
#include<iostream>
#include "square.cpp"
#include "circle.cpp"
#include "triangle.cpp"
#include "Area.cpp"
using namespace shapes;
using namespace std;

int main(){
  
bool quit=false;

while(!quit){
    
    //displaying options 

    cout<<"please select an option"<<endl;

    cout<<"1. calculate the area of a square"<<endl;
    cout<<"2. calculate the area of a triangle"<<endl;
    cout<<"3. calculate the area of a circle"<<endl;
    cout<<"4. quit"<<endl;
    // Get the user's choice
    int choice;
    cin >> choice;

    // Process the user's choice
    switch (choice) {
      case 1: {
        // Get the side length of the square
        int side_length;
        cout << "Enter the side length of the square: ";
        cin >> side_length;

        // Create a square object
        square square1(side_length);

        // Calculate the area of the square
        int area = Area::calculateArea(square1);

        // Output the area of the square
        cout << "The area of the square is: " << area << endl;

        break;
      }
      case 2: {
        // Get the base and height of the triangle
        float base, height;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;

        // Create a triangle object
        triangle triangle1(base, height);

        // Calculate the area of the triangle
        float area = Area::calculateArea(triangle1);

        // Output the area of the triangle
        cout << "The area of the triangle is: " << area << endl;

        break;
      }
      case 3: {
        // Get the radius of the circle
        float radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        // Create a circle object
        circle circle(radius);

        // Calculate the area of the circle
        float area = Area::calculateArea(circle);

        // Output the area of the circle
        cout << "The area of the circle is: " << area << endl;

        break;
      }
      case 4: {
        quit = true;
        break;
      }
      default: {
        cout << "Invalid choice. Please select a number between 1 and 4." << endl;
        break;
      }
    }
  }

  return 0;
}



     
    




   

	
