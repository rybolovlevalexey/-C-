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
        mn.insert(number);
    }
    int m, cnt = 0;
    cin >> m;
    for (int i = 0; i < m; i += 1){
        int number;
        cin >> number;
        if (mn.find(number) == mn.end()){
            continue;
        } else {
            cnt++;
        }
    }
    cout << cnt;
}
