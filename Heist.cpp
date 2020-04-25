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
    var N, K, Min = 1e9, Max = 0;
    cin >> N;
    set <var> Dis;
    repN(i, N) {
        cin >> K, Dis.insert(K);
        Min = min(Min, K);
        Max = max(Max, K);
    }
    cout << Max - Min + 1 - Dis.size();
}
