//implementation
#include <iostream>
#include "Rectangle.h"

using namespace std;

namespace geometry {

    Rectangle::Rectangle(const Rectangle& r) {
        cout << "Copy Constructor is called." << endl;
        if (&r == this) return;
        width = r.width;
        height = r.height;
    }

    Rectangle::Rectangle(int w, int h):width(w),height(h) {
        cout << "Constructor with parameters is called." << endl;
    }

    Rectangle::Rectangle():width(2),height(2) {
        cout << "Default Constructor is called." << endl;
    }

    int Rectangle::getHeight() {
        return height;
    }

    int Rectangle::getWidth() {
        return width;
    }

    int Rectangle::getArea() {
        return height * width;
    }

    Rectangle& Rectangle::setHeight(int h) {
        if (h > 0) {
            height = h;
        }
        return *this;
    }

    Rectangle& Rectangle::setWidth(int w) {
        if (w > 0) {
            width = w;
        }
        return *this;
    }

    void Rectangle::printShape(char c) {
        for (int row = 0; row < this->height; row++) {
            for (int col = 0; col < this-> width; col++) {
                cout << " " << c;
            }
            cout << endl;
        }
    }

    Rectangle::~Rectangle() {
        //delete[] p;
        cout << "Destructor is called." << endl;
    }
}