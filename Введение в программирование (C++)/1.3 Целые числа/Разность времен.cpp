#include <iostream>
using namespace std;
int main() {
  int a, b, c, d, e, f, g, h, x;
    cin >> a >> b >> c >> d >> e >> f;
    g = a * 3600 + b * 60 + c;
    h = d * 3600 + e * 60 + f;
    x = h - g;
    cout << x;
  return 0;
}
