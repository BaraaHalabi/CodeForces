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
        string Map;
        var Counter = 0, Max = 0;
        cin >> Map;
        Map = "R" + Map;
        Map += "R";
        for (var i = 0; i < Map.length(); i ++)
            if (Map[i] == 'R')
                Max = max(Max, Counter), Counter = 0;
            else
                Counter ++;
        cout << Max + 1 << endl;
    }
}
