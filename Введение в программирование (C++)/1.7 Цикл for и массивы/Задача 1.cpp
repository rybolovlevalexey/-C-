#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sp[n];
    for (int i = 0; i < n; i += 1){
        int number;
        cin >> number;
        if (i % 2 == 0){
            cout << number << " ";
        }
    }
}
