#include <iostream>
#include<bits/stdc++.h>
#define var long long int
using namespace std;

int main() {
    var N, M;
    cin >> N >> M;
    if (N == 1 && M == 10) {
        cout << -1;
        return 0;
    }
    if (M == 10) {
        cout << 1;
        for (var i = 0; i < N - 1; i ++)
            cout << 0;
    } else {
        for (int i = 0; i < N ; i ++)
            cout << M;
    }
}

