#include <iostream>
#include "math.h"

using namespace std;

void swap(int &ra, int &rb) {
    int t = ra;
    ra = rb;
    rb = t;
}

void ff(int i) {
    cout << "ff(int) is called." << endl;
}

void ff(float f) {
    cout << "ff(float) is called." << endl;
}

void ff() {
    cout << "ff() is called." << endl;
}

void ff(int a, int b) {
    cout << "ff(int,int) is called." << endl;
}

void ff(float a, int b) {
    cout << "ff(float, int) is called." << endl;
}

void ff(int aa, float bb) {
    cout << "ff(int, float) is called." << endl;
}

/*
int ff() {
    cout << "int ff() is called." << endl;
}
*/

/*
int& max(int& a, int& b) {
    return a > b? a : b;
}

int* ops(int a) {
    return &a;
}
*/

void test_ch02() {

    cout << "******** test ch02 ******** " << endl;
    int a = 2 * 3;
    int b = a * a;

    //指针
    int *p = NULL;
    p = &a;
    cout << "*p = " << *p << endl;
    p = &b;
    cout << "*p = " << *p << endl;
    cout << "a = " << a << endl;
    //引用
    int &ref_b = b;
    cout << "b = " << b << endl;
    cout << "ref_b = " << ref_b << endl;
    ref_b = a; // b = a
    cout << "ref_b = " << ref_b << endl;
    cout << "b = " << b << endl; //36
    ref_b = 100;
    cout << "b = " << b << endl;
    //函数调用
    cout << "abs_i(-5) = " << abs_i(-5) << endl;
    cout << "abs_i(b) = " << abs_i(b) << endl;
    cout << "abs_i(ref_b) = " << abs_i(ref_b) << endl;
    cout << "abs_i(a + b) = " << abs_i(a + b) << endl;

    cout << "min_i(a,b) = " << min_i(a , b) << endl;

    int x = 200, y = 800;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    cout << "x = " << x << endl; // x = 800
    cout << "y = " << y << endl; // y = 200

    ff(2);
    ff(1.2f);
    ff();
    ff(1,2);

    ff(1, 2.2f);
    ff(2.2f, 1);
}