
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int answer = (a > 0) + (b > 0) + (c > 0) + (d > 0) + (e > 0);
    cout << answer;
}
