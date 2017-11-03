#include "Wheel.h"
#include "BicycleFrame.h"

#ifndef BICYCLE_H
#define BICYCLE_H

class Bicycle {

public:   
    Bicycle();
    void printInfo();
    ~Bicycle();
private:
    Wheel frontWheel;
    Wheel backWheel;
    BicycleFrame frame;
};

#endif