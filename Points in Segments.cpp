#include <iostream>
#include <bits/stdc++.h>
#define var long long
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i < (var)B; i ++)
#define FIO ios::sync_with_stdio(false);
using namespace std;

int main() {
    FIO;
    var N, M, S, E, Cnt = 0;
    cin >> N >> M;
    vector <bool> Axis(M, false);
    repN(i, N) {
        cin >> S >> E;
        rep(j, S, E + 1)
            Axis[j - 1] = true;
    }
    set <var> Points;
    repN(i, M)
        if (!Axis[i])
            Cnt ++, Points.insert(i + 1);
    cout << Cnt << endl;
    for (auto i : Points)
        cout << i << " ";
}
