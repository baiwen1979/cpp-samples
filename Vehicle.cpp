#include "Vehicle.h"
#include <iostream>

using std::cout;
using std::endl;

Vehicle::Vehicle(string n):name(n) {

}

void Vehicle::transport() {
    cout << "Vehicle: " << name << " is Transporting..." << endl;
}

const string& Vehicle::getName() const {
    return name;
}
