#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i < (var)B; i ++)
#define FIO ios::sync_with_stdio(false);
using namespace std;

int main() {
    FIO;
    bool A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << (((A ^ B) & (C | D)) ^ ((B & C) | (A ^ D))) << endl;
}
