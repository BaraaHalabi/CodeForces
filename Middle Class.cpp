#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false); //cin.tie(0);// cout.tie(0);
using namespace std;

int main() {
    FIO;
    var T;
    cin >> T;
    while (T --) {
        var N, X, Sum = 0;
        bool Possible = false;
        cin >> N >> X;
        vector <var> Numbers(N);
        for (var i = 0; i < N; i ++) {
            cin >> Numbers[i];
            Sum += Numbers[i];
            if (Numbers[i] >= X)
                Possible = true;
        }
        sort(Numbers.begin(), Numbers.end());
        if (!Possible) {
            cout << 0 << endl;
            continue;
        }
        double AVG = (double)Sum / N;
        //cout << "AVG = " << AVG;
        if (AVG >= X) {
            cout << N << endl;
            continue;
        }
        for (auto i : Numbers) {
            Sum -= i, N --;
            AVG = (double)Sum / N;
            if (AVG >= X)
                break;
        }
        cout << N << endl;
    }
}
