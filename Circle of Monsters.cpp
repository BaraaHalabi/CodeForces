#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);
#define forN(i, N) for (var i = 0; i < N; i ++)
using namespace std;

int main() {
    FIO;
    var T;
    cin >> T;
    while (T --) {
        var N;
        cin >> N;
        vector <var> A(N), B(N);
        forN(i, N)
            cin >> A[i] >> B[i];
        var Bull = 0, Min = 1e12;
        forN(i, N) {
            var I = (i + 1) % N;
            var Value = min(A[I], B[i]);
            Bull += A[I] - Value;
            Min = min(Min, Value);
        }
        Bull += Min;
        cout << Bull << endl;
    }
}
