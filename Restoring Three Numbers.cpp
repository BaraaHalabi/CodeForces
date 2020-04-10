#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;
 
int main() {
    FIO;
    var Max = 0;
    vector <var> Numbers(4);
    for (var i = 0; i < 4; i ++) {
        cin >> Numbers[i];
        Max = max(Max, Numbers[i]);
    }
    for (auto i : Numbers)
        if (Max != i)
            cout << Max - i << " ";
}