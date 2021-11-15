#include <iostream>
#include <cmath>
using namespace std;

long double distance(float x1, float y1, float x2, float y2){
    return pow(((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)), 0.5);
}

int main() {
  float x1, x2, y1, y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cout << distance(x1, y1, x2, y2);
  return 0;
}
