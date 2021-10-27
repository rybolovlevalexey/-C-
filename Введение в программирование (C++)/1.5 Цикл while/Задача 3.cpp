#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a, b;
    cin >> a;
    b = 0;
    while(pow(2,b) <= a){
        cout << pow(2,b) <<" ";
        b = b + 1;
    }
  return 0;
}
