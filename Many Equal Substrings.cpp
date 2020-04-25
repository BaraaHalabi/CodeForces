#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false); cin.tie();
using namespace std;

var OverLap(string S) {
    var N = S.length();
    rep(i, 1, N - 1)
        if(S.substr(i, N - i) == S.substr(0, N - i))
            return N - i;
    return 0;
}

int main() {
    FIO;
    var N, K;
    string S;
    cin >> N >> K >> S;
    var Lap = OverLap(S);
    repN(i, K)
        cout << S.substr(0, N - Lap);
    if (Lap)
        cout << S.substr(0, Lap);
}
