// implementation of class Car
#include "Car.h"

Car::Car() : Vehicle("Car"), maxSpeed(100) {
}

Car::Car(int ms): Vehicle("Car"), maxSpeed(ms) {

}

Car::Car(string name, int ms) :Vehicle(name), maxSpeed(ms){

}

int Car::getMaxSpeed() const {
    return maxSpeed;
}