#include <iostream>
using namespace std;
int main() {
  int x, y, n, a, b, c, d, f;
    cin >> x >> y >> n;
    a = x * n;
    b = y * n;
    c = b / 100;
    d = a + c;
    f = b % 100;
    cout << d << " " << f;
  return 0;
}
