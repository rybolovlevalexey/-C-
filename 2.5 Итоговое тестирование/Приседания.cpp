#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    long int count1 = 0, count2 = 0, count3 = 0, n;
    cin >> n;
    for (int i=1; i <= n; i = i + 1){
        if (i % 3 != 0 && i % 5 != 0){
            continue;
        } else if (i % 3 == 0 && i % 5 != 0){
            count1 += 1;
        } else if (i % 3 != 0 && i % 5 == 0){
            count2 += 1;
        } else if (i % 3 == 0 && i % 5 == 0){
            count3 += 1;
        }
    }
    cout << count1 << " " << count2 << " " << count3;
}
