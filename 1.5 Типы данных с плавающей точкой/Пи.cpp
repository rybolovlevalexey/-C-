#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    const long double pi = 3.141592653589793;
    int n;
    cin >> n;

    cout.setf(ios::fixed);
    cout.precision(n);
    cout << pi;
}
