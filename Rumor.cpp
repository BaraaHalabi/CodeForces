#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;
 
vector <var> Graph[100100], Cost(100100);
bool Visited[100100] = {false};
var MinCost = 1e9, TotalCost = 0;
 
void DFS(var Node) {
    Visited[Node] = true;
    MinCost = min(MinCost, Cost[Node]);
    for (var i = 0; i < Graph[Node].size(); i ++)
        if(!Visited[Graph[Node][i]])
            DFS(Graph[Node][i]);
}
 
int main() {
    FIO;
    var N, M;
    cin >> N >> M;
    for (var i = 0; i < N; i ++)
        cin >> Cost[i];
    for (var i = 0, u, v; i < M; i ++) {
        cin >> u >>  v;
        -- u;
        -- v;
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }
    for (var i = 0; i < N; i ++) {
        if (!Visited[i]) {
            MinCost = 1e9;
            DFS(i);
            TotalCost += MinCost;
        }
    }
    cout << TotalCost;
}