#include "Vehicle.h"
#include <iostream>

using std::cout;
using std::endl;

Vehicle::Vehicle() : name("Vehicle") {

}

Vehicle::Vehicle(string n):name(n) {
    //cout << "Vehicle::Vehicle(string) is called." << endl;
}

void Vehicle::transport() {
    cout << "Vehicle: " << name << " is Transporting..." << endl;
}

const string& Vehicle::getName() const {
    return name;
}

Vehicle::~Vehicle() {
    //cout << "Destructor: Vehicle::~Vehicle() is called." << endl;
}
