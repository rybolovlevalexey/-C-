#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int number, i1 = 0, i2 = 1, poz = 2;
    bool flag = false;
    cin >> number;
    if (number == 0){
        cout << 0;
    } else if (number == 1){
        cout << 1;
    } else {
        while (i1 <= number){
            int i = i1 + i2;
            i1 = i2;
            i2 = i;
            if (i2 == number){
                cout << poz;
                flag = true;
                break;
            }
            poz += 1;
        }
    }
    if (!flag){
        cout << -1;
    }
}
