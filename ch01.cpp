#include <iostream>

#include "Rectangle.h"

using namespace std;
using namespace geometry;

void test_Rectangle() {

    //使用过程
    float height = 20;
    float width = 40;
    float area = height * width;
    cout << "area = " << area << endl;

    //使用对象
    Rectangle rect(20,40);
    //rect.height = -10; 
    cout << rect.getArea() << endl;
}

void test01() {
    int a, b;

    cin >> a;
    cout << a << endl;
    
    int aa = a % 10 * 100;
    cout << aa << endl;

    int bb = (a / 10) % 10 * 10;
    cout << bb << endl;

    int cc = a / 100;
    cout << cc << endl;

    b = aa + bb + cc;
    cout << b << endl;
}

void test_ch01() {
    cout << "******** test ch01 ********" << endl;
    test_Rectangle();
    test01();
}

