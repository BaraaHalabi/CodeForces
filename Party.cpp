#include <iostream>
#include <bits/stdc++.h>
#define var long long int
#define FIO ios::sync_with_stdio(false);// cin.tie(0); cout.tie(0);
using namespace std;

vector <var> Graph[2100];
var MaxDepth = 0;

void DFS(var Node, var Depth) {
    Depth ++;
    MaxDepth = max(MaxDepth, Depth);
    for (var i = 0; i < Graph[Node].size(); i ++)
        DFS(Graph[Node][i], Depth);
}

int main() {
    FIO;
    var N;
    cin >> N;
    for (var i = 0, Number; i < N; i ++) {
        cin >> Number;
        if (Number != -1)
            Graph[i + 1].push_back(Number);
    }
    for (var i = 0; i < N; i ++)
        DFS(i + 1, 0);
    cout << MaxDepth;
}