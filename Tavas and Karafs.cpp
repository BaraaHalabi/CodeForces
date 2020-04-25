#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false);
using namespace std;

int main() {
    FIO;
    var N, A, B, L, T, M;
    cin >> A >> B >> N;
    repN(i, N) {
        cin >> L >> T >> M;
        int Left = L, Right = (var)1e9, Mid;
        while (Left <= Right) {
            Mid = (Left + Right) / 2;
            var Number = (2 * A + (L + Mid - 2) * B) * (Mid - L + 1) / 2;
            if (A + B * (Mid - 1) > T || Number > M * T)
                Right = Mid - 1;
            else
                Left = Mid + 1;
        }
        cout << (Right >= L ? Right : -1) << endl;
    }
}
