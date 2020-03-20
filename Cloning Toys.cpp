#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int C, O;
    cin >> C >> O;
    if (C - (O - 1) < 0 || (C - (O - 1)) % 2 != 0 || O == 0 || (O == 1 && C > 0)) {
        cout << "No";
        return 0;
    }
    cout << "Yes";
}