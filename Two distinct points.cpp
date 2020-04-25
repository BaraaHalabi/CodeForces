#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false); //cin.tie(0);// cout.tie(0);
using namespace std;

int main() {
    var T;
    cin >> T;
    while (T --) {
        var L1, R1, L2, R2;
        cin >> L1 >> R1 >> L2 >> R2;
        var A = min(L1, R1), B = max(L2, R2);
        if (A != B)
            cout << A << " " << B << endl;
        else
            cout << A << " " << B - 1 << endl;
    }
}
