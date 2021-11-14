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
    int k;
    cin >> k;
    for (int i = 0; i < n; i += 1){
        for (int j = 0; j < n; j += 1){
            if (i + k < n && i + k >= 0 && i == j){
                cout << sp[i + k][j] << " ";
            }
        }
    }
}
