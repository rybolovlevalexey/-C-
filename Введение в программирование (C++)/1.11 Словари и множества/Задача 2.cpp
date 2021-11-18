#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set <int> mn;
    for (int i = 0; i < n; i += 1){
        int number;
        cin >> number;
        if (mn.find(number) == mn.end()){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
        mn.insert(number);
    }
}
