#include <iostream>
#include<bits/stdc++.h>
#define var long long int
using namespace std;

int main() {
    int N;
    cin >> N;
    vector <int> Numbers(N), Reversed(N);
    for (int i = 0; i < N; i ++) {
        cin >> Numbers[i];
        Reversed[i] = Numbers[i];
    }
    sort(Numbers.begin(), Numbers.end());
    sort(Reversed.begin(), Reversed.end());
    reverse(Reversed.begin(), Reversed.end());
    /*
    for (auto i : Numbers)
        cout << i << " ";
    cout << endl;
    for (auto i : Reversed)
        cout << i << " ";
    cout << endl;
    */
    bool State = true;
    int I1 = 0, I2 = 0;
    for (int i = 0; i < N; i ++) {
        if (State) {
            cout << Numbers[I1] << " ";
            ++ I1;
        } else {
            cout << Reversed[I2] << " ";
            ++ I2;
        }
        State = !State;
    }
}
