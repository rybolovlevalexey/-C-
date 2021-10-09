#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    long long int l, r, count = 0;
    cin >> l >> r;
    if (l <= 1 && r >= 1){
        count = 1;
    }
    cout << count;
}
