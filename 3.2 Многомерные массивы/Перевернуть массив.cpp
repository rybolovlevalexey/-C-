#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int spisok[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int number;
            cin >> number;
            spisok[n - i - 1][m - j - 1] = number;
        }
    }
    for (int i = 0; i < n; i += 1){
        for (int j = 0; j < m; j += 1){
            cout << spisok[i][j] << " ";
        }
        cout << endl;
    }
}  
