#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int _sum_(int x, int y){
    if (y == 0){
        return x;
    } else {
        int number;
        cin >> number;
        x += y;
        return _sum_(x, number);
    }
}

int main() {
    int first;
    cin >> first;
    cout << _sum_(0, first);
}
