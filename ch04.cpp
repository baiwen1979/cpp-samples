#include <iostream>
#include "Vehicle.h"
#include "Bicycle.h"

using namespace std;

void test_Vehicle() {
    Vehicle v("yellow small");
    v.transport();
    
    Bicycle b;
    b.transport();
    //v = b;
    //v.printInfo();
    //v.transport();
    //b = v; // error
    //Vehicle& v2 = b;
    //v2.transport();

    //Vehicle* pv = &b;
    //pv->transport();

    //Bicycle& b2 = v;   // error
    //Bicycle* pb = &v;  // error
}

void test_ch04() {
    cout << "********** Testing ch04 **********" << endl;
    test_Vehicle();
}