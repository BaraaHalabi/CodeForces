#include <iostream>
 
using namespace std;
 
int main() {
    int Customers, Hours, Minutes, Cashes = 1, Streak = 0;
    cin >> Customers;
    int PrevH = -1, PrevM = -1;
    for (int i = 0; i < Customers; i ++) {
        cin >> Hours >> Minutes;
        if (Hours == PrevH && Minutes == PrevM) {
            Streak ++;
        } else {
            Streak = 1;
        }
        Cashes = max (Cashes, Streak);
        PrevH = Hours;
        PrevM = Minutes;
    }
    cout << Cashes;
}