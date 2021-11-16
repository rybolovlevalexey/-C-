#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    char letter;
    cin >> letter;
    if (97 <= int(letter) && int(letter) <= 122){
        cout << char(int(letter) - 32);
    } else if (65 <= int(letter) && int(letter) <= 90){
        cout << char(int(letter) + 32);
    } else {
        cout << letter;
    }
}
