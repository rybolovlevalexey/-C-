#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool IsPointInCircle(double x, double y, double xc, double yc, double r){
    return pow((pow((x - xc), 2) + pow((y - yc), 2)), 0.5) <= r;
}

int main() {
    double x, y, xc, yc, r;
    cin >> x;
    cin >> y;
    cin >> xc;
    cin >> yc;
    cin >> r;
    if (IsPointInCircle(x, y, xc, yc, r)){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
