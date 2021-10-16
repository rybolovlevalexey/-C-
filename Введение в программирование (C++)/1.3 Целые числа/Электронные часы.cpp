#include <iostream>
using namespace std;
int main() {
  int a, b, c, d, f, n;
    cin >> n;
    a = n / 3600;
    f = a;
    while (f >= 24){
        f = f - 24;
    }
    b = n - (a * 3600);
    c = b % 60;
    d = b / 60;
    if ((c < 10) && (d > 9)){
       cout << f << ":" << d << ":" << "0" << c;
    }
    if ((c > 9) && (d < 10)){
       cout << f << ":" << "0" << d << ":" << c;
    }
    if ((c < 10) && (d < 10)){
        cout << f << ":" << "0" << d << ":" << "0" << c;
    }
    if ((c > 9) && (d > 9)){        
    cout << f << ":" << d << ":" << c;
    }
  return 0;
}
