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
    var N, M;
    cin >> N >> M;
    vector <var> Time(N), Pref(N), Srtd;
    repN(i, N)
        cin >> Time[i];
    var Sum = 0;
    repN(i, N)
        Pref[i] = Time[i] + Sum, Sum += Time[i];
    repN(i, N) {
        if (Pref[i] <= M)
            cout << 0 << " ";
        else {
            Srtd.clear();
            repN(j, i)
                Srtd.push_back(Time[j]);
            sort(Srtd.begin(), Srtd.end());
            reverse(Srtd.begin(), Srtd.end());
            var TimeNeed = M - Pref[i], Cnt = 0;
            while (TimeNeed < 0)
                TimeNeed += Srtd[Cnt], Cnt ++;
            cout << Cnt << " ";
        }
    }
}
