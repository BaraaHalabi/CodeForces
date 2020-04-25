#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false);
using namespace std;

int main() {
    var T;
    cin >> T;
    while(T --) {
        var N;
        cin >> N;
        var i = 3;
        while(N % i != 0) {
            i = i << 1;
            i |= 1;
        }
        cout << N / i << endl;
    }
}
