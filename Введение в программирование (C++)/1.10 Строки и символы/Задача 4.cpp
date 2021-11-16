#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 0, m, start = 0;
    string st;
    getline(cin, st);
    for (auto c : st){
        if (isspace(c)){
            n += 1;
        }
    }
    cout << n + 1;
}
