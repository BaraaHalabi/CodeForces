#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    vector <int> Portals(N - 1);
    for (int i = 0; i < N - 1; i ++)
        cin >> Portals[i];
    int Pos = 1;
    for (int i = 0; i < N - 1; i ++) {
        if (Pos <= N - 1)
            Pos += Portals[Pos - 1];
        //cout << "Current Pos = " << Pos << endl;
        if (Pos == T) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

