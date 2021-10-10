#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int n, count = 0;
    cin >> n;
    int chetn[n], notchetn[n], count_che = 0, count_notch = 0;
    for (int i = 0; i < n; i += 1){
        int number;
        cin >> number;
        if (number % 2 == 0){
            chetn[count_che] = number;
            count_che += 1;
        } else {
            notchetn[count_notch] = number;
            count_notch += 1;
        }
    }
    for (int i = 0; i < count_che; i += 1){
        cout << chetn[i] << " ";
    }
    for (int i = 0; i < count_notch; i += 1){
        cout << notchetn[i] << " ";
    }
}
