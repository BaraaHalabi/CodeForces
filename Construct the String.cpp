#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);
#define rep(i, N) for (auto i = 0; i < N; i ++)
using namespace std;

int main() {
    FIO;
    var T;
    cin >> T;
    while (T --) {
        var N, A, B, Counter = 1;
        cin >> N >> A >> B;
        rep(i, N) {
            if (Counter > B)
                Counter = 1;
            cout << char(Counter - 1 + 'a');
            Counter ++;
        }
        cout << endl;
    }
}
