#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
char Opp(char Letter) {
    if (Letter == 'a')
        return 'b';
    else
        return 'a';
}
 
int main() {
    string Str;
    int N, Count = 0;
    cin >> N >> Str;
    for (int i = 0; i < N; i += 2) {
        if (Str[i] == Str[i + 1]) {
            Count ++;
            Str[i] = Opp(Str[i + 1]);
        }
    }
    cout << Count << endl << Str;
}