#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int fib(int n){
    if (n == 1 || n == 2){
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int first;
    cin >> first;
    cout << fib(first);
}
