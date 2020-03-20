#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Max = 0;
    cin >> N;
    int C[N];
    for (int i = 0; i < N; i ++) {
        cin >> C[i];
        Max = max(Max, C[i]);
    }
    int Money = 0;
    for (int i = 0; i < N; i ++)
        Money += Max - C[i];
    cout << Money;
}
