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
        vector <var> A, B;
        if(N % 4 == 0) {
            cout << "YES" << endl;
            var Ev = 2, Od = 1;
            for(var i = 0; i < N / 2; i ++) {
                A.push_back(Ev);
                B.push_back(Od);
                if(i % 2 == 0)
                    Od += 4, Ev += 2;
                else
                    Od += 2, Ev += 4;
            }
            for(auto i : A)
                cout << i << " ";
            for(auto i : B)
                cout << i << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
}
