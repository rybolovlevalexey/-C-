#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    double d;
    cin >> a >> b >> c;
    d = sqrt(b * b - 4 * a * c);
    cout.setf(ios::fixed);
    cout.precision(6);
    cout << (-1 * b + d) / (2 * a);
}
