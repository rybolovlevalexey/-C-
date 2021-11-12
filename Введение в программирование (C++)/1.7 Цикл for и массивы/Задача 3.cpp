#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int number;
        cin >> number;
        if (number > 0){
            count += 1;
        }
    }
    cout << count;
}
