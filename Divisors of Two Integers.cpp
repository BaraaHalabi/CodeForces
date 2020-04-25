#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false); //cin.tie(0);// cout.tie(0);
using namespace std;

vector <var> Divs;

void GetDivs (long long int N) {
    Divs.push_back(1);
    if (N != 1)
        Divs.push_back(N);
    for (int i = 2; i <= sqrt(N); i ++) {
        if (N % i == 0) {
            Divs.push_back(i);
            if (N / i != i)
                Divs.push_back(N / i);
        }
    }
}

int main() {
    var N;
    cin >> N;
    vector <var> Numbers(N);
    for (var i = 0; i < N; i ++)
        cin >> Numbers[i];
    sort(Numbers.begin(), Numbers.end());
    GetDivs(Numbers[Numbers.size() - 1]);
    cout << Numbers[Numbers.size() - 1];
    for (auto i : Divs)
        for (var j = 0; j < Numbers.size(); j ++)
            if (i == Numbers[j]) {
                Numbers[j] = 0;
                break;
            }
    sort(Numbers.begin(), Numbers.end());
    cout << " " << Numbers[Numbers.size() - 1];

}

