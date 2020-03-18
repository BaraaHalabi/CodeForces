#include <iostream>
#include <cmath>
using namespace std;

int ABS(int Number) {
    if (Number < 0)
        Number *= -1;
    return Number;
}

int main() {
    int Prizes, Prize, Min = 500000;
    cin >> Prizes;
    for (int i = 0; i < Prizes; i ++) {
        cin >> Prize;
        Min = min(ABS(Prize - 500000), Min);
        if (Prize <= 500000)
            Min ++;
    }
    cout << 500000 - Min;
}
