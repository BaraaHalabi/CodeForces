#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, M;
    cin >> N;
    vector <int> Num1(N);
    for (int i = 0; i < N; i ++)
        cin >> Num1[i];
    cin >> M;
    vector <int> Num2(M);
    for (int i = 0; i < M; i ++)
        cin >> Num2[i];
    sort(Num1.begin(), Num1.end());
    sort(Num2.begin(), Num2.end());
    vector <int> :: iterator it1, it2;
    it1 = Num1.end();
    it2 = Num2.end();
    --it1;
    --it2;
    cout << *it1 << " " << *it2;
}