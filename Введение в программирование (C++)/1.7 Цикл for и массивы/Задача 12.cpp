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
    for (int i = 0; i < n; i++){
        bool flag = true;
        for (int j = 0; j < n; j++){
            if (i != j && sp[i] == sp[j]){
                flag = false;
                break;
            }
            
        }
        if (flag){
            cout << sp[i] << " ";
        }
    }
}
