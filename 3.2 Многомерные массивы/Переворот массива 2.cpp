#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int spisok[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> spisok[n - j - 1][n - i - 1];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << spisok[i][j] << " ";
        }
        cout << endl;
    }
} 
