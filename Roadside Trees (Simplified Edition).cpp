#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false);
using namespace std;

int ABS (int Number) {
    return (Number < 0 ? -Number : Number);
}

int main () {
    var Number, Curr, Next, Time = 0;
    cin >> Number >> Curr;
    Time += Curr + 1;
    for (int i = 0; i < Number - 1; i ++) {
        cin >> Next;
        Time += ABS(Curr - Next) + 2;
        Curr = Next;
    }
    cout << Time;
}
