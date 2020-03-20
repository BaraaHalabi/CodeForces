#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
map <long long int, int> E, E1, E2;
 
int main() {
    int Number;
    cin >> Number;
    vector <int> Errors(Number);
    for (int i = 0; i < Number; i ++) {
        cin >> Errors[i];
        E[Errors[i]] ++;
    }
    for (int i = 0, N; i < Number - 1; i ++) {
        cin >> N;
        E1[N] ++;
    }
    for (auto it = Errors.begin(); it != Errors.end(); it ++) {
        if (E[*it] != E1[*it]) {
            cout << *it << endl;
            break;
        }
    }
    for (int i = 2, N; i < Number; i ++) {
        cin >> N;
        E2[N] ++;
    }
    for (auto it = Errors.begin(); it != Errors.end(); it ++) {
        if (E1[*it] != E2[*it]) {
            cout << *it << endl;
            break;
        }
    }
}