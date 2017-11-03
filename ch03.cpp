#include <iostream>
#include "Wheel.h"
#include "BicycleFrame.h"
#include "Bicycle.h"

using namespace std;
void test_Wheel() {
    Wheel w1;
    cout << "Radius of w1: " << w1.getRadius() << endl;
    Wheel w2(5);
    cout << "Radius of w2: " << w2.getRadius() << endl;
    Wheel w3 = w2;
    cout << "Radius of w3: " << w2.getRadius() << endl;
    
}

void test_BicycleFrame() {
    BicycleFrame b1;
    cout << "Length of BicycleFrame: " << b1.getLength() << endl;
}

void test_Bicycle() {
    Bicycle *pb = new Bicycle[10];
    for (int i = 0; i < 10; i++) {
        pb[i].printInfo();
    }
    
    delete[] pb;
}

void printNumOfWheels() {
    cout << "Number Of Wheels: " << Wheel::numOfWheels << endl;
}

void test_ch03() {
    cout << "********** Testing Ch03 **********" << endl;
    //test_Wheel();
    //test_BicycleFrame();
    test_Bicycle();
    //cout << "Number Of Wheels: " << Wheel::getNumOfWheels() << endl;
    printNumOfWheels();
}