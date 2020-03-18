#include <iostream>

using namespace std;

int GCD (int A, int B) {
    while(A != B) {
        if (A > B)
            A -= B;
        else
            B -= A;
    }
    return A;
}

int main() {
    int X, Y;
    cin >> X >> Y;
    int Chance = 0;
    for (int i = 1; i <= 6; i ++) {
        if (i >= max(X, Y))
            Chance ++;
    }
    if (Chance == 0)
        cout << "0/1";
    else
        cout << Chance / GCD(Chance, 6) << '/' << 6 / GCD(Chance, 6);
}
