#include <iostream>
#include "BicycleFrame.h"
using namespace std;

BicycleFrame::BicycleFrame():length(2) {
    cout << "Default Constructor: BicycleFrame::BicycleFrame() is called." << endl;
}

BicycleFrame::BicycleFrame(int len): length(len) {
    cout << "Constructor: BicycleFrame::BicycleFrame(int) is called." << endl;
}

BicycleFrame::BicycleFrame(const BicycleFrame& b) {
    if (this != &b) {
        this -> length = b.length;
    }
    cout << "Copy Constructor: BicycleFrame::BicycleFrame(const BicycleFrame&) is called." << endl;
}

int BicycleFrame::getLength() {
    return this -> length;
}

BicycleFrame::~BicycleFrame() {
    cout << "Destructor: BicycleFrame::~BicycleFrame() is called." << endl;
}