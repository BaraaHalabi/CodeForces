#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector <int> Piles;

int main() {
    int Number, Q, W;
    cin >> Number;
    int Sum = 0;
    for (int i = 0, N; i < Number; i ++) {
        cin >> N;
        Piles.push_back(N + Sum);
        Sum += N;
    }
    cin >> Q;
    while (Q --) {
        cin >> W;
        auto it = lower_bound(Piles.begin(), Piles.end(), W);
        cout << it - Piles.begin() + 1 << endl;
    }
}
