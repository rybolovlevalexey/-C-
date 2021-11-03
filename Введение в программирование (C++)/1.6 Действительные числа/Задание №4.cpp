#include <iostream>
using namespace std;
int main() {
  int x, y, c;
  double p;
  cin >> p;
  cin >> x;
  cin >> y;
  p = p / 100;
  c = x * 100 + y;
  c = c + c * p;
  cout << c / 100 << " " << c - (c / 100) * 100;
}
