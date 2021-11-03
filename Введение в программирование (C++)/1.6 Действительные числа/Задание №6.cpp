#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double a, b, c, d, e, f, g;
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    e = sqrt(d);
    f = (-1 * b + e) / (2 * a);
    g = (-1 * b - e) / (2 * a);
    if (f == g) {
        cout << f;
    }
    if (f > g){
        cout << g << " " << f;
    }
    if (f < g){
        cout << f << " " << g;
    }
    if (d < 0){
        cout << " ";
    }
  return 0;
}
