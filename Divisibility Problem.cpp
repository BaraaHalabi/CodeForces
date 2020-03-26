#include <iostream>
#include <bits/stdc++.h>
#define var long long int
using namespace std;
 
int main () {
    int T, N1, N2;
    cin >> T;
    while (T --) {
        cin >> N1 >> N2;
        if (N1 % N2 == 0) {
            cout << 0 << endl;
            continue;
        }
        cout << N2 - N1 % N2 << endl;
    }
}