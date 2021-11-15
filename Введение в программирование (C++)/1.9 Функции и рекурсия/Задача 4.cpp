#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool IsPointInSquare(double x, double y){
    return (y <= x + 1) && (y <= -x + 1) && (y >= x - 1) && (y >= -x - 1);
}

int main() {
    double point_x, point_y;
    cin >> point_x;
    cin >> point_y;
    if (IsPointInSquare(point_x, point_y)){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
