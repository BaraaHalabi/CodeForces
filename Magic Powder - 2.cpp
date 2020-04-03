#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;

vector <var> Req, Pre;

bool Can(var Cookies, var MPowder) {
    for (var i = 0; i < Req.size(); i ++) {
        if (Cookies * Req[i] - Pre[i] > 0)
            MPowder -= Cookies * Req[i] - Pre[i];
        if (MPowder < 0)
            break;
    }
    return (MPowder >= 0) ? true : false;
}

int main() {
    FIO;
    var N, K;
    cin >> N >> K;
    Req.resize(N);
    Pre.resize(N);
    for (var i = 0; i < N; i ++)
        cin >> Req[i];
    for (var i = 0; i < N; i ++)
        cin >> Pre[i];
    var L = 1, R = 2 * 1e9, M;
    while (L <= R) {
        M = (L + R) / 2;
        if (Can(M, K)) {
            L = M + 1;
        } else
            R = M - 1;
    }
    cout << R;
}
