#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> sp;
    for (int j = 0; j < n; j++){
        int number;
        cin >> number;
        if (number % 2 != 0){
            sp.push_back(number);
        }
    }
    if (sp.size() > 0){
        int minimum = sp[0];
        for (int j = 0; j < sp.size(); j++){
            if (minimum > sp[j]){
                minimum = sp[j];
            }
        }
        cout << minimum;
    } else {
        cout << 0;
    }
}
