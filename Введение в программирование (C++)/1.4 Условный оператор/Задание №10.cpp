#include <iostream>
using namespace std;
int main() {
  int n, m, k, flag = 0, i = 1;
    cin >> n >> m >> k;
    while (flag == 0){
        while (i <= n){
            if (i * m == k){
                flag = 1;
                break;
            }
            i++;
        }
        i = 0;
        while (i <= m){
            if (i * n == k){
                flag = 1;
                break;
            }
            i++;
        }
        break;
    }
    if (flag == 1){
        cout << "YES";
    } else {
        cout << "NO";
    }
  return 0;
}
