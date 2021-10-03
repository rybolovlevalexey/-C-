#include <iostream>
using namespace std;
int main() {
    char x;
    int delta;
    delta = int(char('A')) - int(char('a'));
    cin >> x;
    cout << char(int(x) + delta);
}
