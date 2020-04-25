#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false); //cin.tie(0);// cout.tie(0);
using namespace std;

int main() {
    var N, K, Prev, Counter = 0, Max = 0;
    cin >> N >> K;
    cin >> Prev;
    for (var i = 1, C; i < N; i ++) {
        cin >> C;
        if (C == Prev)
            Max = max(Max, Counter), Counter = 0;
        else
            Counter ++;
        Prev = C;
    }
    Max = max(Max, Counter);
    cout << ++ Max;
}
