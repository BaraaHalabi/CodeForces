#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
    while (T --) {
        int Length;
        cin >> Length;
        set <int> Numbers;
        for (int i = 0, Number; i < Length; i ++) {
            cin >> Number;
            Numbers.insert(Number);
        }
        cout << Numbers.size() << endl;
    }
}
 