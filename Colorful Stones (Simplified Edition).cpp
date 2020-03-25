#include <iostream>
using namespace std;

int main() {
    string Map, Dir;
    cin >> Map >> Dir;
    int Pos = 0;
    for (int i = 0; i < Dir.length(); i ++)
        if (Dir[i] == Map[Pos])
            Pos ++;
    cout << ++ Pos;
}