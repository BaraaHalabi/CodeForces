#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string Tele, Output;
    cin >> Tele;
    for (int i = 0; i < Tele.length();) {
        if (Tele[i] == '.') {
            Output += '0';
            i += 1;
        } else if (Tele[i] == '-' && Tele[i + 1] == '.') {
            Output += '1';
            i += 2;
        } else if (Tele[i] == '-' && Tele[i + 1] == '-') {
            Output += '2';
            i += 2;
        }
    }
    cout << Output;
}