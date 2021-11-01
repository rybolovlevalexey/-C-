#include <iostream>
using namespace std;
int main() {
  int n, x, i1 = 0, i2 = 1, f = 0, k = 1, k_max = 0;
  cin >> x;
  while (x != 0){
    if (x == i1){
      k += 1;
    } else {
      if (k > k_max){
        k_max = k;
      }
      k = 1;
    }
    i1 = x;
    cin >> x;
  }
  if (k_max < k){
    cout << k;
  } else {
    cout << k_max;
  }
}
