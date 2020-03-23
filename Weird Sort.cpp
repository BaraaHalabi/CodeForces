#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N, M;
    cin >> T;
    while (T --) {
        cin >> N >> M;
        vector <int> Numbers(N), Sorted(N), Swaps(M);
        for (int i = 0; i < N; i ++) {
            cin >> Numbers[i];
            Sorted[i] = Numbers[i];
        }
        for (int i = 0; i < M; i ++)
            cin >> Swaps[i];
        sort(Swaps.begin(), Swaps.end());
        sort(Sorted.begin(), Sorted.end());
        for (int i = 0; i < N; i ++) {
            for (int j = 0; j < N; j ++) {
                bool Found = binary_search(Swaps.begin(), Swaps.end(), j + 1);
                if (Numbers[j] > Numbers[j + 1] && Found) {
                    int Temp = Numbers[j];
                    Numbers[j] = Numbers[j + 1];
                    Numbers[j + 1] = Temp;
                }
            }
        }
        cout << (Numbers == Sorted ? "YES" : "NO") << endl;
    }
}

