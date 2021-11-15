#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool IsPrime(int n){
    int d = 2;
    if (n == 2){
        return true;
    }
    while (pow(n, 0.5) >= d){
        if (n % d == 0 && n != d){
            return false;
        }
        d += 1;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    if (IsPrime(n)){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
