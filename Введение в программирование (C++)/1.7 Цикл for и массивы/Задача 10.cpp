#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n, count = 0, delta = 1;
    cin >> n;
    vector <int> sp(n);
    for (int j = 0; j < n; j++){
        int x;
        cin >> x;
        sp[j] = x;
    }
    vector <int> new_sp(n);
    for (int j = 0; j < n; j += 1){
        new_sp[(j + delta) % n] = sp[j];
    }
    for (auto num : new_sp) cout << num << " ";
}
