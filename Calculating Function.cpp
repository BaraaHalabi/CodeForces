#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    FIO;
    var N;
    cin >> N;
    cout << ((N % 2 == 0) ? N / 2 : -N / 2 - 1);
}
