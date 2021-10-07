#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        int jmin = i;
        for (int j = i + 1; j < n; j++){
            if (a[jmin] > a[j]){
                jmin = j;
            }
        }
        swap(a[i], a[jmin]);

    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
