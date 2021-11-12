#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n, count = 0, delta = 1;
    cin >> n;
    vector <int> sp(n);
    for (int i = 0; i < n; i++){
        int number;
        cin >> number;
        sp[i] = number;
    }
    for (int i = 0; i + 1 < n; i++){
        for (int j = i + 1; j < n; j++){
            if (sp[i] == sp[j]){
                count++;
            }
        }
    }
    cout << count;
}
