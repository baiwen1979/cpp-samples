#include <iostream>

using namespace std;

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

