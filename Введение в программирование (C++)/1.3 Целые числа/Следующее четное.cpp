#include <iostream>
using namespace std;
int main() {
  int a, b, c, d;
    cin >> a;
    c = a + 2;
    d = a + 1;
    b = a % 2;
    if (b == 0){
   cout << c;
    }
    if (b != 0){
    cout << d;
    }
  return 0;
}
