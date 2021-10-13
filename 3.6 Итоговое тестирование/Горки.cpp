#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sp[n];
    for (int i = 0; i < n; i++){
        cin >> sp[i];
    }

    int count = 0;
    for (int i = 1; i + 1 < n; i += 1){
        if (sp[i - 1] < sp[i] && sp[i] > sp[i + 1]){
            count += 1;
        }
    }
    cout << count;
}
