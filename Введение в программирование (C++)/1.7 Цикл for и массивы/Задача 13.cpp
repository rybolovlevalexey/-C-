#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n, k, count = 0, delta = 1;
    cin >> n >> k;
    vector <string> sp(n);
    for (int i = 0; i <n; i++){
        sp[i] = "I";
    }
    for (int i = 0; i < k; i++){
        int start, finish;
        cin >> start >> finish;
        start -= 1;
        finish -= 1;
        for (int j = start; j <= finish; j++){
            sp[j] = ".";
        }
    }
    for (int i = 0; i < n; i++){
        cout << sp[i];
    }
}
