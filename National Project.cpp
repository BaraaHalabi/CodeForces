#include <iostream>
#include <bits/stdc++.h>
#define var long long int
using namespace std;

int main() {
    var T, N, G, B;
    cin >> T;
    while (T --) {
        cin >> N >> G >> B;
        long double Needed = N / 2.0;
        var ReqG = floor(ceil(Needed) / (long double)G) * (B + G);
        if ((long long int)ceil(Needed) % G)
            ReqG += (long long int)ceil(Needed) % G;
        else
            ReqG -= B;
        cout << max(ReqG, N) << endl;
    }
}

