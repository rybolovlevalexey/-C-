#include <iostream>
using namespace std;
int main() {
  int n, x, i1 = 0, i2 = 1;
  cin >> n;
  if (n == 0){
    cout << 0;
  } else {
    if (n == 1){
      cout << 1;
    } else{
      n -= 2;
      while (n + 1 > 0){
        x = i1 + i2;
        i1 = i2;
        i2 = x;
        n = n - 1;
      }
      cout << x;
    }
  }
}
