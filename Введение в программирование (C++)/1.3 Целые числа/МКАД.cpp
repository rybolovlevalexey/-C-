#include <iostream>
using namespace std;
int main() {
    // put your code here

      int t, v, s;
        cin >> v >> t;
        if (v > 0){
            s = v * t;
            while (s > 109){
                s = s - 109;
            }
            cout << s;
        } else {
            s = v * t;
            while (s < -109){
                s = s + 109;
            }
            cout << 109 + s;
        }

    return 0;
}
