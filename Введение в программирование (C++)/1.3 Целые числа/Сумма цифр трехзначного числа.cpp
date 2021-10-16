#include <iostream>
using namespace std;
int main() {
  int x,y,z,a, sum;
      cin >> a;
    x= a / 100;
    y= a % 10;
    z= a / 10 % 10;
    sum = x + y + z;
    cout << sum;
  return 0;
}
