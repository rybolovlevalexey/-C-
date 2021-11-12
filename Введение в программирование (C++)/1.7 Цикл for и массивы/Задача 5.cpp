#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> spisok(n);
    for (int j = 0; j < n; j++){
        int number;
        cin >> number;
        spisok[j] = number;
    }
    for (int j = 0; j + 1 < n; j++){
        if (spisok[j] * spisok[j + 1] > 0){
            int a = spisok[j], b = spisok[j + 1];
            if (a >= b){
                cout << b << " " << a;
            } else {
                cout << a << " " << b;
            }
            return 0;
        }
    }
}
