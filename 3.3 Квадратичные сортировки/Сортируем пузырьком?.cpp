#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        for (int j = 0; j + 1 < n; j++){
            if (a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                count += 1;
            }
        }
    }
    cout << count;
}
