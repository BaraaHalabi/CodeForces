#include <iostream>
#define var long long int
using namespace std;

int main () {
    int T, N;
    cin >> T;
    while (T --) {
        cin >> N;
        string Str, A1, A2;
        cin >> Str;
        bool Flag = false;
        for (int i = 0; i < Str.length(); i ++) {
            switch (Str[i]) {
            case '2':
                if (Flag) {
                    A1 += '0';
                    A2 += '2';
                } else {
                    A1 += '1';
                    A2 += '1';
                }
                break;
            case '1':
                if (!Flag) {
                    A1 += '1';
                    A2 += '0';
                    Flag = !Flag;
                } else {
                    A1 += '0';
                    A2 += '1';
                }
                break;
            case '0':
                A1 += '0';
                A2 += '0';
            }
        }
        cout << A1 << endl << A2 << endl;
    }
}
