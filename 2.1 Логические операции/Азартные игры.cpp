
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    long int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    cout << !((a < c) && (b < d) && (a < d) && (b < c));
}
