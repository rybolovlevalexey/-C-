#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 0, count = 0;
    string st;
    getline(cin, st);
    string word_now = "", longest_word = "";
    for (int i = 0; i < st.length(); i += 1){
        string elem;
        elem = st[i];
        if (elem == " "){
            if (word_now.length() > longest_word.length()){
                longest_word = word_now;
            }
            word_now = "";
        } else {
            word_now += elem;
        }
    }
    if (word_now.length() > longest_word.length()){
        longest_word = word_now;
    }
    cout << longest_word;
}
