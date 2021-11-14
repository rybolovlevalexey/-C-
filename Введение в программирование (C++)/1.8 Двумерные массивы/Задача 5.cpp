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
            int number;
            cin >> number;
            sp[i][j] = number;
        }
    }
    bool ans = true;
    for (int i = 0; i < n; i += 1){
        for (int j = i + 1; j < n; j += 1){
            if (sp[i][j] != sp[j][i]){
                ans = false;
            }
        }
    }
    if (ans){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
