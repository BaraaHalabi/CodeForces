#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int ABS (int Number) {
    if (Number >= 0)
        return Number;
    else
        return -Number;
}
 
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i ++) {
        int C, Numbers[100];
        cin >> C;
        bool Flag = true;
        for (int j = 0; j < C; j ++) {
            cin >> Numbers[j];
        }
        for (int j = 1; j < C; j ++) {
            if (ABS(Numbers[j] - Numbers[j - 1]) % 2 != 0)
                Flag = false;
        }
        cout << (Flag ? "YES" : "NO") << endl;
    }
}