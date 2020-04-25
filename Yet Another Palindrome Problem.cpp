#include <iostream>
#include <bits/stdc++.h>
#define var long long
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i < (var)B; i ++)
#define FIO ios::sync_with_stdio(false);
using namespace std;

int main() {
    FIO;
    var T;
    cin >> T;
    while (T --) {
        var N;
        cin >> N;
        bool Possible = false;
        vector <var> Pal(N);
        repN(i, N)
            cin >> Pal[i];
        repN(i, N - 2)
            rep(j, i + 2, N)
                if (Pal[i] == Pal[j])
                    Possible = true;
        cout << (Possible ? "YES" : "NO") << endl;
    }
}
