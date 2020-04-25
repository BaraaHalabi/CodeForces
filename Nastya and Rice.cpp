#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false); cin.tie();
using namespace std;

int main() {
    FIO;
    var T, N, A, B, C, D;
    cin >> T;
    while (T --) {
        cin >> N >> A >> B >> C >> D;
        cout << (N * (A + B) >= (C - D) && N * (A - B) <= (C + D) ? "Yes" : "No") << endl;
    }
}

