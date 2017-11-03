#include <iostream>

#include "Rectangle.h"

using namespace std;
using namespace geometry;

Rectangle gRect;

void test_Rectangle() {

    /*
    //使用过程
    float height = 20;
    float width = 40;
    float area = height * width;
    cout << "area = " << area << endl;

    //使用对象
    Rectangle rect(20,40); 
    cout << rect.getArea() << endl;
    //rect.width = 10; //非法
    rect.setWidth(20);
    rect.setHeight(10);
    cout << rect.getArea() << endl;
    rect.printShape('.');

    Rectangle r;
    r.setHeight(5);
    r.setWidth(10);
    r.printShape('@');

    
    Rectangle *pr = new Rectangle();
    pr->setHeight(8);
    pr->setWidth(8);
    pr->printShape('#');

    Rectangle r2(5,5);
    r2.printShape('*');

    Rectangle r3 = r2;
    r3.printShape('$');
    */

    Rectangle r4;
    r4.setHeight(4).setWidth(5).printShape('#');

    Rectangle r5 = r4;
    r5.printShape('@');
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

