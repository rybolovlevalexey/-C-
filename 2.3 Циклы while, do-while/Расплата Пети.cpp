#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int number, n = 0;
    cin >> number;
    while (number <= pow(10, 7)){
        number = number * 2;
        n++;
    }
    cout << number << " " << n;
}
