#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sp[n][n];
    for (int i = 0; i < n; i += 1){
        for (int j = 0; j < n; j += 1){
            cout << abs(i - j) << " ";
        }
        cout << endl;
    }
}
