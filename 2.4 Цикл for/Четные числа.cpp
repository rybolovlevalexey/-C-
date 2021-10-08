#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int n, sum = 0;
    bool flag = false;
    cin >> n;
    if (n % 2 == 1){
        n = n - 1;
    }
    for (int i = n; i >= 2; i = i - 2){
        cout << i << " ";
    }
}
