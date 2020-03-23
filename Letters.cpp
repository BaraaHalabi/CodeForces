#include iostream
#include bitsstdc++.h
using namespace std;
 
int main() {
    long long int N, M;
    cin  N  M;
    vector long long int Rooms(N);
    long long int Sum = 0;
    for (long long int i = 0, Number; i  N; i ++) {
        cin  Number;
        Rooms[i] = Number + Sum;
        Sum += Number;
    }
    for (long long int i = 0, Q; i  M; i ++) {
        cin  Q;
        auto it = lower_bound(Rooms.begin(), Rooms.end(), Q);
        if (it == Rooms.begin())
            cout  it - Rooms.begin() + 1     Q  endl;
        else
            cout  it - Rooms.begin() + 1     Q - Rooms[it - Rooms.begin() - 1]  endl;
    }
}