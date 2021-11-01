#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int maximum = 0, pre_maximum = 0, number = -1, i = 0;
    while (number != 0){
        cin >> number;
        i += 1;
        if (i == 1){
            maximum = number;
            pre_maximum = number;
        } else if (i == 2){
            if (number >= maximum){
                maximum = number;
            } else {
                pre_maximum = number;
            } 
        } else{
            if (number >= maximum){
                pre_maximum = maximum;
                maximum = number;
            } else if(number < maximum && number > pre_maximum){
                pre_maximum = number;
            }
        }


    }
    cout << pre_maximum;
}
