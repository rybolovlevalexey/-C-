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
    bool natural = true;
    
    for (int i = 0; i < n; i += 1){
        if (i == 0){
            for (int j = 0; j < m; j += 1){
                if (natural){
                    sp[i][j] = number;
                    number += 1;
                    natural = false;
                } else {
                    sp[i][j] = 0;
                    natural = true;
                }
            }
        } else {
            if (sp[i - 1][0] == 0){
                natural = true;
            } else {
                natural = false;
            }
            for (int j = 0; j < m; j += 1){
                if (natural){
                    sp[i][j] = number;
                    number += 1;
                    natural = false;
                } else {
                    sp[i][j] = 0;
                    natural = true;
                }
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
