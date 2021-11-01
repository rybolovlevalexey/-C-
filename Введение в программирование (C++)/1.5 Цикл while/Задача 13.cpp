#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int number, i1, i2, i3, count = 0;
    cin >> i1;
    if (i1 == 0){
        cout << 0;
        return 0;
    }
    cin >> i2;
    if (i2 == 0){
        cout << 0;
        return 0;
    }
    cin >> i3;
    if (i3 == 0){
        cout << 0;
        return 0;
    }
    while (true){
        if (i1 < i2 && i2 > i3){
            count += 1;
        }
        cin >> number;
        if (number == 0){
            break;
        }
        i1 = i2;
        i2 = i3;
        i3 = number;
    }
    cout << count;
}
