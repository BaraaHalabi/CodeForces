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
    var T, N;
    cin >> T;
    while(T --) {
        cin >> N;
        vector <var> P(N);
        map <var, var> Cnt;
        bool Can = true;
        repN(i, N)
            cin >> P[i], Cnt[P[i]] = i;
        rep(i, 2, N)
            if (Cnt[i] > Cnt[i - 1] + 1)
                Can = false;
        cout << (Can ? "Yes" : "No") << endl;
    }
}
