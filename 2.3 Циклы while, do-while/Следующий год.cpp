#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int number, last_number, count = 0;
    bool flag = false;
    cin >> number;
    number = number + 1;

    while (!flag){
        int sum = 0, x = number;
        while (x > 0){
            sum = sum + x % 10;
            x = x / 10;
        }
        if (sum == 13){
            cout << number;
            flag = true;
        }
        number = number + 1;
    }

}
