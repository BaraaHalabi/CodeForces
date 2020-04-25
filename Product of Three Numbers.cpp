#include <iostream>
#include <bits/stdc++.h>
#define var long long
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i < (var)B; i ++)
#define FIO ios::sync_with_stdio(false);
using namespace std;

int main() {
    FIO;
    var T, N;
    cin >> T;
    while (T --) {
        cin >> N;
        set <var> Divs;
        for (var i = 2; i * i <= N; i ++)
            if (N % i == 0) {
                Divs.insert(i);
                N /= i;
                break;
            }
        for (var i = 2; i * i <= N; i ++)
            if (N % i == 0 && !Divs.count(i)) {
                Divs.insert(i);
                N /= i;
                break;
            }
        if (Divs.size() < 2 || Divs.count(N) || N == 1)
            cout << "NO" << endl;
        else {
            Divs.insert(N);
            cout << "YES" << endl;
            for (auto i : Divs)
                cout << i << " ";
            cout << endl;
        }
    }
}
