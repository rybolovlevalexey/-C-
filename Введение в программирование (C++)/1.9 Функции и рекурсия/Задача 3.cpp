#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool IsPointInSquare(double x, double y){
    if (x <= 1 && x >= -1 && y <= 1 && y >= -1){
        return true;
    } else {
        return false;
    }
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
