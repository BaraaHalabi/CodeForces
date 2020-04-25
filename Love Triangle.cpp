#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false);
using namespace std;

int main() {
    var N;
    bool Cyclic = false;
    cin >> N;
    var Rel[N + 1];
    rep(i, 1, N)
        cin >> Rel[i];
    rep(i, 1, N)
        if(Rel[Rel[Rel[i]]] == i)
            Cyclic = true;
    cout << (Cyclic ? "YES" : "NO");
}
