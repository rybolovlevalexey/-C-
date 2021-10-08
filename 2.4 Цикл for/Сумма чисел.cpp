#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int n, sum = 0;
    bool flag = false;
    cin >> n;

    for (int i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum;
}
