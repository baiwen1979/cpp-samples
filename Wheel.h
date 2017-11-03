#ifndef WHEEL_H
#define WHEEL_H

class Wheel {
    friend void printNumOfWheels(); //友元函数
    friend class Bicycle; //友元类
public:
    Wheel();
    Wheel(int r);
    Wheel(const Wheel& w);

    ~Wheel();

    int getRadius();
    static void IncNumOfWheels();
    static int getNumOfWheels();
private:
    static int numOfWheels;
    int radius;
};

#endif