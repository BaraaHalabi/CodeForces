#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q, M;
    cin >> N;
    vector <int> Cost(N);
    for (int i = 0; i < N; i ++)
        cin >> Cost[i];
    sort (Cost.begin(), Cost.end());
    cin >> Q;
    while (Q --) {
        cin >> M;
        auto it = upper_bound(Cost.begin(), Cost.end(), M);
        cout << it - Cost.begin() << endl;
    }
}
