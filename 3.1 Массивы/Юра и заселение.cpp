#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    int n, count = 0;
    cin >> n;
    int peoples_in_room[n];
    for (int i = 0; i < n; i += 1){
        int elem;
        cin >> elem;
        peoples_in_room[i] = elem;
    }
    for (int i = 0; i < n; i += 1){
        int can_live;
        cin >> can_live;
        if (can_live - peoples_in_room[i] >= 2){
            count += 1;
        }
    }
    cout << count;
}
