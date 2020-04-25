#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false); //cin.tie(0);// cout.tie(0);
using namespace std;

int main() {
    var N, B, D, E = 0, Curr = 0;
    cin >> N >> B >> D;
    for (var i = 0, O; i < N; i ++) {
        cin >> O;
        if (O <= B)
            Curr += O;
        if (Curr > D)
            E ++, Curr = 0;
    }
    cout << E;
}
