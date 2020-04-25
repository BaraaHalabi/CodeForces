#include <iostream>
#include <bits/stdc++.h>
#define var long long
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i < (var)B; i ++)
#define FIO ios::sync_with_stdio(false);
using namespace std;


int main() {
    FIO;
    var T, X, N, M;
    cin >> T;
    while (T --) {
        cin >> X >> N >> M;
        while (N && X > 10)
            X /= 2, X += 10, N --;
        while (M)
            X -= 10, M --;
        cout << (X <= 0 ? "YES" : "NO") << endl;
    }
}
