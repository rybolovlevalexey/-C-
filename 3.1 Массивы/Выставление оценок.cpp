#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int marks[n];
    for (int i = 0; i < n; i = i + 1){
        int elem;
        cin >> elem;
        marks[i] = elem;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i = i + 1){
        int number;
        cin >> number;
        cout << marks[number - 1] << " ";
    }
}
