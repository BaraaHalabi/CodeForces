#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);
#define rep(i, N) for (var i = 0; i < N; i ++)
using namespace std;

int main() {
    FIO;
    var T;
    cin >> T;
    while(T --) {
        vector <string> Board;
        string Row;
        rep(i, 9) {
            cin >> Row;
            rep(j, 9)
                if (Row[j] == '1')
                    Row[j] = '9';
            Board.push_back(Row);
        }
        for (auto i : Board)
            cout << i << endl;
        Board.clear();
    }
}
