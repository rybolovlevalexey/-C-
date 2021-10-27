#include <iostream>
using namespace std;
int main() {
  int a, c;
    cin >> a;
    c = 1; 
     while (c * c <= a){ 
        cout << c * c << " "; 
        c = c + 1; 
    }
   
  return 0;
}
