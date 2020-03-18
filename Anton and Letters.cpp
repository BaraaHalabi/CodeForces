#include <iostream>
using namespace std;

int main() {
    bool Exsiting[26] = {0};
    string Letters;
    getline(cin, Letters);
    int Counter = 0;
    for (int i = 1; i < Letters.length(); i += 3) {
        if (!Exsiting[int(Letters[i]) - 97]) {
            Exsiting[int(Letters[i]) - 97] = true;
            Counter ++;
        }
    }
    cout << Counter;
}
