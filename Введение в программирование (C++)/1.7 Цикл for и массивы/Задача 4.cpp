#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n, count = 0;
    cin >> n;
    int i1, i2;
    cin >> i1;
    cin >> i2;
    for (int i = 0; i + 2 <= n; i++){
        if (i1 < i2){
            cout << i2 << " ";
        }
        if (i + 2 == n){
            return 0;
        }
        i1 = i2;
        cin >> i2;
    }
}
