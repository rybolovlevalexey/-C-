#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    long double a, b;
    long double x;
    cin >> a >> b;
    x = a / b;
    cout.setf(ios::fixed);
    cout << x;
}
