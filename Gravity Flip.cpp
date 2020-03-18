#include <iostream>
using namespace std;

int main() {
    int Columns;
    cin >> Columns;
    int Toys[Columns];
    for (int i = 0; i < Columns; i ++) {
        cin >> Toys[i];
    }
    for (int i = 0; i < Columns; i ++) {
        for (int j = Columns - 1; j >= 0; j --) {
            if (j != 0) {
                if (Toys[j] < Toys[j - 1]) {
                    int Carry = Toys[j - 1] - Toys[j];
                    //cout << Carry << "This";
                    Toys[j] += Carry;
                    Toys[j - 1] -= Carry;
                }
            }
        }
    }

    for (int i = 0; i < Columns; i ++) {
        cout << Toys[i] << " ";
    }
}
