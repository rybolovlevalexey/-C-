#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    char a;
    cin >> a;
    if (int(char('a')) <= int(a) && int(a) <= int(char('z'))){
        cout << "small";
    } else {
        cout << "BIG";
    }
}
