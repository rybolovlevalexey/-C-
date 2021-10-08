
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int number, last_number = -1, count = 0;
    while (cin >> number){
        count++;
        if (number == last_number){
            break;
        }
        last_number = number;
    }
    cout << count;
}
