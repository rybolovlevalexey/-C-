#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

double power(double a, int n){
    if (n == 0){
        return 1;
    } else if (n == 1){
        return a;
    }
    else if (n % 2 == 1){
        return power(a, n - 1) * a;
    } else if (n % 2 == 0){
        return power(a * a, n / 2);
    }
}

int main() {
    double a;
    cin >> a;
    int n;
    cin >> n;
    cout << power(a, n);
}
