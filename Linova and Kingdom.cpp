#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define repN(i, N) for (var i = 0; i < (var)N; i ++)
#define rep(i, A, B) for (var i = A; i < (var)B; i ++)
#define FIO ios::sync_with_stdio(false);
using namespace std;

vector <var> Graph[2 * (var)1e5 + 200];
vector <var> Depth(2 * (var)1e5 + 200);
vector <bool> Industrial(2 * (var)1e5 + 200);
pair <pair <var, var>, var> Score[2 * (var)1e5 + 200];

void BFT(var Node) {
    var Dep = 0;
    Depth[Node] = Dep;
    vector <bool> Vis(2 * (var)1e5 + 200, false);
    queue <var> Ch({Node});
    Vis[Node] = true;
    while(!Ch.empty()) {
        var Size = Ch.size();
        repN(Parent, Size) {
            Node = Ch.front(), Ch.pop();
            Depth[Node] = Dep;
            for (auto i : Graph[Node]) //Represents Child Nodes
                if (!Vis[i])
                    Vis[i] = true, Ch.push(i);
        }
        Dep ++;
    }
}

void DFT1 (var Node, var Parent) {
    var Sum = 0;
    for (auto i : Graph[Node])
        if (i != Parent)
            DFT1(i, Node), Sum += Score[i].first.second;
    Score[Node] = {{-1 * Depth[Node] + Sum + 1, Sum + 1}, Node};
}

void DFT2 (var Node, var Parent, var Above) {
    Depth[Node] -= Above;
    if (Industrial[Node])
        Above ++;
    for (auto i : Graph[Node])
        if (i != Parent)
            DFT2(i, Node, Above);
}

int main() {
    FIO;
    var N, K, A, B;
    cin >> N >> K;
    repN(i, N - 1) {
        cin >> A >> B;
        Graph[A].push_back(B);
        Graph[B].push_back(A);
    }
    BFT(1);
    var Res = 0;
    DFT1(1, -1);
    sort(Score + 1, Score + 1 + N);
    rep(i, 1, K + 1)
        Industrial[Score[i].second] = 1;
    DFT2(1, -1, 0);
    rep(i, 1, K + 1)
        Res += Depth[Score[i].second];
    cout << Res << endl;
}
