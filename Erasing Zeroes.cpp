#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
    while (T --) {
        string Str;
        cin >> Str;
        int Min = Str.length(), Max = 0, Counter = 0;
        for (int i = 0; i < Str.length(); i ++) {
            if (Str[i] == '1') {
                Min = min(Min, i);
                Max = max(Max, i);
                Counter ++;
            }
        }
        if (Counter)
            cout << Max - Min - Counter + 1<< endl;
        else
            cout << 0 << endl;
    }
}