#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, Number;
    cin >> T;
    while (T --) {
        cin >> Number;
        if (Number == 1) {
            cout << -1 << endl;
            continue;
        }
        cout << 2;
        for (int i = 1; i < Number; i ++)
            cout << 3;
        cout << endl;
    }
}
