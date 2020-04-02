#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;

var NegSum(vector <var> Numbers) {
    var Result = 0;
    for (auto i : Numbers)
        if (i < 0)
            Result -= i;
    return Result;
}

int main() {
    FIO;
    var N, K, Cookies = 0;
    cin >> N >> K;
    vector <var> Pre(N), Nee(N), Req(N);
    vector <bool> Left(N);
    for (var i = 0; i < N; i ++)
        cin >> Nee[i];
    var MinIng = 1e3;
    for (var i = 0; i < N; i ++) {
        cin >> Pre[i];
        MinIng = min(MinIng, Pre[i] / Nee[i]);
    }
    Cookies += MinIng;
    for (var i = 0; i < N; i ++) {
        Pre[i] -= MinIng * Nee[i];
        Req[i] = Pre[i] - Nee[i];
        if (Req[i] < 0)
            Left[i] = true;
    }
    var CurrNeed = NegSum(Req);
    while (K >= CurrNeed) {
        ++ Cookies;
        K -= CurrNeed;
        for (var i = 0; i < Req.size(); i ++) {
            if (Req[i] >= 0)
                Req[i] -= Nee[i];
            if (Req[i] < 0 && !Left[i])
                Left[i] = true;
            else if (Req[i] < 0 && Left[i])
                Req[i] = -Nee[i];
        }
        CurrNeed = NegSum(Req);
    }
    cout << Cookies;
}
