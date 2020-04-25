#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i < (var)B; i ++)
#define FIO ios::sync_with_stdio(false);
using namespace std;
 
vector <var> Graph[(var)1e5 + 100];
vector <bool> Cats((var)1e5 + 100, false);
vector <bool> Vis((var)1e5 + 100, false);

var N, M, A, B, State, NumberOfWays = 0;

void DFT(var Node, var CatSum) {
    Vis[Node] = true;
    if (CatSum > M)
        return;
    bool Can = false;
    for (var i = 0; i < Graph[Node].size(); i ++)
        if (!Vis[Graph[Node][i]]) {
            if (Cats[Graph[Node][i]])
                DFT(Graph[Node][i], CatSum + 1);
            else
                DFT(Graph[Node][i], 0);
            Can = true;
        }
    if (!Can)
        NumberOfWays ++;
}
 
int main() {
    FIO;
    cin >> N >> M;
    repN(i, N) {
        cin >> State;
        if (State)
            Cats[i + 1] = true;
    }
    repN(i, N - 1) {
        cin >> A >> B;
        Graph[A].push_back(B);
        Graph[B].push_back(A);
    }
    DFT(1, Cats[1]);
    cout << NumberOfWays;
}
