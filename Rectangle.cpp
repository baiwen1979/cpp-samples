#include "Rectangle.h"

namespace geometry {
    Rectangle::Rectangle(float w, float h):width(w), height(h){
        //other code
    }

    float Rectangle::getHeight() {
        return height;
    }

    float Rectangle::getWidth() {
        return width;
    }

    float Rectangle::getArea() {
        return height * width;
    }
}