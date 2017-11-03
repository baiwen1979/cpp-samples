#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

using std::string;

class Vehicle {
public:
    Vehicle(string name);
    void transport();
    const string& getName() const;
private: 
    string name;
};

#endif