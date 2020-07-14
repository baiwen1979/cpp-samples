#include <iostream>
#include "test.h"
using namespace std;

// 测试方程 f(x) = x - 4 = 0
float f1(float x) {
    return x - 4;
}
// f'(x) = 1
float df1(float x) {
    return 1;
}

// 测试方程 f(x) = x^2 - 4 = 0
float f2(float x) {
    return x * x - 4;
}

// f'(x) = 2x
float df2(float x) {
    return 2 * x;
}

//可以编写其它方程对应的f(x)和f'(x)函数进行测试，以观察哪种方法更好

int main() {

    cout << "测试牛顿迭代法求方程f(X)=X-4=0的迭代过程和误差情况" << endl;
    cout << "初始根x0=5.0,实际根为4.0,迭代次数为10" << endl;
    testNewtonIteration(f1, df1, 5.0, 4.0, 10); 
    cout << "初始根x0=10.0,实际根为4.0,迭代次数为20"<< endl;
    testNewtonIteration(f1, df1, 10.0, 4.0, 20);

    cout << endl;
    cout << "测试牛顿迭代法求方程f(X)=X^2-4=0的迭代过程和误差情况" << endl;
    cout << "初始根x0=3.0,实际根为2.0,迭代次数为10" << endl;
    testNewtonIteration(f2, df2, 3.0, 2.0, 10); 
    cout << "初始根x0=10.0,实际根为2.0,迭代次数为10" << endl; 
    testNewtonIteration(f2, df2, 10.0, 2.0, 20); 

    // 从运行结果看，第二种方法每次迭代误差更小，
    // 收敛更快，需要的迭代次数也更少，因此更好。
    // 此处可以运行更多的测试
}