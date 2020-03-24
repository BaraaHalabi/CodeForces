#include <iostream>
#include <bits/stdc++.h>
#define var long long int
using namespace std;

int main() {
    string Str;
    cin >> Str;
    set <char> Letters;
    int Min = 10000000;
    for (int i = 0; i < Str.length(); i ++)
        Letters.insert(Str[i]);
    for (auto i : Letters) {
        int Counter = 0, Max = 0;
        for (int j = 0; j < Str.length(); j ++) {
            Counter ++;
            if (Str[j] == i) {
                Max = max(Max, Counter);
                Counter = 0;
            }
        }
        Counter ++;
        Max = max(Max, Counter);
        //cout << Max << " ";
        Min = min(Min, Max);
    }
    cout << Min;
}

