#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i < (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false);
using namespace std;

vector <bool> H(10, false);

int main() {
    FIO;
    var N;
    string Str;
    cin >> N >> Str;
    rep(i, 0, N){
        if(Str[i] == 'L') {
            rep(j, 0, 10)
                if(H[j] == 0) {
                    H[j] = true;
                    break;
            }
        }
        else if(Str[i] == 'R') {
            dep(j, 9, 0)
                if(H[j] == 0) {
                    H[j] = true;
                    break;
            }
        }
        else
            H[Str[i] - '0'] = false;
    }
    for (auto i : H)
        cout << i;
}
