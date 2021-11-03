#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
  	double a, b, c, d;
	b = 0;
	c = 0;
	cin >> a;
	while (a != 0) {
		b = b + a;
		c = c + 1;
		cin >> a;
	}
	d = b / c;
    cout << setprecision(11) << fixed;
	cout << d;
  return 0;
}
