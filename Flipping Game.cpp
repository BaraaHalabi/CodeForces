#include <iostream>
#include<bits/stdc++.h>
#define var long long int
#define IF if
using namespace std;

// Worlds Most Dumb Solution //

int main() {
    int N;
    cin >> N;
    vector <int> Numbers(N);
    for (int i = 0; i < N; i ++)
        cin >> Numbers[i];
    int Curr = 0, Max = -100, Range = 0, MI = 0, MJ = N - 1;
    for (int i = 0; i < N; i ++) {
        for (int j = i; j < N; j ++) {
            Curr = 0;
            for (int k = i; k <= j; k ++) {
                if (Numbers[k])
                    Curr --;
                else
                    Curr ++;
            }
            //cout << "Curr " << Curr << endl;
            if (Curr > Max) {
                Max = Curr;
                MI = i;
                MJ = j;
            }
        }
    }
    //cout << "****" << Max << "****" << endl;
    //cout << MI << ":" << MJ << endl;
    for (int i = MI; i <= MJ; i ++) {
        if (Numbers[i])
            Numbers[i] = 0;
        else
            Numbers[i] = 1;
    }
    /*
    cout << "Current State" << endl;
    for (auto i : Numbers)
        cout << i;
    cout << endl;
    */
    int Ones = 0;
    for (auto i : Numbers)
        if (i)
            Ones ++;
    cout << Ones;
}
