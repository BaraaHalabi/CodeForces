#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false);
using namespace std;

vector <var> Nums((var)2e5), Occ[200], Tmp;
var Res;

void FindThreeBlockPal() {
    var Left = 0, Right = (var)Tmp.size() - 1, Seg = 0, Su = 0;
    for (auto i : Tmp)
        Su += i;
    Res = max(Res, Su);
    while(true) {
        Seg ++;
        bool L = false, R = false;
        while(Left <= Right && !L) {
            if (!Tmp[Left])
                L = true;
            else
                Su --;
            Left ++;
        }
        while(Left <= Right && !R) {
            if (!Tmp[Right])
                R = true;
            else
                Su --;
            Right --;
        }
        if (!L || !R)
            break;
        Res = max(Res, 2 * Seg + Su);
    }
}

void Solve() {
    var N;
    cin >> N;
    repN(i, N) {
        cin >> Nums[i], Nums[i] --;
        Occ[Nums[i]].push_back(i);
    }
    Res = 0;
    repN(i, 200)
        Occ[i].push_back(N);
    repN(A, 200) {
        if(Occ[A].size() == 1)
            continue;
        repN(B, 200) {
            if(A == B) {
                Res = max(Res, (var)Occ[A].size() - 1);
                continue;
            }
            for(var i = 0, j = 0; i < Occ[A].size() - 1 || j < Occ[B].size() - 1;) {
                if(Occ[A][i] < Occ[B][j])
                    Tmp.push_back(0), i ++; //0 represents A
                else
                    Tmp.push_back(1), j ++; //1 represents B
            }
            FindThreeBlockPal();
            Tmp.clear();
        }
    }
    cout << Res << endl;
    repN(i, 200)
        Occ[i].clear();
}

int main() {
    var T;
    cin >> T;
    while(T --)
        Solve();
}
