#include <iostream>
using namespace std;
int main() {
  int x, y, z, max, k = 1;
    cin >> x;
    max = 0;
    while (x != 0){
        if (max < x){
            max = x;
            k = 1;
        } else {
            if (x == max){
                k++;
            }
        }
        cin >> x;
    }
    cout << k;
              
  return 0;
}
