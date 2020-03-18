#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, M, T;
    cin >> T;
    while (T --) {
        cin >> N >> M;
        int Sum = 0;
        for (int i = 0; i < N; i++) {
            int Number;
            cin >> Number;
            Sum += Number;
        }
        cout << (Sum >= M ? M : Sum) << endl;;
    }
}