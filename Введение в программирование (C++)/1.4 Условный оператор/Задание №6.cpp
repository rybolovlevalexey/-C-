#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int x1, y1, x2, y2, a;
    cin >> x1 >> y1 >> x2 >> y2;
    a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    if (a < 2){
cout << "YES";
    } else {
        cout << "NO";
    }
  return 0;
}
