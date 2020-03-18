#include <iostream>
using namespace std;
 
int main() {
    int A, B, T;
    cin >> T;
    for (int i = 0; i < T; i ++) {
        cin >> A >> B;
        if (A > B) {
            if ((A - B) % 2 == 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        } else if (A < B) {
            if ((A - B) % 2 == 0)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        } else
            cout << 0 << endl;
    }
}