#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sp[n];
    long int min, max;
    for (int i = 0; i < n; i = i + 1){
        int elem;
        cin >> elem;
        sp[i] = elem;
        if (i == 0 || min > elem){
            min = elem;
        }
        if (i == 0 || max < elem){
            max = elem;
        }
    }
    for (int i = 0; i < n; i = i + 1){
        if (sp[i] == max){
            cout << min << " ";
        } else if (sp[i] == min){
            cout << max << " ";
        } else {
            cout << sp[i] << " ";
        }
    }
}
