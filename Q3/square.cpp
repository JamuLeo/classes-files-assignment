#include <iostream>
#include "square.h"

using namespace std;
using namespace shapes;

square::square() {
    slength = 0;
}

square::square(int sl) {
    slength = sl;
}

square::~square() {
    cout << "square destructor called" << endl;
}

void square::setSLength(int sl) {
    slength = sl;
}

int square::getSLength() {
    return slength;
}

int square::calculateSArea() {
    return slength * slength;
}
