#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, string> dict;
    for (int i = 0; i < n; i += 1){
        string s1, s2;
        cin >> s1 >> s2;
        dict[s1] = s2;
        dict[s2] = s1;
    }
    string word;
    cin >> word;
    cout << dict[word];
}
