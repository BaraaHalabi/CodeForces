#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T, X, Y, A, B;
    cin >> T;
    for (int i = 0; i < T; i ++) {
        cin >> X >> Y >> A >> B;
        if ((Y - X) % (A + B) == 0)
            cout << (Y - X) / (A + B) << endl;
        else 
            cout << -1 << endl;
    }
}