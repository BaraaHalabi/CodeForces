#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;
 
int main() {
    FIO;
    var T, N, M;
    cin >> T;
    while (T --) {
        cin >> N >> M;
        cout << (N % M == 0 ? "YES" : "NO") << endl;
    }
}