#include <iostream>
using namespace std;
int main() {
  int x1, y1, x2, y2, a, b, c, d;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 < x2){
        a = x1; //меньшая ордината
        b = x2; //большая ордината
    } else {
        a = x2;
        b = x1;
    }
    if (y1 < y2){
      c = y1; //меньшая абцисса
      d = y2;
    } else {
      d = y1;
      c = y2;
    }
    if (b - a == d - c){
      cout << "YES";
    } else {
      cout << "NO";
    }
  return 0;
}
