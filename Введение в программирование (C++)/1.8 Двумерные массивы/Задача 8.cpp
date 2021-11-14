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
    for (int j = 0; j < m; j += 1){
        for (int i = n - 1; i >= 0; i -= 1){
            cout << sp[i][j] << " ";
        }
        cout << endl;
    }
}
