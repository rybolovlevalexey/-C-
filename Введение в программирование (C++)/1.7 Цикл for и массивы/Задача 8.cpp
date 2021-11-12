#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n, count = 0;
    cin >> n;
    vector <int> sp;
    for (int j = 0; j < n; j++){
        int x;
        cin >> x;
        if (sp.size() == 0 || x != sp[sp.size() - 1]){
            sp.push_back(x);
        }
    }
    cout << sp.size();
}
