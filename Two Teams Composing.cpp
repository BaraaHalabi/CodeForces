#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);
#define rep(i, N) for (var i = 0; i < N; i ++)
using namespace std;

map <var, var> Cnt;
set <var> S;

int main() {
    FIO;
    var T;
    cin >> T;
    while(T --) {
        var N;
        cin >> N;
        Cnt.clear();
        S.clear();
        var In;
        rep(i, N) {
            cin >> In;
            Cnt[In]++;
            S.insert(In);
        }
        var most = 0, mem;
        for(auto mm : Cnt) {
            if(mm.second>most) {
                most = mm.second;
                mem = mm.first;
            }
        }
        S.erase(mem);
        var ans = min((var)S.size(), Cnt[mem]);
        ans = max(ans, min((var)S.size()+1, Cnt[mem]-1));
        cout << ans << endl;
    }
}
