#include "Wheel.h"
#include <iostream>

using namespace std;

int Wheel::numOfWheels = 0;

Wheel::Wheel():radius(1) {
    IncNumOfWheels();
    cout << "Default Constructor: Wheel::Wheel() is called." << endl;
}

Wheel::Wheel(int r): radius(r) {
    IncNumOfWheels();
    cout << "Constructor: Wheel::Wheel(int) is called." << endl;
}

Wheel::Wheel(const Wheel& w) {
    if (this != &w) {
        this -> radius = w.radius;
    }
    IncNumOfWheels();
    cout << "Copy Constructor: Wheel::Wheel(const Wheel&) is called." << endl;
}

Wheel::~Wheel() {
    numOfWheels--;
    cout << "Destructor Wheel::~Wheel() is called." << endl;
}

int Wheel::getRadius() {
    return this -> radius;
}

void Wheel::IncNumOfWheels() {
    numOfWheels++;
}

int Wheel::getNumOfWheels() {
    return numOfWheels;
}