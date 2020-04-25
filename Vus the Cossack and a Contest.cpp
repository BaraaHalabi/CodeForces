#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false); //cin.tie(0);// cout.tie(0);
using namespace std;

int UnEqual (char A, char B, char C) {
    set <char> Letters;
    Letters.insert(A);
    Letters.insert(B);
    Letters.insert(C);
    return Letters.size();
}

int main() {
    /*
    //var N, C = 0;
    string Str;
    //cin >> N >> Str;
    if (N < 6)
    for (auto i = 0; i < N - 3; i ++) {
        if (Str[i] != Str[i + 3])
            Str[i + 3] = Str[i], C ++;
    }
    if (N <= 3) {
        cout << N - UnEqual(Str[N - 3], Str[N - 2], Str[N - 1]);
        return 0;
    }
    */
    var N, M, K;
    cin >> N >> M >> K;
    cout << (M >= N && K >= N ? "Yes" : "No");
}
