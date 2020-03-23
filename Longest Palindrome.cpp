#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool Palindrome (string Str) {
    for (int i = 0; i <= Str.length() / 2; i ++) {
        if (Str[i] != Str[Str.length() - i - 1])
            return false;
    }
    return true;
}

string Reverse (string Str) {
    string S = "";
    for (int i = Str.length() - 1; i >= 0; i --)
        S += Str[i];
    return S;
}

map <string, int> Map;

int main() {
    int N, M;
    cin >> N >> M;
    vector <string> C, Side;
    for (int i = 0; i < N; i ++) {
        string Str;
        cin >> Str;
        if (Palindrome(Str))
            C.push_back(Str);
        else {
            Map[Str] ++;
            Side.push_back(Str);
        }
    }
    vector <string> Ins, Ans;
    for (auto i : Side) {
        if(Map[Reverse(i)]) {
            Map[i] --;
            Map[Reverse(i)] --;
            Ins.push_back(i);
        }
    }
    for (auto i : Ins)
        Ans.push_back(i);
    if (C.size())
        Ans.push_back(C[0]);
    for (int i = Ins.size() - 1; i >= 0; i --)
        Ans.push_back(Reverse(Ins[i]));
    if (Ans.size() == 0)
        cout << 0;
    else {
        string Answer = "";
        for(auto i : Ans)
            Answer += i;
        cout << Answer.length() << endl << Answer;
    }
}

