#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int x, y, z, flag, a, b, c, d;
  cin >> a >> b >> c;
  x = 0; //большее число
  if (x < a){
    x = a;
  }
  if (x < b){
    x = b;
  }
  if (x < c){
    x = c;
  }
  y = a; //меньшее число
  if(b < y){
    y = b;
  }
  if (c < y){
    y = c;
  }
  d = a + b + c;
  z = d - x - y;
  cout << y << " " << z << " " << x;
}
