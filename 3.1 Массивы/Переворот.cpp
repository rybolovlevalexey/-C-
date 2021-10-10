#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sp[n];
    for (int i = 0; i < n; i = i + 1){
        int elem;
        cin >> elem;
        sp[n - i - 1] = elem;
    }
    for (int i = 0; i < n; i = i + 1){
        cout << sp[i] << " ";
    }
}  
