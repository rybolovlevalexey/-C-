#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int number, last_number, count = 0;
    cin >> number;
    if (number < 0){
        number = number * (-1);
    }
    while (number > 0){
        count = count + number % 10;
        number = number / 10;
    }
    cout << count;
}
