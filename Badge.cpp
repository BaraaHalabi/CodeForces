#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;

vector <var> Graph[1001];

var BFS(var Node) {
    vector <bool> Vis(1001, false);
    queue <var> Adj({Node});
    Vis[Node] = true;
    while(!Adj.empty()) {
        Node = Adj.front();
        Adj.pop();
        for (auto i : Graph[Node])
            if (!Vis[i])
                Vis[i] = true, Adj.push(i);
            else
                return i;
    }
    return -1;
}

int main() {
    var N;
    cin >> N;
    for (var i = 1, S; i <= N; i ++)
        cin >> S, Graph[i].push_back(S);
    for (var i = 1; i <= N; i ++)
        cout << BFS(i) << " ";
}