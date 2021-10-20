#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int a1, b1, c1, a2, b2, c2;
    cin >> a1;
    cin >> b1;
    cin >> c1;
    cin >> a2;
    cin >> b2;
    cin >> c2;
    int min1, sr1, max1, min2, sr2, max2;
    
    if (a1 <= b1 && a1 <= c1){
        min1 = a1;
    } else if (b1 <= c1 && b1 <= a1){
        min1 = b1;
    } else{
        min1 = c1;
    }
    if (a1 >= b1 && a1 >= c1){
        max1 = a1;
    } else if (b1 >= c1 && b1 >= a1){
        max1 = b1;
    } else {
        max1 = c1;
    }
    sr1 = a1 + b1 + c1 - max1 - min1;

    if (a2 <= b2 && a2 <= c2){
        min2 = a2;
    } else if (b2 <= c2 && b2 <= a2){
        min2 = b2;
    } else{
        min2 = c2;
    }
    if (a2 >= b2 && a2 >= c2){
        max2 = a2;
    } else if (b2 >= c2 && b2 >= a2){
        max2 = b2;
    } else {
        max2 = c2;
    }
    sr2 = a2 + b2 + c2 - max2 - min2;

    if (min1 == min2 && sr1 == sr2 && max1 == max2){
        cout << "Boxes are equal";
    } else if (min1 <= min2 && sr1 <= sr2 && max1 <= max2){
        cout << "The first box is smaller than the second one";
    } else if (min1 >= min2 && sr1 >= sr2 && max1 >= max2){
        cout << "The first box is larger than the second one";
    } else {
        cout << "Boxes are incomparable";
    }
} 
