#include <iostream>
using namespace std;
int main() {
int x, y;
    y = 0;
	cin >> x;
	while (x != 0) {
		if (x > y){
        y = x;
        }
        cin >> x;
	}
	cout<< y;
  return 0;
}
