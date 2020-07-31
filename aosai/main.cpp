#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
    int temp, sum = 1;
    while (cin >> temp) {
        sum += temp;
    }
    cout << sum;
    fclose(stdin);
    fclose(stdout);
    return 0;
}