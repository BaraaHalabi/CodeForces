#include <iostream>
#include <bits/stdc++.h>
#define var long long int
using namespace std;

int main() {
    string Str;
    cin >> Str;
    vector <int> Bits(Str.length());
    char Last;
    for (int i = 0; i < Str.length(); i ++) {
        if (i && Str[i] == Last)
            Bits[i - 1] = 1;
        Last = Str[i];
    }
    int Sum = 0;
    for (int i = 0; i < Bits.size(); i ++) {
        Bits[i] = Bits[i] + Sum;
        Sum = Bits[i];
    }
    int Q, L, R, Answer;
    cin >> Q;
    while (Q --) {
        cin >> L >> R;
        -- L;
        -- R;
        if (L)
            Answer = Bits[-- R] - Bits[-- L];
        else
            Answer = Bits[-- R];
        cout << Answer << endl;
    }
}