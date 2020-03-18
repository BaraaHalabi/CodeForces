#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Total = 0, Answer = 0;
    cin >> N;
    int Queue[N];
    for (int i = 0; i < N; i ++)
        cin >> Queue[i];
    sort(Queue, Queue + N);
    for (int i = 0; i < N; i ++) {
        if (Total <= Queue[i]) {
            Total += Queue[i];
            Answer ++;
        }
    }
    cout << Answer;
}
