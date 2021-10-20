#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int n, m, x, y, min_bort, max_bort;
    cin >> n;
    cin >> m;
    cin >> x;
    cin >> y;
    if (n < m){
        min_bort = n;
        max_bort = m;
    } else {
        min_bort = m;
        max_bort = n;
    }
    int dist1 = min_bort - x, dist2 = max_bort - y;
    int sp[4];
    sp[0] = dist1;
    sp[1] = dist2;
    sp[2] = x;
    sp[3] = y;
    int minimum = sp[0];
    for (int i = 0; i < 4; i += 1){
        if (minimum > sp[i]){
            minimum = sp[i];
        }
    }
    cout << minimum;
} 
