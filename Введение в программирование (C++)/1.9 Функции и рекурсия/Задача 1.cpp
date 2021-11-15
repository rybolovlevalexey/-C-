#include <iostream>
using namespace std;

int min(int a, int b){
    if (a < b){
        return a;
    } else {
        return b;
    }
}

int min4(int a, int b, int c, int d){
    return min(min(a, b), min(c, d));
}

int main() {
  int x1, x2, x3, x4;
    cin >> x1;
    cin >> x2;
    cin >> x3;
    cin >> x4;
    cout << min4(x1, x2, x3, x4);
  return 0;
}
