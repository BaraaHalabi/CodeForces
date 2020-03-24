#include <iostream>
#include <bits/stdc++.h>
#define var long long int
using namespace std;

int Number, Counter = 0;
set <var> Numbers;
void Sol (var i, var Curr) {
    if (i == 9)
        return;
    Curr *= 10;
    Numbers.insert(Curr + 4);
    Sol(i + 1, Curr + 4);
    Numbers.insert(Curr + 7);
    Sol(i + 1, Curr + 7);
    return;
}

int main() {
    cin >> Number;
    Sol(0, 0);
    int Counter = 1;
    for (auto N : Numbers) {
        if (N == Number)
            cout << Counter;
        ++ Counter;
    }
}

