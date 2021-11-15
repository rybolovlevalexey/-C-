#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int MinDivisor(int x){
    int d = 2;
    while (pow(x, 0.5) + 1 > d){
        if (x % d == 0){
            return d;
        }
        d += 1;
    }
    return x;
}
int main() {
    int n;
    cin >> n;
    cout << MinDivisor(n);
}
