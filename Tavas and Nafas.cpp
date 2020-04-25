#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false);
using namespace std;

var D[2];

var Digits (var N) {
    D[1] = N % 10;
    N /= 10;
    D[0] = N % 10;
}

string O[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
string T[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string Teen[7] = {"thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

int main() {
    FIO;
    var N;
    cin >> N;
    Digits(N);
    if (N <= 10)
        cout << O[N];
    else
        if (N == 11)
            cout << "eleven";
        else if (N == 12)
            cout << "twelve";
        else if (N >= 13 && N <= 19)
            cout << Teen[N - 13];
        else if (N >= 20 && N <= 99)
            if (N % 10 == 0)
                cout << T[D[0] - 2];
            else
                cout << T[D[0] - 2] << '-' << O[D[1]];
}
