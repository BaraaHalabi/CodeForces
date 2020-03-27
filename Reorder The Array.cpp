#include <iostream>
#include<bits/stdc++.h>
#define var long long int
using namespace std;
 
int main() {
    var N;
    cin >> N;
    vector <var> Numbers(N);
    map <var, var> Count;
    for (var i = 0; i < N; i ++) {
        cin >> Numbers[i];
        Count[Numbers[i]] ++;
    }
    var Max = 0;
    for (auto i : Numbers)
        Max = max(Max, Count[i]);
    cout << N - Max;
}