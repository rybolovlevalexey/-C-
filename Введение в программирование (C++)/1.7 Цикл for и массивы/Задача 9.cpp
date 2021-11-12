#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n, count = 0;
    cin >> n;
    vector <int> sp(n);
    for (int j = 0; j < n; j++){
        int x;
        cin >> x;
        sp[j] = x;
    }
    for (int j = 0; j < n - n % 2 - 1; j += 2){
        int i1 = sp[j], i2 = sp[j + 1];
        sp[j] = i2;
        sp[j + 1] = i1;
    }
    for (auto num : sp) cout << num << " ";
}
