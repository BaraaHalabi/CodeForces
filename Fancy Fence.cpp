#include <iostream>
#include<bits/stdc++.h>
#define var long long int
using namespace std;

vector <double> Angels;

void GetPoly() {
    for(var i = 3; i <= 360; i ++)
        Angels.push_back((i - 2) * 180.0 / i);
    sort(Angels.begin(), Angels.end());
}

int main() {
    GetPoly();
    var T, A;
    cin >> T;
    while (T --) {
        cin >> A;
        cout << ((binary_search(Angels.begin(), Angels.end(), (double)A)) ? "YES" : "NO") << endl;
    }
}

