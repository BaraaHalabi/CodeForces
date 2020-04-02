#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;
 
int main() {
    FIO;
    var N, K;
    cin >> N >> K;
    vector <var> Numbers(N);
    for (var i = 0; i < N; i ++)
        cin >> Numbers[i];
    sort(Numbers.begin(), Numbers.end());
    if (K > Numbers.size() || Numbers[K - 1] == Numbers[K] || K == 0 && *Numbers.begin() - 1 < 1)
        cout << -1;
    else if (K == 0)
        cout << *Numbers.begin() - 1;
    else
        cout << Numbers[K - 1];
}