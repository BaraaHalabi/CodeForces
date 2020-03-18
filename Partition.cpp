#include <iostream>
using namespace std;

int main() {
    int Number, N, A = 0, B = 0;
    cin >> Number;
    for (int i = 0; i < Number; i ++) {
        cin >> N;
        if (N > 0)
            A += N;
        else
            B += N;
    }
    cout << A - B;
}
