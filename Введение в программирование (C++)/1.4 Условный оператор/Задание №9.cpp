#include <iostream>
#include <cmath>

int main()
{
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    if (fabs(x1 - x2) == 2 && fabs(y1 - y2) == 1 ||
        fabs(x1 - x2) == 1 && fabs(y1 - y2) == 2) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}
