#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int h, a, b, c, d, e;
    cin >> h >> a >> b;
    c = h - a;
    d = a - b;
    e = round(c / d);
    e = (h - b - 1) / (a - b) + 1;
    cout << e;
  return 0;
}
