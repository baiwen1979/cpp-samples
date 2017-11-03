#include "Wheel.h"
#include "BicycleFrame.h"

class Bicycle {

public:
    void printInfo();

private:
    Wheel frontWheel;
    Wheel backWheel;
    BicycleFrame frame;
};