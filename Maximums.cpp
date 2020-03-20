#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int Max = 0;
    for (int i = 0, Number; i < N; i ++) {
        cin >> Number;
        cout << Number + Max << " ";
        Max = max(Max, Number + Max);
    }
}
