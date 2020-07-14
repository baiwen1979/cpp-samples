#include <iostream>
#include <cmath>
#include "test.h"

using namespace std;

void testNewtonIteration(F f, F df, float x0, float realRoot, int iterCount) {
    float x = x0;       //x0 = 0.0
    float dfx = df(x);  //第一种方法，以df(x0)代替df(x),而不是每次跌代都计算
    float error = 0;    //误差
    cout << "------------  第一种方法 -----------" << endl;
    cout << "迭代\t迭代根(x)\t实际根\t误差" << endl;
    for (int i = 0; i < iterCount; i++) {
        x -= f(x) / dfx;
        error = abs(realRoot - x);
        cout << i << "\t" << x << "\t\t" << realRoot << "\t" << error << endl;
    }

    cout << "------------  第二种方法 -----------" << endl;
    cout << "迭代\t迭代根(x)\t实际根\t误差" << endl;
    x = x0;
    for (int i = 0; i < iterCount; i += 2) {
        dfx = df(x);
        x -= f(x) / dfx;
        error = abs(realRoot - x);
        cout << i << "\t" << x << "\t\t" << realRoot << "\t" << error << endl;
        x -= f(x) / dfx;
        error = abs(realRoot - x);
        cout << i + 1 << "\t" << x << "\t\t" << realRoot << "\t" << error << endl;
    }
}
