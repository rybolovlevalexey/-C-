#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    long int count1 = 0, count2 = 0, count3 = 0, n;
    cin >> n;
    char symvol;
    while (cin >> symvol){
        if (symvol == '.'){
            break;
        }
        if (int(char('A')) <= int(symvol) && int(symvol) <= int(char('Z'))){
            count1 += n;
        }
    }
    cout << count1;
}
