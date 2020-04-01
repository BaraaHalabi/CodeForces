#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;

var Power(var B, var P) {
    var Result = 1;
    for (var i = 0; i < P; i ++)
        Result *= B;
    return Result;
}

int main() {
    FIO;
    var Num1;
    string Num2;
    cin >> Num1 >> Num2;
    vector <char> Flipped;
    for (var i = 0; i < Num2.length(); i ++)
        Flipped.push_back(Num2[i]);
    for (var i = 0; i < Flipped.size(); i ++)
        Num1 += int(Flipped[i] - '0') * Power(10, i);
    cout << Num1;
}
