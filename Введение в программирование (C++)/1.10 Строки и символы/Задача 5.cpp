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
    string newst;
    for (int i = st.length() - 1; i >= 0; i -= 1){
        newst += st[i];
    }
    if (st == newst){
        cout << "yes";
    } else {
        cout << "no";
    }
}
