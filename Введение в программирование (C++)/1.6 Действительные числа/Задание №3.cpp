  #include <iostream>
#include <cmath>
using namespace std;
int main() {
    double p, s, a, b, c;
    cin >> a >> b >> c;
        p = (a + b + c) / 2.0;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << s;
  return 0;
}
