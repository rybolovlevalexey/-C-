#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    long int a, b, c;
    cin >> a >> b >> c;
    cout << (a || !a || b && (c || b && !a));
}
