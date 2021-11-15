#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

double power(double a, int n){
    if (n == 1){
        return a;
    } else if (n == 0){
        return 1;
    } else if (n > 0){
        return a * power(a, n - 1);
    } else if (n < 0){
        return (1 / a) * power(a, n + 1);
    } else if (n == -1){
        return 1 / a;
    }
}
int main() {
    double a;
    int n;
    cin >> a;
    cin >> n;
    cout << power(a, n);
}
