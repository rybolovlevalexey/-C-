#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int sp[n][m];
    for (int i = 0; i < n; i += 1){
        for (int j = 0; j < m; j += 1){
            int number;
            cin >> number;
            sp[i][j] = number;
        }
    }
    int k1, k2;
    cin >> k1 >> k2;
    for (int i = 0; i < n; i += 1){
        for (int j = 0; j < m; j += 1){
            if (j == k1){
                cout << sp[i][k2] << " ";
            } else if (j == k2){
                cout << sp[i][k1] << " ";
            } else {
                cout << sp[i][j] << " ";
            }
        }
        cout << endl;
    }
}
