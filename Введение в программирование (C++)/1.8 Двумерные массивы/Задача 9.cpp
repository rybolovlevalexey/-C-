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
    int number = 1;
    for (int i = 0; i < n; i += 1){
        if (i % 2 == 0){
            for (int j = 0; j < m; j += 1){
                sp[i][j] = number;
                number += 1;
            }
        } else {
            for (int j = m - 1; j >= 0; j -= 1){
                sp[i][j] = number;
                number += 1;
            }
        }
        
    }
    for (int i = 0; i < n; i += 1){
        for (int j = 0; j < m; j += 1){
            int ans = sp[i][j];

            if (ans >= 0 && ans <= 9){
                cout << "   " << ans;
            } else if (ans >= 10 && ans <= 99){
                cout << "  " << ans;
            } else if (ans >= 100 && ans <= 999){
                cout << " " << ans;
            }
        }
        cout << endl;
    }
}
