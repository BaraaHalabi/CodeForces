#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false);
using namespace std;

int main () {
    var N, M, A, B;
    cin >> N >> M >> A >> B;
    var Val = N / M * B + N % M * A;
    if (N * A < Val)
        cout << N * A;
    else if (ceil(N / (M * 1.0)) * B < Val)
        cout << ceil(N / (M * 1.0)) * B;
    else
        cout << Val;
}
