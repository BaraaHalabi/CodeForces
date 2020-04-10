#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false); cin.tie(0);// cout.tie(0);
using namespace std;

char Pasture[510][510];

bool AdjWolf (var i, var j, var X, var Y) {
    if (Pasture[i][j] == 'S') {
        if (i < X - 1 && Pasture[i + 1][j] == 'W')
            return true;
        if (i > 0 && Pasture[i - 1][j] == 'W')
            return true;
        if (j < Y - 1 && Pasture[i][j + 1] == 'W')
            return true;
        if (j > 0 && Pasture[i][j - 1] == 'W')
            return true;
    }
    return false;
}

void FillDogs (var X, var Y) {
    for (var i = 0; i < X; i ++)
        for (var j = 0; j < Y; j ++)
            if (Pasture[i][j] == '.')
                Pasture[i][j] = 'D';
}

int main() {
    FIO;
    int X, Y;
    cin >> X >> Y;
    for (var i = 0; i < X; i ++)
        for (var j = 0; j < Y; j ++)
            cin >> Pasture[i][j];
    bool Possible = true;
    for (var i = 0; i < X; i ++)
        for (var j = 0; j < Y; j ++)
            if (AdjWolf(i, j, X, Y))
                Possible = false;
    if (Possible)
        cout << "Yes" << endl;
    else {
        cout << "No";
        return 0;
    }
    FillDogs(X, Y);
    for (var i = 0; i < X; i ++) {
        for (var j = 0; j < Y; j ++)
            cout << Pasture[i][j];
        cout << endl;
    }
}
