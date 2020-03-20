#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int Number, Counter = 0;
    cin >> Number;
    while (Number) {
        if (Number % 2 != 0)
            Counter ++;
        Number /= 2;
    }
    cout << Counter;
}
