#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i <= (var)B; i ++)
#define dep(i, A ,B) for (var i = A; i >= (var)B; i --)
#define FIO ios::sync_with_stdio(false);
using namespace std;

var N, S;
bool Possible = false;

vector <var> Data((var)2e3), Lane1((var)2e3), Lane2((var)2e3);
vector <var> Graph[(var)2e3];

var GetPos(var Pos) {
    if (Pos > N)
        return Pos - N;
    else
        return Pos;
}

void DFT(var Node) {
    if (GetPos(Node + 1) == S && Data[Node])
        Possible = true;
    for (auto i : Graph[Node])
        DFT(i);
}

int main() {
    cin >> N >> S;
    repN(i, N)
        cin >> Lane1[i], Data[i] = Lane1[i];
    repN(i, N)
        cin >> Lane2[i], Data[i + N] = Lane2[i];
    rep(i, 0, N - 2)
        Graph[i].push_back(i + 1);
    dep(i, N * 2 - 1, N + 1)
        Graph[i].push_back(i - 1);
    repN(i, N)
        if (Lane1[i] && Lane2[i])
            Graph[i].push_back(i + N);
    if (!Lane1[0]) {
        cout << "NO";
        return 0;
    }
    DFT(0);
    cout << (Possible ? "YES" : "NO");
}
