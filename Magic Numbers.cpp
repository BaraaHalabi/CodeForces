#include <iostream>
 
using namespace std;
 
int main() {
    string Number;
    bool Magical = true;
    cin >> Number;
    for (int i = 0; i < Number.length(); i ++) {
        if (Number[i] == '1' && Number[i + 1] == '4' && Number[i + 2] == '4') {
            i += 2;
        } else if (Number[i] == '1' && Number[i + 1] == '4') {
            i += 1;
        } else if (Number[i] == '1') {
 
        } else {
            Magical = false;
        }
        //cout << i;
    }
    if (Magical) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}