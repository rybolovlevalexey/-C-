#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int a, b, count=0;
    cin >> a >> b;
    while (a <= b){
        a *= 3;
        b *= 2;
        count += 1;
    }
    cout << count;
}
