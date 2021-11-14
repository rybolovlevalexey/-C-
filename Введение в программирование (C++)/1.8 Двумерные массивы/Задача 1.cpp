#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int maximum = -1, ansi = -1, ansj = -1;
    for (int i = 0; i < n; i += 1){
        for (int j = 0; j < m; j += 1){
            int number;
            cin >> number;
            if ((i == 0 && j == 0) || number > maximum){
                ansi = i;
                ansj = j;
                maximum = number;
            }
        }
    }
    cout << ansi << " " << ansj;
}
