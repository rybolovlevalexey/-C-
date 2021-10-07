#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int a, b, c, maximum, minimum;
    cin >> a >> b >> c;
    
    if (a <= b && a <= c){
        minimum = a;
    } else if (b <= c && b <= a){
        minimum = b;
    } else {
        minimum = c;
    }

    if (a >= b && a >= c){
        maximum = a;
    } else if (b >= c && b >= a){
        maximum = b;
    } else {
        maximum = c;
    }

    cout << minimum << " " << a + b + c - maximum - minimum << " " << maximum;
}
