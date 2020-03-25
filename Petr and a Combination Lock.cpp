#include <iostream>
#include <bits/stdc++.h>
#define var long long int
using namespace std;

vector <int> Rotations;
bool Can = false;

int Ang (int Curr, int Add) {
    if (Add >= 0 && Curr + Add >= 360)
        return Curr + Add - 360;
    else if (Add < 0 && Curr + Add < 0)
        return 360 + Add + Curr;
    else
        return Curr + Add;
}


void Ending (int i, int Curr) {
    long long int Sum = 0;
    if (i == Rotations.size()) {
        if (Curr == 0)
            Can = true;
        return;
    }
    Ending(i + 1, Ang(Curr, Rotations[i]));
    Ending(i + 1, Ang(Curr, Rotations[i] * -1));
    return;
}

int main() {
    int N, A;
    cin >> N;
    while (N --) {
        cin >> A;
        Rotations.push_back(A);
    }
    Ending(0, 0);
    cout << (Can ? "YES" : "NO");
}

