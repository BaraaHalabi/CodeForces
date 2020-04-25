#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false);
using namespace std;

var Ans;

var SQ(var Number) {
    return Number * Number;
}

void Find(vector <var> R, vector <var> G, vector <var> B) {
    for (auto i : R) {
        auto R = lower_bound(G.begin(), G.end(), i);
        auto L = upper_bound(B.begin(), B.end(), i);
        if(R == G.end() || L == B.begin())
            continue;
        L --;
        Ans = min(Ans, SQ(i - *R) + SQ(*R - *L) + SQ(*L - i));
    }
}

int main() {
    FIO;
    var T, R, G, B;
    cin >> T;
    while (T --) {
        cin >> R >> G >> B;
        vector <var> RG(R), GG(G), BG(B);
        repN(i, R)
            cin >> RG[i];
        repN(i, G)
            cin >> GG[i];
        repN(i, B)
            cin >> BG[i];
        sort(RG.begin(), RG.end());
        sort(GG.begin(), GG.end());
        sort(BG.begin(), BG.end());
        Ans = 9e18;
        Find(RG, GG, BG);
        Find(RG, BG, GG);
        Find(GG, RG, BG);
        Find(GG, BG, RG);
        Find(BG, RG, GG);
        Find(BG, GG, RG);
        cout << Ans << endl;
    }
}
