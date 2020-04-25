#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false); //cin.tie(0);// cout.tie(0);
using namespace std;

int main() {
    var N, M, K;
    cin >> N >> M >> K;
    cout << (M >= N && K >= N ? "Yes" : "No");
}
