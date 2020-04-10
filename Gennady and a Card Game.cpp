#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;
 
int main() {
    FIO;
    string Card, Hand, All;
    cin >> Card;
    for (var i = 0; i < 5; i ++) {
        cin >> Hand;
        All += Hand;
    }
    bool Possible = false;
    for (var i = 0; i < All.length(); i ++)
        if (All[i] == Card[0] || All[i] == Card[1])
            Possible = true;
    cout << (Possible ? "YES" : "NO");
}