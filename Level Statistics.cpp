#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false); //cin.tie(0);// cout.tie(0);
using namespace std;

int main() {
    FIO;
    var T;
    cin >> T;
    while (T --) {
        var N, P, C, PP, PC;
        bool Possible = true;
        cin >> N >> P >> C;
        if (C > P)
            Possible = false;
        PP = P, PC = C;
        for (var i = 1; i < N; i ++) {
            cin >> P >> C;
            if (P < PP)
                Possible = false;
            if (C < PC)
                Possible = false;
            if (C > P)
                Possible = false;
            if (C > PC && P < PP + C - PC)
                Possible = false;
            PP = P, PC = C;
        }
        cout << (Possible ? "YES" : "NO") << endl;
    }
}
