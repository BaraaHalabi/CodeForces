#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);
#define rep(i, N) for (auto i = 0; i < N; i ++)
using namespace std;

int main() {
    FIO;
    var T, C;
    cin >> T;
    while (T --) {
        cin >> C;
        cout << fixed << setprecision(0) << ceil(C / 2.0) - 1 << '\n';
    }
}
