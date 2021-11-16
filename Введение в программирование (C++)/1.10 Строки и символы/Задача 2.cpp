#include <iostream>
#include <string>
using namespace std;
//97 от a 
//122 до z
//65 от A
//90 до Z
int main() {
  char c;
  int a, b, d;
  cin >> c;
  if (((int) c >= 97) && ((int) c <= 122)){
    a = (int) c;
    a = a - 32;
    c = (char) a;
    cout << c;
  } else {
    cout << c;
  }
}
