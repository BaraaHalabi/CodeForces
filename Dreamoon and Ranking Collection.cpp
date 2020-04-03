#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    FIO;
    var T, N, X;
    cin >> T;
    while (T --) {
        cin >> N >> X;
        vector <bool> Pl(100100);
        for (var i = 0, P; i < N; i ++) {
            cin >> P;
            Pl[P - 1] = true;
        }
        for (var i = 0; i < 100100; i ++) {
            if (!Pl[i] && X > 0) {
                Pl[i] = true;
                X --;
            }
        }
        var Counter = 0;
        for (var i = 0; i < 100100; i ++) {
            if (Pl[i])
                Counter ++;
            else
                break;
        }
        cout << Counter << endl;
    }
}
