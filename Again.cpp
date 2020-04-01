#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    FIO;
    string Number;
    cin >> Number;
    cout << int(Number[Number.size() - 1] - '0') % 2;
}
