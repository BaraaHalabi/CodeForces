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
    var T;
    cin >> T;
    while(T --) {
        var N, K;
        cin >> N >> K;
        var A[N], B[N];
        memset(B, 0, sizeof B);
        for(int i = 0; i < N; i++)
            cin >> A[i];
        for(int i = 1; i < N - 1; i++)
            if(A[i] > A[i - 1] && A[i] > A[i + 1])
                B[i]++;
        var mx = 0;
        for(int i = 1; i < K - 1; i++)
            mx += B[i];
        var nt = mx;
        for(int i = 1; i < N - K + 1; i++) {
            mx -= B[i];
            mx += B[i + K - 2];
            nt = max(mx, nt);
        }
        mx = 0;
        for(int i = 1; i < K - 1; i++)
            mx += B[i];
        var l = 1;
        if(mx == nt)
            l = 1;
        else {
            for(int i = 1; i < N - K + 1; i++) {
                mx -= B[i];
                mx += B[i + K - 2];
                if(mx == nt) {
                    l = i + 1;
                    break;
                }
            }
        }
        cout << nt + 1 << " " << l << endl;
    }
}
