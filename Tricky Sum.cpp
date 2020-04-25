#include <iostream>
#include <bits/stdc++.h>
#define var long long
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i < (var)B; i ++)
#define FIO ios::sync_with_stdio(false);
using namespace std;

vector <var> PowersOfTwo;

var ArithSeqSum(var F, var T, var D) {
    return (T / 2.0) * (2 * F + (T - 1) * D);
}

void GetPowOfTwo() {
    var N = 1;
    while (N < (int)1e9)
        PowersOfTwo.push_back(N), N *= 2;
}

int main() {
    FIO;
    var T, N;
    GetPowOfTwo();
    cin >> T;
    while (T --) {
        cin >> N;
        var Res = ArithSeqSum(1, N, 1);
        auto END = upper_bound(PowersOfTwo.begin(), PowersOfTwo.end(), N);
        for (auto it = PowersOfTwo.begin(); it != END; it ++)
            Res -= 2 * (*it);
        cout << Res << endl;
    }
}
