#include <iostream>
#include<bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
 
vector <var> Divs;
 
void GetDivs(var N) {
    if (N != 1)
        Divs.push_back(1);
    Divs.push_back(N);
    for (var i = 2; i <= sqrt(N); i ++) {
        if (N % i == 0) {
            Divs.push_back(i);
            if (N / i != i)
                Divs.push_back(N / i);
        }
    }
}
 
int main() {
    FIO;
    var N, X, Counter = 0;
    cin >> N >> X;
    GetDivs(X);
    for (auto i : Divs)
        if (X / i <= N && i <= N)
            ++ Counter;
    cout << Counter;
}
 