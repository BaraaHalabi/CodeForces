#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;

bool Data[] {1, 0, 1, 1, 1, 1, 1, 0, 1, 0,
             0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
             1, 0, 1, 1, 1, 1, 1, 0, 1, 0,
             1, 0, 1, 1, 1, 1, 1, 0, 1, 0,
             1, 0, 1, 1, 1, 1, 1, 0, 1, 0,
             1, 0, 1, 1, 1, 1, 1, 0, 1, 0,
             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
             1, 0, 1, 1, 1, 1, 1, 0, 1, 0,
             0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int main() {
    FIO;
    var Number;
    cin >> Number;
    cout << (Data[Number] ? "YES" : "NO");
}
