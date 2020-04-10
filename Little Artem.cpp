#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    var T, N, M;
    cin >> T;
    while (T --) {
        cin >> N >> M;
        char Paint[N][M];
        for (var i = 0; i < N; i ++)
            for (var j = 0; j < M; j ++)
                Paint[i][j] = 'B';
        Paint[N - 1][M - 1] = 'W';
        for (var i = 0; i < N; i ++) {
            for (var j = 0; j < M; j ++)
                cout << Paint[i][j];
            cout << endl;
        }
    }
}