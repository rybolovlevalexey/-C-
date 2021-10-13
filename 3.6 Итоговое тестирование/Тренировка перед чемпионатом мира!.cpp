#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int pozi = 0, pozj = 0;
    int field[8][8];
    // считывание поля
    for (int i = 0; i < 8; i += 1){
        for (int j = 0; j < 8; j += 1){
            char elem;
            cin >> elem;
            if (elem == 'F'){
                pozi = i;
                pozj = j;
            }
            field[i][j] = int(elem);
        }
    }

    // обработка поля
    // горизонталь
    for (int j = 0; j < 8; j += 1){
        if (j != pozj){
            field[pozi][j] = int(char('!'));
        }
    }
    // вертикаль
    for (int i = 0; i < 8; i += 1){
        if (i != pozi){
            field[i][pozj] = int(char('!'));
        }
    }
    // ввлево-вверх
    int pozi1 = pozi - 1, pozj1 = pozj - 1;
    while (pozi1 >= 0 && pozj1 >= 0){
        field[pozi1][pozj1] = int('!');
        pozi1 -= 1;
        pozj1 -= 1;
    }
    // вправо-вниз
    pozi1 = pozi + 1;
    pozj1 = pozj + 1;
    while (pozi1 < 8 && pozj1 < 8){
        field[pozi1][pozj1] = int('!');
        pozi1 += 1;
        pozj1 += 1;
    }
    // вправо вверх
    pozi1 = pozi - 1;
    pozj1 = pozj + 1;
    while (8 > pozi1 && pozi1 >= 0 && 0 <= pozj1 && pozj1 < 8){
        field[pozi1][pozj1] = int('!');
        pozi1 -= 1;
        pozj1 += 1;
    }
    // влево-вниз
    pozi1 = pozi + 1;
    pozj1 = pozj - 1;
    while (8 > pozi1 && pozi1 >= 0 && 0 <= pozj1 && pozj1 < 8){
        field[pozi1][pozj1] = int('!');
        pozi1 += 1;
        pozj1 -= 1;
    }

    // вывод поля
    for (int i = 0; i < 8; i += 1){
        for (int j = 0; j < 8; j += 1){
            cout << char(field[i][j]);
        }
        cout << endl;
    }
}
