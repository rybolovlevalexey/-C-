#include <iostream>

using namespace std;

int main() {
	//Пишите ваше решение здесь
    long a, b;
    cin >> a >> b;
    cout << (a % b + b) % b;
}
