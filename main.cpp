#include <iostream>

#include "Rectangle.h"

using namespace std;
using namespace geometry;

int main(int argc, char* argv[]) {

    //使用过程
    float height = 20;
    float width = 40;
    float area = height * width;
    cout << "area = " << area << endl;

    //使用对象
    Rectangle rect(20,40);
    //rect.height = -10; 
    cout << rect.getArea() << endl;

    return 0;
}