#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    long long int a, n, summ = 0;
    cin >> a >> n;
    if (a == 0 || n == 0){
        cout << 1;
    } else {
    for (int i = 0; i <= n; i = i + 1){
        long int res = 1, stepen = i;
        while (stepen > 0){
            res *= a;
            stepen -= 1;
        }
        summ += res;
    }
    cout << summ;
    }
}
