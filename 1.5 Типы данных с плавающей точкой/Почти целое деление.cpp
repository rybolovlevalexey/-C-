#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    long double a, b;
    long double x;
    cin >> a >> b;
    x = int(round(a / b));
    cout.setf(ios::fixed);
    cout.precision(0);
    cout << x;
}
