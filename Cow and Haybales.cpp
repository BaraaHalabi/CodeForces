#include <iostream>
using namespace std;

int main() {
    int Tests, Days, Hay, Pile;
    cin >> Tests;
    for (int i = 0; i < Tests; i ++) {
        cin >> Hay >> Days;
        int Row[Hay] = {0};
        for (int j = 0; j < Hay; j ++) {
            cin >> Row[j];
        }
        Pile = Row[0];
        for (int j = 1; j < Hay; j ++) {
            while (Row[j] > 0 && Days >= j) {
                Row[j] --;
                Days -= j;
                Pile ++;
            }
            if (Days <= 0)
                break;
        }
        cout << Pile << endl;
    }
}