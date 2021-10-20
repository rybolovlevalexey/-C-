#include <iostream>
using namespace std;
int main() {
  int a, b, c, x;
    cin >> a >> b >> c; 
    x = 0;
    if ((a >= b) && (a >= c) && (x == 0)){
        cout << a;
        x = 1;
    }
    if ((b >= a) && (b >= c) && (x == 0)){
        cout << b;
        x = 1;
    }
    if ((c >= a) && (c >= b) && (x == 0)){
        cout << c;
        x = 1;
    }
  return 0;
}
