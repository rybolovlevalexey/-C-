#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e, f, g;
  cin >> a;
    b = a / 1000;
    e = a % 10;
    f = a / 100;   
    c = f % 10;    
    g = a % 100;
    d = g / 10;
        if ((b == e) && (c == d)){
            cout << "1";
        } else {
            cout << "2";
        }
  return 0;
}
