#include <iostream>
using namespace std;

int main() {
    int Number;
    cin >> Number;
    if (((Number - 2) % 3) == 0) {
        cout << Number - 3 << " " << 2 << " " << 1;
    } else {
        cout << Number - 2 << " " << 1 << " " << 1;
    }
}
