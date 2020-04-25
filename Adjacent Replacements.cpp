#include <iostream>
#include <bits/stdc++.h>
#define var long long
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i < (var)B; i ++)
#define FIO ios::sync_with_stdio(false);
using namespace std;

int main() {
    FIO;
    var N, Max = 0;
    cin >> N;
    vector <var> Numbers(N);
    set <var> Seq;
    repN(i, N)
        cin >> Numbers[i], Seq.insert(Numbers[i]), Seq.insert(Numbers[i] + 1);
    for (auto i : Seq)
        repN(j, N)
            if (Numbers[j] == i && i % 2 != 0)
                Numbers[j] ++;
            else if (Numbers[j] == i && i % 2 == 0)
                Numbers[j] --;
    for (auto i : Numbers)
        cout << i << " ";
}
