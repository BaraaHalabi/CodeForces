#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    FIO;
    var T, N;
    cin >> T;
    while (T --) {
        cin >> N;
        vector <var> Skill(N);
        for (var i = 0; i < N; i ++)
            cin >> Skill[i];
        sort(Skill.begin(), Skill.end());
        bool Found = false;
        for (var i = 0; i < N - 1; i ++)
            if (Skill[i + 1] - Skill[i] == 1)
                Found = true;
        cout << (Found ? 2 : 1) << endl;
    }
}
