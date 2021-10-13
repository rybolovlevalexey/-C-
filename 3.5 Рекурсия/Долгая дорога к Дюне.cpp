#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int n = 0;

int f(int x){
    if (x == 1 || x == 2){
        return 1;
    } else {
        n += 1;
        return f(x - 1) + f(x - 2);
    }
}

int main() {
    int number;
    cin >> number;
    int answer = f(number);
    cout << n;
}
