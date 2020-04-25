#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false);
using namespace std;

var A[(var)2e5];
var N;


int main() {
    FIO;
    var T;
    cin >> T;
    while(T --) {
        cin >> N;
        repN(i, N)
            cin >> A[i];
        var Res = 0;
        repN(i, N) {
            var Num = A[i];
            while((A[i] > 0 && Num > 0) || ((A[i] < 0 && Num < 0))) {
                Num = max(Num, A[i]);
                i ++;
                if(i >= N)
                    break;
            }
            i --;
            Res += Num;
        }
        cout << Res << endl;
    }
}
