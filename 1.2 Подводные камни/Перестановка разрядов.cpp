#include <iostream>

using namespace std;

int main() {
	//Пишите ваше решение здесь
    int x;
    cin >> x;
    x = x * (-1);
    x = (x / 1000 * 1000 + x % 100 / 10 * 100 + x % 1000 / 100 * 10 + x % 10) * -1;
    cout << x;
}
