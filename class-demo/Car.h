#ifndef CAR_H
#define CAR_H
#include <string>
#include "Vehicle.h"

using std::string;

// defination of class Car
class Car : public Vehicle {
public:
    Car();
    Car(int maxSpeed);
    Car(string name, int maxSpeed);
    int getMaxSpeed() const;
private:
    int maxSpeed;
};

#endif