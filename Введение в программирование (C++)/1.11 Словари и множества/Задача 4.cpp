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
    set <int> mn2;
    for (int i = 0; i < m; i += 1){
        int number;
        cin >> number;
        mn2.insert(number);
    }
    for (auto num : mn){
        if (mn2.find(num) != mn2.end()){
            cout << num << " ";
        }
    }
}
