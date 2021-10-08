#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int znak = 1;
    long long int a, n, summ = 0;
    cin >> a >> n;
    if (a == 0 || n == 0){
        cout << 1;
    } else {
    for (int i = 0; i <= n; i = i + 1){
        long int res = 1, stepen = i;
        res = pow(a, stepen);
        
        if (znak == 1){
            summ += res;
            znak = 2;
        } else {
            summ -= res;
            znak = 1;
        }
        
    }
    cout << summ;
    }
}
