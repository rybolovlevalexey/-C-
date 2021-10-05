#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d;
    cin >> e >> f >> g;
    if ((a != e) && (a != f) && (a != g)){
        cout << a;
    }
    if ((b != e) && (b != f) && (b != g)){
        cout << b;
    }
    if ((c != e) && (c != f) && (c != g)){
        cout << c;
    }
    if ((d != e) && (d != f) && (d != g)){
        cout << d;
    }
}
