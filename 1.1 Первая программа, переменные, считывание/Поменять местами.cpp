#include <iostream>

using namespace std;

int main() {
	//Пишите ваше решение здесь
    int x;
    cin >> x;
    cout << x / 1000 << x % 100 / 10 << x % 1000 / 100 << x % 10;
}
