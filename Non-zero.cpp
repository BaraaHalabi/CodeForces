#include <iostream>
#include<bits/stdc++.h>
#define var long long int
using namespace std;

int main() {
    int T, N;
    cin >> T;
    while (T --) {
        cin >> N;
        int Counter = 0, Sum = 0;
        for (int i = 0, Number; i < N; i ++) {
            cin >> Number;
            if (!Number)
                Counter ++;
            Sum += Number;
        }
        //cout << "ANS ";
        if (Counter)
            if (!(Sum + Counter))
                cout << Counter + 1 << endl;
            else
                cout << Counter << endl;
        else if (!Sum)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
