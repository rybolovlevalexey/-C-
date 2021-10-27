#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int x, y, z, flag;
  flag = 0;
  cin >> x;
  z = 0;
  y = pow(2,z);
  while (x >= y){
    if (x == y){
      cout << "YES";
      flag = 1;
    }
    z = z + 1;
    y = pow(2,z);
  }
  if (flag == 0){
    cout << "NO";
  }
}
