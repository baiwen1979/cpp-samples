#include "Bicycle.h"
#include <iostream>

using namespace std;

Bicycle::Bicycle(): frontWheel(4), backWheel(2), frame(5) {
    cout << "Default Constructor: Bicycle::Bicycle() is called." << endl;
}

void Bicycle::printInfo() {
    cout << "--------- Bicycle Information --------" << endl;
    cout << "Bicycle Frame Length: " << frame.getLength() << endl;
    cout << "Radius of Front Wheel: " << frontWheel.getRadius() << endl;
    cout << "Radius of Back Wheel: " << backWheel.getRadius() << endl;
    cout << "Number of Wheels: " << Wheel::numOfWheels << endl;
}

Bicycle::~Bicycle() {
    cout << "Destructor: Bicycle::~Bicycle() is called." << endl;
}
