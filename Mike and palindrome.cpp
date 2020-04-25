#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false); cin.tie();
using namespace std;

int main() {
    FIO;
    string Pal;
    cin >> Pal;
    var N = Pal.length(), Dif = 0;
    repN(i, N / 2)
        if (Pal[i] != Pal[N - i - 1])
            Dif ++;
    cout << (Dif == 1 || !Dif && N % 2 ? "YES" : "NO");
}
